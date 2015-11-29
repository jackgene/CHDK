/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define USE_STUBS_NRFLAG 1          // see stubs_entry.S

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFFC49FE0 - 0xFFC4A2CC, length=188
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R3-R9,LR} \n"
"    LDR     R6, =0x2850 \n"
"    LDR     R4, =0x11F70 \n"
"    MOV     R9, #1 \n"
"    MOV     R7, #0 \n"

"loc_FFC49FF4:\n"
"    LDR     R0, [R6, #4] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, SP \n"
"    BL      sub_FFC167B8 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FFC4A020 \n"
"    LDR     R1, =0x588 \n"
"    LDR     R0, =0xFFC49B94 /*'SsShootTask.c'*/ \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R3-R9,PC} \n"

"loc_FFC4A020:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x1D \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FFC4A294 \n"
"    B       loc_FFC4A0AC \n"
"    B       loc_FFC4A110 \n"
"    B       loc_FFC4A14C \n"
"    B       loc_FFC4A160 \n"
"    B       loc_FFC4A158 \n"
"    B       loc_FFC4A168 \n"
"    B       loc_FFC4A170 \n"
"    B       loc_FFC4A178 \n"
"    B       loc_FFC4A1D0 \n"
"    B       loc_FFC4A1F8 \n"
"    B       loc_FFC4A1DC \n"
"    B       loc_FFC4A1E8 \n"
"    B       loc_FFC4A1F0 \n"
"    B       loc_FFC4A200 \n"
"    B       loc_FFC4A208 \n"
"    B       loc_FFC4A210 \n"
"    B       loc_FFC4A218 \n"
"    B       loc_FFC4A220 \n"
"    B       loc_FFC4A22C \n"
"    B       loc_FFC4A234 \n"
"    B       loc_FFC4A23C \n"
"    B       loc_FFC4A244 \n"
"    B       loc_FFC4A24C \n"
"    B       loc_FFC4A258 \n"
"    B       loc_FFC4A260 \n"
"    B       loc_FFC4A268 \n"
"    B       loc_FFC4A270 \n"
"    B       loc_FFC4A278 \n"
"    B       loc_FFC4A284 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A0AC:\n"
"    BL      sub_FFC4A8B8 \n"
"    BL      shooting_expo_param_override\n"    // added
"    BL      sub_FFC47F08 \n"
"    LDR     R0, [R4, #0x24] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FFC4A2A0 \n"
"    BL      sub_FFC49870 \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R4, #0x24] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FFC4A0F4 \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FFC4E41C \n"
"    TST     R0, #1 \n"
"    STRNE   R9, [R6, #0x10] \n"
"    LDRNE   R0, [R5, #8] \n"
"    ORRNE   R0, R0, #0x40000000 \n"
"    STRNE   R0, [R5, #8] \n"
"    BNE     loc_FFC4A2A0 \n"

"loc_FFC4A0F4:\n"
"    MOV     R0, R5 \n"
"    BL      sub_FFC49B14 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFCFC540 \n"
"    TST     R0, #1 \n"
"    STRNE   R9, [R6, #0x10] \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A110:\n"
"    LDR     R0, [R4, #0x24] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FFC4A13C \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FFC4E41C \n"
"    TST     R0, #1 \n"
"    LDRNE   R0, [SP] \n"
"    MOVNE   R1, #1 \n"
"    LDRNE   R2, [R0, #0xC] \n"
"    MOVNE   R0, #1 \n"
"    BNE     loc_FFC4A1C8 \n"

"loc_FFC4A13C:\n"
"    LDR     R0, [SP] \n"
"    BL      sub_FFC4A3B8_my \n"  // --> Patched. Old value = 0xFFC4A3B8.

"loc_FFC4A144:\n"
"    STR     R7, [R4, #0x24] \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A14C:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FFC4AAC4 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A158:\n"
"    BL      sub_FFC4A528 \n"
"    B       loc_FFC4A144 \n"

"loc_FFC4A160:\n"
"    BL      sub_FFC4A898 \n"
"    B       loc_FFC4A144 \n"

"loc_FFC4A168:\n"
"    BL      sub_FFC4A8A0 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A170:\n"
"    BL      sub_FFC4A9E4 \n"
"    B       loc_FFC4A1D4 \n"

"loc_FFC4A178:\n"
"    LDR     R5, [R0, #0xC] \n"
"    BL      sub_FFC4A8A8 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFCFB5EC \n"
"    TST     R0, #1 \n"
"    MOV     R8, R0 \n"
"    BNE     loc_FFC4A1B8 \n"
"    BL      sub_FFC5A478 \n"
"    STR     R0, [R5, #0x18] \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFCFC478 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFCFC824 \n"
"    MOV     R8, R0 \n"
"    LDR     R0, [R5, #0x18] \n"
"    BL      sub_FFC5A68C \n"

"loc_FFC4A1B8:\n"
"    BL      sub_FFC4A898 \n"
"    MOV     R2, R5 \n"
"    MOV     R1, #9 \n"
"    MOV     R0, R8 \n"

"loc_FFC4A1C8:\n"
"    BL      sub_FFC483E8 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A1D0:\n"
"    BL      sub_FFC4AA44 \n"

"loc_FFC4A1D4:\n"
"    BL      sub_FFC47F08 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A1DC:\n"
"    LDR     R0, [R4, #0x54] \n"
"    BL      sub_FFC4AE20 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A1E8:\n"
"    BL      sub_FFC4B0C8 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A1F0:\n"
"    BL      sub_FFC4B15C \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A1F8:\n"
"    BL      sub_FFC4A898 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A200:\n"
"    BL      sub_FFCFB7FC \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A208:\n"
"    BL      sub_FFCFB9DC \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A210:\n"
"    BL      sub_FFCFBA6C \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A218:\n"
"    BL      sub_FFCFBB14 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A220:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FFCFBCD0 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A22C:\n"
"    BL      sub_FFCFBE08 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A234:\n"
"    BL      sub_FFCFBE98 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A23C:\n"
"    BL      sub_FFCFBF58 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A244:\n"
"    BL      sub_FFC4AC24 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A24C:\n"
"    BL      sub_FFC4ACB0 \n"
"    BL      sub_FFC1498C \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A258:\n"
"    BL      sub_FFCFBBD0 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A260:\n"
"    BL      sub_FFCFBC14 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A268:\n"
"    BL      sub_FFC4CC98 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A270:\n"
"    BL      sub_FFC4CCF4 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A278:\n"
"    BL      sub_FFC4CD50 \n"
"    BL      sub_FFC4CD10 \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A284:\n"
"    LDRH    R0, [R4, #0x98] \n"
"    CMP     R0, #4 \n"
"    BLNE    sub_FFC4CFBC \n"
"    B       loc_FFC4A2A0 \n"

"loc_FFC4A294:\n"
"    LDR     R1, =0x6C9 \n"
"    LDR     R0, =0xFFC49B94 /*'SsShootTask.c'*/ \n"
"    BL      _DebugAssert \n"

"loc_FFC4A2A0:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0, #4] \n"
"    LDR     R0, [R6] \n"
"    BL      sub_FFC524CC /*_SetEventFlag*/ \n"
"    LDR     R5, [SP] \n"
"    LDR     R0, [R5, #8] \n"
"    CMP     R0, #0 \n"
"    LDREQ   R1, =0x12B \n"
"    LDREQ   R0, =0xFFC49B94 /*'SsShootTask.c'*/ \n"
"    BLEQ    _DebugAssert \n"
"    STR     R7, [R5, #8] \n"
"    B       loc_FFC49FF4 \n"
);
}

/*************************************************************/
//** sub_FFC4A3B8_my @ 0xFFC4A3B8 - 0xFFC4A494, length=56
void __attribute__((naked,noinline)) sub_FFC4A3B8_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R4, [R0, #0xC] \n"
"    LDR     R6, =0x11F70 \n"
"    LDR     R0, [R4, #8] \n"
"    MOV     R5, #0 \n"
"    ORR     R0, R0, #1 \n"
"    STR     R0, [R4, #8] \n"
"    LDR     R0, [R6, #0x24] \n"
"    CMP     R0, #0 \n"
"    MOVEQ   R0, #2 \n"
"    BLEQ    sub_FFC45BD0 \n"
"    BL      sub_FFC4A8A8 \n"
"    LDR     R0, [R6, #0x24] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FFC4A454 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFC4ABD8 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFCFB294 \n"
"    CMP     R0, #0 \n"
"    MOV     R0, R4 \n"
"    BEQ     loc_FFC4A42C \n"
"    BL      sub_FFCFB320 \n"
"    TST     R0, #1 \n"
"    MOVNE   R2, R4 \n"
"    LDMNEFD SP!, {R4-R6,LR} \n"
"    MOVNE   R1, #1 \n"
"    BNE     sub_FFC483E8 \n"
"    B       loc_FFC4A430 \n"

"loc_FFC4A42C:\n"
"    BL      sub_FFCFB2E4 \n"

"loc_FFC4A430:\n"
"    MOV     R0, R4 \n"
"    BL      sub_FFC49B14 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFCFC478 \n"
"    BL      sub_FFCFCEA0 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFCFC540_my \n"  // --> Patched. Old value = 0xFFCFC540.
"    BL      capt_seq_hook_raw_here\n"               // added
"    MOV     R5, R0 \n"
"    B       loc_FFC4A464 \n"

"loc_FFC4A454:\n"
"    LDR     R0, =0x2850 \n"
"    LDR     R0, [R0, #0x10] \n"
"    CMP     R0, #0 \n"
"    MOVNE   R5, #0x1D \n"

"loc_FFC4A464:\n"
"    BL      sub_FFC4CCF4 \n"
"    BL      sub_FFC4CD3C \n"
"    BL      sub_FFC4CD7C \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFC483E8 \n"
"    BL      sub_FFCFC7C8 \n"
"    CMP     R0, #0 \n"
"    LDRNE   R0, [R4, #8] \n"
"    ORRNE   R0, R0, #0x2000 \n"
"    STRNE   R0, [R4, #8] \n"
"    LDMFD   SP!, {R4-R6,PC} \n"
);
}

/*************************************************************/
//** sub_FFCFC540_my @ 0xFFCFC540 - 0xFFCFC5E8, length=43
void __attribute__((naked,noinline)) sub_FFCFC540_my() {
asm volatile (
"    STMFD   SP!, {R0-R8,LR} \n"
"    MOV     R4, R0 \n"
"    BL      sub_FFCFD00C \n"
"    MVN     R1, #0 \n"
"    BL      sub_FFC52500 /*_ClearEventFlag*/ \n"
"    LDR     R5, =0x5B30 \n"
"    LDR     R0, [R5, #0xC] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FFCFC590 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FFC17000 /*_CreateMessageQueueStrictly*/ \n"
"    STR     R0, [R5, #0xC] \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =0xFFCFC048 \n"
"    LDR     R0, =0xFFCFC798 /*'ShutterSoundTask'*/ \n"
"    MOV     R2, #0x400 \n"
"    MOV     R1, #0x17 \n"
"    BL      sub_FFC16FCC /*_CreateTaskStrictly*/ \n"

"loc_FFCFC590:\n"
"    MOV     R2, #4 \n"
"    ADD     R1, SP, #8 \n"
"    MOV     R0, #0x8A \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x3A7 \n"
"    LDRNE   R0, =0xFFCFC2B4 /*'SsCaptureSeq.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    LDR     R7, =0x12034 \n"
"    LDR     R8, =0x11F70 \n"
"    LDRSH   R1, [R7, #0xE] \n"
"    LDR     R0, [R8, #0x8C] \n"
"    BL      sub_FFCC3CD0 \n"
"    BL      _GetCCDTemperature \n"
"    LDR     R3, =0x5B38 \n"
"    STRH    R0, [R4, #0x9C] \n"
"    SUB     R2, R3, #4 \n"
"    STRD    R2, [SP] \n"
"    MOV     R1, R0 \n"
"    LDRH    R0, [R8, #0x5C] \n"
"    LDRSH   R2, [R7, #0xC] \n"
"    SUB     R3, R3, #8 \n"
"    BL      sub_FFCFD5F8 \n"
"    BL      wait_until_remote_button_is_released\n" // added
"    BL      capt_seq_hook_set_nr\n"                 // added
"    LDR     PC, =0xFFCFC5EC \n"  // Continue in firmware
);
}

/*************************************************************/
//** exp_drv_task @ 0xFFC7EE88 - 0xFFC7F440, length=367
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    SUB     SP, SP, #0x20 \n"
"    LDR     R8, =0xBB8 \n"
"    LDR     R7, =0x38EC \n"
"    LDR     R5, =0x16AD4 \n"
"    MOV     R0, #0 \n"
"    ADD     R6, SP, #0x10 \n"
"    STR     R0, [SP, #0xC] \n"

"loc_FFC7EEA8:\n"
"    LDR     R0, [R7, #0x20] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #0x1C \n"
"    BL      sub_FFC167B8 /*_ReceiveMessageQueue*/ \n"
"    LDR     R0, [SP, #0xC] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FFC7EEF4 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0x13 \n"
"    CMPNE   R0, #0x14 \n"
"    CMPNE   R0, #0x15 \n"
"    CMPNE   R0, #0x16 \n"
"    BEQ     loc_FFC7F010 \n"
"    CMP     R0, #0x28 \n"
"    BEQ     loc_FFC7EFE8 \n"
"    ADD     R1, SP, #0xC \n"
"    MOV     R0, #0 \n"
"    BL      sub_FFC7EE38 \n"

"loc_FFC7EEF4:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x2D \n"
"    BNE     loc_FFC7EF24 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FFC8013C \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FFC524CC /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x20 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"

"loc_FFC7EF24:\n"
"    CMP     R1, #0x2C \n"
"    BNE     loc_FFC7EF40 \n"
"    LDR     R2, [R0, #0x88]! \n"
"    LDR     R1, [R0, #4] \n"
"    MOV     R0, R1 \n"
"    BLX     R2 \n"
"    B       loc_FFC7F438 \n"

"loc_FFC7EF40:\n"
"    CMP     R1, #0x26 \n"
"    BNE     loc_FFC7EF90 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FFC52500 /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFFC7B7A8 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FFCF1080 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FFC5240C /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0xDC6 \n"
"    BNE     loc_FFC7EFD4 \n"

"loc_FFC7EF7C:\n"
"    LDR     R1, [SP, #0x1C] \n"
"    LDR     R0, [R1, #0x8C] \n"
"    LDR     R1, [R1, #0x88] \n"
"    BLX     R1 \n"
"    B       loc_FFC7F438 \n"

"loc_FFC7EF90:\n"
"    CMP     R1, #0x27 \n"
"    BNE     loc_FFC7EFE0 \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FFC7EE38 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FFC52500 /*_ClearEventFlag*/ \n"
"    MOV     R1, #0x100 \n"
"    LDR     R0, =0xFFC7B7B8 \n"
"    BL      sub_FFCF1308 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FFC5240C /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FFC7EF7C \n"
"    MOV     R1, #0xDD0 \n"

"loc_FFC7EFD4:\n"
"    LDR     R0, =0xFFC7BDE8 /*'ExpDrv.c'*/ \n"
"    BL      _DebugAssert \n"
"    B       loc_FFC7EF7C \n"

"loc_FFC7EFE0:\n"
"    CMP     R1, #0x28 \n"
"    BNE     loc_FFC7EFF8 \n"

"loc_FFC7EFE8:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FFC7EE38 \n"
"    B       loc_FFC7EF7C \n"

"loc_FFC7EFF8:\n"
"    CMP     R1, #0x2B \n"
"    BNE     loc_FFC7F010 \n"
"    BL      sub_FFC6E4D4 \n"
"    BL      sub_FFC6F160 \n"
"    BL      sub_FFC6EC98 \n"
"    B       loc_FFC7EF7C \n"

"loc_FFC7F010:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R4, #1 \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x11 \n"
"    CMPNE   R1, #0x12 \n"
"    BNE     loc_FFC7F080 \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2-R4} \n"
"    STMIA   R6, {R2-R4} \n"
"    BL      sub_FFC7D880 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FFC804F4 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x90] \n"
"    LDR     R2, [R0, #0x94] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    B       loc_FFC7F378 \n"

"loc_FFC7F080:\n"
"    CMP     R1, #0x13 \n"
"    CMPNE   R1, #0x14 \n"
"    CMPNE   R1, #0x15 \n"
"    CMPNE   R1, #0x16 \n"
"    BNE     loc_FFC7F138 \n"
"    ADD     R3, SP, #0xC \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFC7DAC4 \n"
"    CMP     R0, #1 \n"
"    MOV     R4, R0 \n"
"    CMPNE   R4, #5 \n"
"    BNE     loc_FFC7F0D4 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, R4 \n"
"    LDR     R1, [R0, #0x7C]! \n"
"    LDR     R12, [R0, #0xC]! \n"
"    LDR     R3, [R0, #4] \n"
"    MOV     R0, SP \n"
"    BLX     R12 \n"
"    B       loc_FFC7F10C \n"

"loc_FFC7F0D4:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    CMP     R4, #2 \n"
"    LDR     R3, [R0, #0x8C] \n"
"    CMPNE   R4, #6 \n"
"    BNE     loc_FFC7F120 \n"
"    LDR     R12, [R0, #0x88] \n"
"    MOV     R0, SP \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    BLX     R12 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFC7EB20 \n"

"loc_FFC7F10C:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R2, [SP, #0xC] \n"
"    MOV     R1, R4 \n"
"    BL      sub_FFC7EDD8 \n"
"    B       loc_FFC7F378 \n"

"loc_FFC7F120:\n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R12, [R0, #0x88] \n"
"    ADD     R0, R0, #4 \n"
"    MOV     R2, R4 \n"
"    BLX     R12 \n"
"    B       loc_FFC7F378 \n"

"loc_FFC7F138:\n"
"    CMP     R1, #0x22 \n"
"    CMPNE   R1, #0x23 \n"
"    BNE     loc_FFC7F184 \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2-R4} \n"
"    STMIA   R6, {R2-R4} \n"
"    BL      sub_FFC7CE0C \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FFC7D0FC \n"
"    B       loc_FFC7F378 \n"

"loc_FFC7F184:\n"
"    ADD     R1, R0, #4 \n"
"    LDMIA   R1, {R2,R3,R12} \n"
"    STMIA   R6, {R2,R3,R12} \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x25 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F238 \n"
"    B       loc_FFC7F238 \n"
"    B       loc_FFC7F240 \n"
"    B       loc_FFC7F248 \n"
"    B       loc_FFC7F248 \n"
"    B       loc_FFC7F248 \n"
"    B       loc_FFC7F238 \n"
"    B       loc_FFC7F240 \n"
"    B       loc_FFC7F248 \n"
"    B       loc_FFC7F248 \n"
"    B       loc_FFC7F260 \n"
"    B       loc_FFC7F260 \n"
"    B       loc_FFC7F34C \n"
"    B       loc_FFC7F354 \n"
"    B       loc_FFC7F354 \n"
"    B       loc_FFC7F354 \n"
"    B       loc_FFC7F354 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F250 \n"
"    B       loc_FFC7F258 \n"
"    B       loc_FFC7F258 \n"
"    B       loc_FFC7F26C \n"
"    B       loc_FFC7F26C \n"
"    B       loc_FFC7F274 \n"
"    B       loc_FFC7F2A4 \n"
"    B       loc_FFC7F2D4 \n"
"    B       loc_FFC7F304 \n"
"    B       loc_FFC7F334 \n"
"    B       loc_FFC7F334 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F358 \n"
"    B       loc_FFC7F33C \n"
"    B       loc_FFC7F344 \n"

"loc_FFC7F238:\n"
"    BL      sub_FFC7BC94 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F240:\n"
"    BL      sub_FFC7BF08 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F248:\n"
"    BL      sub_FFC7C10C \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F250:\n"
"    BL      sub_FFC7C374 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F258:\n"
"    BL      sub_FFC7C568 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F260:\n"
"    BL      sub_FFC7C7F8_my \n"  // --> Patched. Old value = 0xFFC7C7F8.
"    MOV     R4, #0 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F26C:\n"
"    BL      sub_FFC7C934 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F274:\n"
"    LDRH    R1, [R0, #4] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R1, [R5, #2] \n"
"    STRH    R1, [SP, #0x12] \n"
"    LDRH    R1, [R5, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R5, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R0, #0xC] \n"
"    STRH    R1, [SP, #0x18] \n"
"    BL      sub_FFC801B0 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F2A4:\n"
"    LDRH    R1, [R0, #4] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R1, [R5, #2] \n"
"    STRH    R1, [SP, #0x12] \n"
"    LDRH    R1, [R5, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R5, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R5, #8] \n"
"    STRH    R1, [SP, #0x18] \n"
"    BL      sub_FFC80310 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F2D4:\n"
"    LDRH    R1, [R5] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R1, [R0, #6] \n"
"    STRH    R1, [SP, #0x12] \n"
"    LDRH    R1, [R5, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R5, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R5, #8] \n"
"    STRH    R1, [SP, #0x18] \n"
"    BL      sub_FFC803BC \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F304:\n"
"    LDRH    R1, [R5] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R1, [R5, #2] \n"
"    STRH    R1, [SP, #0x12] \n"
"    LDRH    R1, [R5, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R5, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R0, #0xC] \n"
"    STRH    R1, [SP, #0x18] \n"
"    BL      sub_FFC8045C \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F334:\n"
"    BL      sub_FFC7CBD4 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F33C:\n"
"    BL      sub_FFC7D200 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F344:\n"
"    BL      sub_FFC7D438 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F34C:\n"
"    BL      sub_FFC7D5B0 \n"
"    B       loc_FFC7F358 \n"

"loc_FFC7F354:\n"
"    BL      sub_FFC7D748 \n"

"loc_FFC7F358:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    CMP     R4, #1 \n"
"    BNE     loc_FFC7F3C0 \n"

"loc_FFC7F378:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, #0xC \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R0, R0, R1, LSL#2 \n"
"    SUB     R4, R0, #8 \n"
"    LDR     R0, =0x16AD4 \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFE60560 \n"
"    LDR     R0, =0x16AE0 \n"
"    MOV     R2, #0xC \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFE60560 \n"
"    LDR     R0, =0x16AEC \n"
"    MOV     R2, #0xC \n"
"    MOV     R1, R4 \n"
"    BL      sub_FFE60560 \n"
"    B       loc_FFC7F438 \n"

"loc_FFC7F3C0:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0xB \n"
"    BNE     loc_FFC7F408 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FFC7BA9C \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    B       loc_FFC7F434 \n"

"loc_FFC7F408:\n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #1 \n"
"    STR     R3, [SP] \n"
"    BL      sub_FFC7BA9C \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #1 \n"
"    STR     R3, [SP] \n"

"loc_FFC7F434:\n"
"    BL      sub_FFC7BBDC \n"

"loc_FFC7F438:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FFC8013C \n"
"    B       loc_FFC7EEA8 \n"
);
}

/*************************************************************/
//** sub_FFC7C7F8_my @ 0xFFC7C7F8 - 0xFFC7C8B4, length=48
void __attribute__((naked,noinline)) sub_FFC7C7F8_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    LDR     R7, =0x38EC \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x3E \n"
"    BL      sub_FFC52500 /*_ClearEventFlag*/ \n"
"    LDRSH   R0, [R4, #4] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FFC7B82C \n"
"    MOV     R6, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FFC7B93C \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FFC7B994 \n"
"    LDRSH   R0, [R4, #0xA] \n"
"    BL      sub_FFC7B9EC \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    BL      sub_FFC7BA44 \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R4] \n"
"    LDR     R8, =0x16AEC \n"
"    CMP     R0, #0xB \n"
"    MOVEQ   R6, #0 \n"
"    MOVEQ   R5, #0 \n"
"    BEQ     loc_FFC7C888 \n"
"    CMP     R6, #1 \n"
"    BNE     loc_FFC7C888 \n"
"    LDRSH   R0, [R4, #4] \n"
"    LDR     R1, =0xFFC7B798 \n"
"    MOV     R2, #2 \n"
"    BL      sub_FFCF11D4 \n"
"    STRH    R0, [R4, #4] \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R7, #0x28] \n"
"    B       loc_FFC7C890 \n"

"loc_FFC7C888:\n"
"    LDRH    R0, [R8] \n"
"    STRH    R0, [R4, #4] \n"

"loc_FFC7C890:\n"
"    CMP     R5, #1 \n"
"    LDRNEH  R0, [R8, #8] \n"
"    BNE     loc_FFC7C8AC \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    LDR     R1, =0xFFC7B81C \n"
"    MOV     R2, #0x20 \n"
"    BL      sub_FFC8016C \n"

"loc_FFC7C8AC:\n"
"    STRH    R0, [R4, #0xC] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FFC6E244_my \n"  // --> Patched. Old value = 0xFFC6E244.
"    LDR     PC, =0xFFC7C8B8 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FFC6E244_my @ 0xFFC6E244 - 0xFFC6E2AC, length=27
void __attribute__((naked,noinline)) sub_FFC6E244_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0x35E8 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #4] \n"
"    CMP     R0, #1 \n"
"    MOVNE   R1, #0x140 \n"
"    LDRNE   R0, =0xFFC6E048 /*'Shutter.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    CMN     R4, #0xC00 \n"
"    LDREQSH R4, [R5, #2] \n"
"    CMN     R4, #0xC00 \n"
"    LDREQ   R1, =0x146 \n"
"    LDREQ   R0, =0xFFC6E048 /*'Shutter.c'*/ \n"
"    STRH    R4, [R5, #2] \n"
"    BLEQ    _DebugAssert \n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    MOV     R4, R0 \n"
//"  BL      _sub_FFC93670 \n"  // --> Nullsub call removed.
"    MOV     R0, R4 \n"
"    BL      sub_FFC97798 \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x14B \n"
"    LDMNEFD SP!, {R4-R6,LR} \n"
"    LDRNE   R0, =0xFFC6E048 /*'Shutter.c'*/ \n"
"    BNE     _DebugAssert \n"
"    LDMFD   SP!, {R4-R6,PC} \n"
);
}
