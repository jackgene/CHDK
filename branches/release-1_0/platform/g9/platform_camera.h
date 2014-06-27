// Camera - g9 - platform_camera.h

// This file contains the various settings values specific to the g9 camera.
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

    #define CAM_PROPSET                     2
    #define CAM_DRYOS                       1

    #define CAM_RAW_ROWPIX                  4104   // for 12 MP
    #define CAM_RAW_ROWS                    3048   // for 12 MP
    #define CAM_HAS_ND_FILTER               1
    #define CAM_ADJUSTABLE_ALT_BUTTON       1
    #undef  CAM_EMUL_KEYPRESS_DURATION
    #define CAM_EMUL_KEYPRESS_DURATION  10
    #define CAM_AF_SCAN_DURING_VIDEO_RECORD 1
    #define CAM_HAS_JOGDIAL                 1
    #define CAM_BRACKETING                  1
    #define CAM_MULTIPART                   1
    #define CAM_EXT_TV_RANGE                1

    // camera name
    #define PARAM_CAMERA_NAME               4       // parameter number for GetParameterData

    #define CAM_DNG_LENS_INFO               { 74,10, 444,10, 28,10, 48,10 } // See comments in camera.h
    // pattern
    #define cam_CFAPattern                  0x02010100 // Red  Green  Green  Blue
    // color (alternativ: http://lclevy.free.fr/cr2/)
    #define CAM_COLORMATRIX1                              \
    1679727, 1000000,  422803, 1000000,  803343, 1000000, \
     220204, 1000000, 1784845, 1000000,  -63290, 1000000, \
    -282882, 1000000, -475034, 1000000, 4502592, 1000000

    #define cam_CalibrationIlluminant1      1  // Daylight

    // cropping
    #define CAM_JPEG_WIDTH                  4000
    #define CAM_JPEG_HEIGHT                 3000
    #define CAM_ACTIVE_AREA_X1              52
    #define CAM_ACTIVE_AREA_Y1              14
    #define CAM_ACTIVE_AREA_X2              4076
    #define CAM_ACTIVE_AREA_Y2              3030
//----------------------------------------------------------
