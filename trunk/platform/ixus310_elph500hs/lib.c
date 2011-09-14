#include "platform.h"
#include "lolevel.h"

void vid_bitmap_refresh()
{
	extern int full_screen_refresh;
	extern void _ScreenUnlock();
	extern void _ScreenLock();

	full_screen_refresh |= 3;
	_ScreenLock();
	_ScreenUnlock();
}


void shutdown()
{
	volatile long *p = (void*)0xC022001C;    
	
	asm(
		"MRS     R1, CPSR\n"
		"AND     R0, R1, #0x80\n"
		"ORR     R1, R1, #0x80\n"
		"MSR     CPSR_cf, R1\n"
		:::"r1","r0");
	
	*p = 0x44;  // power off.
	
	while(1);
}

#define LED_PR 0xC0220110	// Power Indicator

void debug_led(int state)
{
 *(int*)LED_PR=state ? 0x46 : 0x44;
}

// IXUS 310 has 2 led values
// 0/7 - Power LED (Green)
// 1/11 - AF Assist Lamp
void camera_set_led(int led, int state, int bright) {
 static char led_table[2]={7,11};
 _LEDDrive(led_table[led%sizeof(led_table)], state<=1 ? !state : state);
}

int get_flash_params_count(void){
 return 0xA0;	// found in GetParameterData
}

// Viewport and Bitmap values that shouldn't change across firmware versions.
// Values that may change are in lib.c for each firmware version.

long vid_get_bitmap_screen_width() { return 480; }
long vid_get_bitmap_screen_height() { return 240; }
long vid_get_bitmap_buffer_width() { return 960; }
long vid_get_bitmap_buffer_height() { return 270; }

int vid_get_viewport_buffer_width() { return 960; }	// IXUS 310 - wide screen LCD (viewport is actually 480 high, CHDK not set up for this so we skip every 2nd row)

int vid_get_viewport_width()
{
	// viewport width table for each image size
	// 0 = 4:3, 1 = 16:9, 2 = 3:2, 3 = 1:1
	static long vp_w[5] = { 360, 480, 408, 272 };
	return vp_w[shooting_get_prop(PROPCASE_ASPECT_RATIO)];
}

int vid_get_viewport_xoffset()
{
	// viewport width offset table for each image size
	// 0 = 4:3, 1 = 16:9, 2 = 3:2, 3 = 1:1
	static long vp_w[5] = { 60, 0, 36, 104 };				// should all be even values for edge overlay
	return vp_w[shooting_get_prop(PROPCASE_ASPECT_RATIO)];
}

long vid_get_viewport_height(){ return 240; }

// viewport image offset - used when image size != viewport size (zebra, histogram, motion detect & edge overlay)
// returns the byte offset into the viewport buffer where the image pixels start (to skip any black borders)
int vid_get_viewport_image_offset() {
	return vid_get_viewport_xoffset() * 3;
}

// viewport image offset - used when image size != viewport size (zebra, histogram, motion detect & edge overlay)
// returns the byte offset to skip at the end of a viewport buffer row to get to the next row.
int vid_get_viewport_row_offset() {
	return (vid_get_viewport_buffer_width() - vid_get_viewport_width()) * 3;
}

// Functions for PTP Live View system

int vid_get_viewport_xoffset_proper()           { return vid_get_viewport_xoffset() * 2; }
int vid_get_viewport_yoffset_proper()           { return 480; }
int vid_get_viewport_width_proper()             { return vid_get_viewport_width() * 2; }
int vid_get_viewport_height_proper()            { return 480; }
int vid_get_viewport_max_width()                { return 960; }
int vid_get_viewport_max_height()               { return 480; }
int vid_get_palette_type()                      { return 3; }
int vid_get_palette_size()                      { return 256 * 4; }
int vid_get_aspect_ratio()                      { return 1; }

void *vid_get_bitmap_active_buffer()
{
    extern int active_bitmap_buffer;
    extern char* bitmap_buffer[];
    return bitmap_buffer[active_bitmap_buffer];
}

void *vid_get_bitmap_active_palette()
{
    extern int active_palette_buffer;
    extern char* palette_buffer[];
    return (palette_buffer[active_palette_buffer]+8);
}
