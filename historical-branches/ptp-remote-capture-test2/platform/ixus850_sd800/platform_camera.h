// Camera - ixus850_sd800 - platform_camera.h

// This file contains the various settings values specific to the ixus850_sd800 camera.
// This file is referenced via the 'include/camera.h' file and should not be loaded directly.

// If adding a new settings value put a suitable default in 'include/camera.h',
// along with documentation on what the setting does and how to determine the correct value.
// If the setting should not have a default value then add it in 'include/camera.h'
// using the '#undef' directive along with appropriate documentation.

// Override any default values with your camera specific values in this file. Try and avoid
// having override values that are the same as the default value.

// When overriding a setting value there are two cases:
// 1. If removing the value, because it does not apply to your camera, use the '#undef' directive.
// 2. If changing the value it is best to use an '#undef' directive to remove the default value
//    followed by a '#define' to set the new value.

// When porting CHDK to a new camera, check the documentation in 'include/camera.h'
// for information on each setting. If the default values are correct for your camera then
// don't override them again in here.

    #define CAM_PROPSET                     1

    #define CAM_RAW_ROWPIX                  3152    // for 7 MP
    #define CAM_RAW_ROWS                    2340    // for 7 MP

    #undef  CAM_USE_ZOOM_FOR_MF
    #undef  CAM_HAS_ERASE_BUTTON
    #undef  CAM_HAS_IRIS_DIAPHRAGM
    #define CAM_HAS_ND_FILTER               1
    #undef  CAM_HAS_MANUAL_FOCUS
    #undef  CAM_CAN_SD_OVER_NOT_IN_MF
    #define CAM_CAN_SD_OVER_IN_AF_LOCK_ONLY 1 //exact meaning: SD override works in AF lock or movie mode
    #undef  CAM_HAS_USER_TV_MODES
    #define CAM_HAS_HI_ISO_AUTO_MODE        1
    #define CAM_SHOW_OSD_IN_SHOOT_MENU      1
    #define CAM_AF_SCAN_DURING_VIDEO_RECORD 1
    #define CAM_MULTIPART                   1

    #define CAM_DNG_LENS_INFO               { 46,10, 173,10, 28,10, 58,10 } // See comments in camera.h
    // pattern
    #define cam_CFAPattern                  0x02010100 // Red  Green  Green  Blue
    // color
    #define CAM_COLORMATRIX1                              \
     661014, 1000000, -189364, 1000000, -115797, 1000000, \
    -168772, 1000000,  661827, 1000000,   47392, 1000000, \
     -35846, 1000000,  107148, 1000000,  233705, 1000000

    #define cam_CalibrationIlluminant1      17      // Standard light A
    // cropping
    #define CAM_JPEG_WIDTH                  3072
    #define CAM_JPEG_HEIGHT                 2304
    #define CAM_ACTIVE_AREA_X1              12
    #define CAM_ACTIVE_AREA_Y1              8
    #define CAM_ACTIVE_AREA_X2              3108
    #define CAM_ACTIVE_AREA_Y2              2332
    // camera name
    #define PARAM_CAMERA_NAME               4       // parameter number for GetParameterData

    #define DNG_EXT_FROM                    ".DPS"

	#define REMOTE_SYNC_STATUS_LED 	0xC02200C4		// specifies an LED that turns on while camera waits for USB remote to sync
    #define CAM_FIRMWARE_MEMINFO            1
	
//----------------------------------------------------------
