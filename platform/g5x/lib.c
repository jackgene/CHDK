
#include "platform.h"
#include "lolevel.h"
#include "live_view.h"

extern int active_bitmap_buffer;
extern char* bitmap_buffer[];

void vid_bitmap_refresh()
{
    extern void _transfer_src_overlay(int);
    extern void _VTMLock();
    extern void _VTMUnlock();
    _VTMLock();
    int n = active_bitmap_buffer;
    _transfer_src_overlay(n^1);
    _transfer_src_overlay(n);
    _VTMUnlock();
}

void *vid_get_bitmap_fb()
{
    // For live view send YUV instead of RGBA
    return bitmap_buffer[active_bitmap_buffer];
}

// the opacity buffer defines opacity for the bitmap overlay's pixels
extern void *opacity_buffer[];

void *vid_get_opacity_active_buffer()
{
    return opacity_buffer[active_bitmap_buffer];
}

char *camera_jpeg_count_str()
{
    extern char jpeg_count_str[];
    return jpeg_count_str;
}

void shutdown()
{
    // TODO:
    while (1)
        ;
}

#define LED_PR 0xd20b0994 // green LED on the back

void debug_led(int state) {
    volatile long *p = (void*) LED_PR;
    *p = ((state) ? 0x4d0002 : 0x4c0003);
}

// Power Led = first entry in table (led 0)
// AF Assist Lamp = second entry in table (led 1)
void camera_set_led(int led, int state, int bright) {
    static char led_table[2] = { 0, 4 };
    _LEDDrive(led_table[led % sizeof(led_table)], state <= 1 ? !state : state);
}

//TODO:
void shutdown_soft()
{
    _PostLogicalEventForNotPowerType(0x1005, 0);
}

//TODO:
int get_flash_params_count(void)
{
    return 241;
}

//TODO:
void JogDial_CW(void)
{
    _PostLogicalEventToUI(0x872, 1);    //RotateJogDialRight
}

//TODO:
void JogDial_CCW(void)
{
    _PostLogicalEventToUI(0x873, 1);    //RotateJogDialLeft
}

// updated by using function in capt_seq, valid between shot start and raw hook end
extern  char*   current_raw_addr;

char *hook_raw_image_addr()
{
    /*
     43dbfca0   - RAW & RAW + JPEG
     43e4a000   - JPEG only
     */
    return current_raw_addr;
}

// TODO:
//char *hook_alt_raw_image_addr()
//{
//}

extern void* _GetActiveViewportBuffer();

void *vid_get_viewport_fb_d()
{
    return _GetActiveViewportBuffer();
}

void *vid_get_viewport_fb()
{
    return _GetActiveViewportBuffer();
}

void *vid_get_viewport_live_fb()
{
    return _GetActiveViewportBuffer();
}

int vid_get_viewport_width()
{
    extern int _GetVRAMHPixelsSize();
    if (camera_info.state.mode_play)
    {
        return 720;
    }
    return _GetVRAMHPixelsSize();
}

long vid_get_viewport_height()
{
    extern int _GetVRAMVPixelsSize();
    if (camera_info.state.mode_play)
    {
        return 480;
    }
    return _GetVRAMVPixelsSize();
}

int vid_get_viewport_byte_width()
{
    return 736*2;     // buffer is 736 wide (720 image pixels) UYVY
}

// Functions for PTP Live View system
int vid_get_viewport_display_xoffset_proper()   { return vid_get_viewport_display_xoffset(); }
int vid_get_viewport_display_yoffset_proper()   { return vid_get_viewport_display_yoffset(); }
int vid_get_viewport_fullscreen_width()         { return 720; }
int vid_get_viewport_fullscreen_height()        { return 480; }
int vid_get_viewport_buffer_width_proper()      { return 736; }
int vid_get_viewport_type()                     { return LV_FB_YUV8B; }
int vid_get_aspect_ratio()                      { return LV_ASPECT_3_2; }

/*
 * Needed because bitmap buffer resolution changes when using the EVF
 * LCD = 720 x 480
 * EVF = 1024 x 768
 * HDMI = 960 x 540
 * TODO: This does not reset the OSD positions of things on screen
 *       If user has customised OSD layout how should this be handled?
 */
void update_screen_dimensions()
{
    extern int displaytype;
    static int old_displaytype = -1;

    if (old_displaytype != displaytype)
    {
        old_displaytype = displaytype;

        switch (displaytype)
        {
            case 6:
            case 7:
                // HDMI
                camera_screen.width = 960;
                camera_screen.height = 540;
                camera_screen.buffer_width = 960;
                break;
            case 11:
                // EVF
                camera_screen.width = 1024;
                camera_screen.height = 768;
                camera_screen.buffer_width = 1024;
                break;
            default:
                // LCD
                camera_screen.width = 720;
                camera_screen.height = 480;
                camera_screen.buffer_width = 736;
                break;
        }

        // Reset OSD offset and width
        camera_screen.disp_right = camera_screen.width - 1;
        camera_screen.disp_width = camera_screen.width;

        // Update other values
        camera_screen.physical_width = camera_screen.buffer_width;
        camera_screen.buffer_height = camera_screen.height;
        camera_screen.size = camera_screen.width * camera_screen.height;
        camera_screen.buffer_size = camera_screen.buffer_width * camera_screen.buffer_height;
    }
}

/*
 * Check if active_bitmap_buffer has changed. Used to force CHDK UI redraw.
 * If AF Method set to Face+Tracking active_bitmap_buffer is constantly changing causing severe flickering issues with CHDK UI.
 * This reduces the flickering; but does not eliminate it.
 */
int check_gui_needs_redraw()
{
    static int last_bitmap_buffer = 0;
    if (active_bitmap_buffer != last_bitmap_buffer)
    {
        last_bitmap_buffer = active_bitmap_buffer;
        return 1;
    }
    return 0;
}
