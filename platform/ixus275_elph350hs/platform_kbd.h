#ifndef PLATFORM_KBD_H
#define PLATFORM_KBD_H

#define KEYS_MASK0          0x0000F0C8
#define KEYS_MASK1          0x00000000
#define KEYS_MASK2          0x0000C360

#define SD_READONLY_FLAG    0x00400000 // Found @0xff63743c, levent 0x20a
#define SD_READONLY_IDX     2

#define USB_MASK            0x01000000 // Found @0xff63744c, levent 0x202
#define USB_IDX             2

#define BATTCOVER_FLAG      0x00800000 // Found @0xff637444, levent 0x205
#define BATTCOVER_IDX       2

#define ANALOG_AV_FLAG      0x00000002 // Found @0xff637384, levent 0x200 (non-inverted logic)
#define ANALOG_AV_IDX       0

#endif
