/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0x6B78;   // ??? ROM:FF995AB8

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF992B24 - 0xFF992CDC, length=111
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    SUB     SP, SP, #4 \n"
"    MOV     R4, SP \n"
"    B       loc_FF992CA8 \n"

"loc_FF992B34:\n"
"    LDR     R2, [SP] \n"
"    LDR     R3, [R2] \n"
"    MOV     R0, R2 \n"
"    CMP     R3, #0x17 \n"
"    LDRLS   PC, [PC, R3, LSL#2] \n"
"    B       loc_FF992C7C \n"
"    .long   loc_FF992BAC \n"
"    .long   loc_FF992BB8 \n"
"    .long   loc_FF992BC0 \n"
"    .long   loc_FF992BD4 \n"
"    .long   loc_FF992BCC \n"
"    .long   loc_FF992BDC \n"
"    .long   loc_FF992BE4 \n"
"    .long   loc_FF992BF0 \n"
"    .long   loc_FF992BF8 \n"
"    .long   loc_FF992C04 \n"
"    .long   loc_FF992C0C \n"
"    .long   loc_FF992C14 \n"
"    .long   loc_FF992C1C \n"
"    .long   loc_FF992C24 \n"
"    .long   loc_FF992C2C \n"
"    .long   loc_FF992C38 \n"
"    .long   loc_FF992C40 \n"
"    .long   loc_FF992C48 \n"
"    .long   loc_FF992C50 \n"
"    .long   loc_FF992C5C \n"
"    .long   loc_FF992C64 \n"
"    .long   loc_FF992C6C \n"
"    .long   loc_FF992C74 \n"
"    .long   loc_FF992C90 \n"

"loc_FF992BAC:\n"
"    BL      sub_FF9931C0 \n"
"    BL      shooting_expo_param_override\n"   // +
"    BL      sub_FF9906E0 \n"
"    B       loc_FF992C8C \n"

"loc_FF992BB8:\n"
"    BL      sub_FF9925E4_my \n"  // --> Patched. Old value = 0xFF9925E4.
"    B       loc_FF992C8C \n"

"loc_FF992BC0:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF993500 \n"
"    B       loc_FF992C8C \n"

"loc_FF992BCC:\n"
"    BL      sub_FF992D9C \n"
"    B       loc_FF992C8C \n"

"loc_FF992BD4:\n"
"    BL      sub_FF99318C \n"
"    B       loc_FF992C8C \n"

"loc_FF992BDC:\n"
"    BL      sub_FF99319C \n"
"    B       loc_FF992C8C \n"

"loc_FF992BE4:\n"
"    BL      sub_FF9933E0 \n"
"    BL      sub_FF9906E0 \n"
"    B       loc_FF992C8C \n"

"loc_FF992BF0:\n"
"    BL      sub_FF992834 \n"
"    B       loc_FF992C8C \n"

"loc_FF992BF8:\n"
"    BL      sub_FF993454 \n"
"    BL      sub_FF9906E0 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C04:\n"
"    BL      sub_FF99318C \n"
"    B       loc_FF992C8C \n"

"loc_FF992C0C:\n"
"    BL      sub_FF994C0C \n"
"    B       loc_FF992C8C \n"

"loc_FF992C14:\n"
"    BL      sub_FF994DE0 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C1C:\n"
"    BL      sub_FF994E74 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C24:\n"
"    BL      sub_FF994F10 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C2C:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF99517C \n"
"    B       loc_FF992C8C \n"

"loc_FF992C38:\n"
"    BL      sub_FF995354 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C40:\n"
"    BL      sub_FF9953EC \n"
"    B       loc_FF992C8C \n"

"loc_FF992C48:\n"
"    BL      sub_FF9954A8 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C50:\n"
"    BL      sub_FF993670 \n"
"    BL      sub_FF9923A4 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C5C:\n"
"    BL      sub_FF995050 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C64:\n"
"    BL      sub_FF9950A8 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C6C:\n"
"    BL      sub_FF9924C4 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C74:\n"
"    BL      sub_FF98F6F0 \n"
"    B       loc_FF992C8C \n"

"loc_FF992C7C:\n"
"    MOV     R1, #0x4E0 \n"
"    LDR     R0, =0xFF9920E4 \n"
"    ADD     R1, R1, #7 \n"
"    BL      _DebugAssert \n"

"loc_FF992C8C:\n"
"    LDR     R2, [SP] \n"

"loc_FF992C90:\n"
"    LDR     R3, =0x76CBC \n"
"    LDR     R1, [R2, #4] \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF820CE0 /*_SetEventFlag*/ \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF9921D4 \n"

"loc_FF992CA8:\n"
"    LDR     R3, =0x76CC0 \n"
"    MOV     R1, R4 \n"
"    LDR     R0, [R3] \n"
"    MOV     R2, #0 \n"
"    BL      sub_FF8213F8 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF992B34 \n"
"    MOV     R1, #0x410 \n"
"    LDR     R0, =0xFF9920E4 \n"
"    ADD     R1, R1, #9 \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #4 \n"
"    LDMFD   SP!, {R4,PC} \n"
);
}

/*************************************************************/
//** sub_FF9925E4_my @ 0xFF9925E4 - 0xFF99282C, length=147
void __attribute__((naked,noinline)) sub_FF9925E4_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    LDR     R4, [R0, #0xC] \n"
"    LDR     R3, [R4, #8] \n"
"    ORR     R3, R3, #1 \n"
"    STR     R3, [R4, #8] \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF99CC0C \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF992628 \n"
"    LDR     R3, [R4, #8] \n"
"    MOV     R0, #1 \n"
"    ORR     R3, R3, #0x40000000 \n"
"    STR     R3, [R4, #8] \n"

"loc_FF992618:\n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF990BD8 \n"

"loc_FF992628:\n"
"    LDR     R1, =0xA2400 \n"
"    MOV     R3, #0x8200 \n"
"    LDRH    R2, [R1] \n"
"    ADD     R3, R3, #0xA \n"
"    CMP     R2, R3 \n"
"    BEQ     loc_FF992674 \n"
"    LDRH    R3, [R1, #0x88] \n"
"    CMP     R3, #3 \n"
"    BEQ     loc_FF992674 \n"
"    LDR     R3, [R4, #0xC] \n"
"    CMP     R3, #1 \n"
"    BLS     loc_FF992674 \n"
"    LDRH    R3, [R1, #0x86] \n"
"    CMP     R3, #0 \n"
"    BNE     loc_FF992674 \n"
"    LDRH    R3, [R1, #0x82] \n"
"    CMP     R3, #2 \n"
"    BNE     loc_FF992674 \n"
"    BL      sub_FF9936E8 \n"

"loc_FF992674:\n"
"    LDR     R1, =0xA2400 \n"
"    MOV     R3, #0x8200 \n"
"    LDRH    R2, [R1] \n"
"    ADD     R3, R3, #0xA \n"
"    CMP     R2, R3 \n"
"    BEQ     loc_FF9926BC \n"
"    LDRH    R3, [R1, #0x88] \n"
"    CMP     R3, #3 \n"
"    BEQ     loc_FF9926BC \n"
"    LDR     R3, [R4, #0xC] \n"
"    CMP     R3, #1 \n"
"    BLS     loc_FF9926BC \n"
"    LDRH    R3, [R1, #0x86] \n"
"    CMP     R3, #0 \n"
"    BNE     loc_FF9926BC \n"
"    LDRH    R3, [R1, #0x82] \n"
"    CMP     R3, #2 \n"
"    BEQ     loc_FF992724 \n"

"loc_FF9926BC:\n"
"    LDR     R2, =0xA2400 \n"
"    LDRH    R3, [R2, #0x88] \n"
"    CMP     R3, #3 \n"
"    BEQ     loc_FF99273C \n"
"    LDRH    R3, [R2, #0x86] \n"
"    CMP     R3, #0 \n"
"    BNE     loc_FF99273C \n"
"    LDRH    R1, [R2, #0x82] \n"
"    CMP     R1, #1 \n"
"    BNE     loc_FF99273C \n"
"    LDRH    R2, [R2] \n"
"    MOV     R3, #0x8200 \n"
"    ADD     R3, R3, #0xA \n"
"    CMP     R2, R3 \n"
"    BEQ     loc_FF99273C \n"
"    LDR     R3, [R4, #0xC] \n"
"    CMP     R3, #1 \n"
"    BLS     loc_FF99273C \n"
"    ADD     R3, R1, #0xFF00 \n"
"    ADD     R3, R3, #0xFF \n"
"    MOV     R3, R3, LSL#16 \n"
"    CMP     R3, #0x10000 \n"
"    BHI     loc_FF99273C \n"
"    LDR     R3, [R4, #0x10] \n"
"    CMP     R3, #1 \n"
"    BNE     loc_FF99273C \n"

"loc_FF992724:\n"
"    LDR     R3, =0x76CBC \n"
"    MOV     R2, #0xEA00 \n"
"    LDR     R0, [R3] \n"
"    MOV     R1, #0x8000000 \n"
"    ADD     R2, R2, #0x60 \n"
"    BL      sub_FF99D090 \n"

"loc_FF99273C:\n"
"    BL      sub_FF9924C4 \n"
"    BL      sub_FF9931AC \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9943AC \n"
"    TST     R0, #1 \n"
"    BNE     loc_FF992618 \n"
"    BL      sub_FF9D5114 \n"
"    BL      sub_FF825AC4 \n"
"    STR     R0, [R4, #0x14] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF995938 \n"
"    BL      sub_FF9963A4 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF995A50_my \n"  // --> Patched. Old value = 0xFF995A50.
"    BL      capt_seq_hook_raw_here\n"   // +
"    MOV     R1, #1 \n"
"    MOV     R2, R4 \n"
"    BL      sub_FF990BD8 \n"
"    BL      sub_FF995E80 \n"
"    CMP     R0, #0 \n"
"    LDRNE   R3, [R4, #8] \n"
"    ORRNE   R3, R3, #0x2000 \n"
"    STRNE   R3, [R4, #8] \n"
"    LDR     R2, =0xA2400 \n"
"    LDRH    R3, [R2, #0x88] \n"
"    CMP     R3, #3 \n"
"    LDMEQFD SP!, {R4,PC} \n"
"    LDRH    R3, [R2, #0x86] \n"
"    CMP     R3, #0 \n"
"    LDMNEFD SP!, {R4,PC} \n"
"    LDRH    R3, [R2, #0x82] \n"
"    CMP     R3, #2 \n"
"    LDMNEFD SP!, {R4,PC} \n"
"    MOV     R0, R4 \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF993740 \n"
);
}

/*************************************************************/
//** sub_FF995A50_my @ 0xFF995A50 - 0xFF995AA8, length=23
void __attribute__((naked,noinline)) sub_FF995A50_my() {
asm volatile (
"    STMFD   SP!, {R4,R5,LR} \n"
"    MOV     R4, R0 \n"
"    SUB     SP, SP, #0xC \n"
"    BL      sub_FF996518 \n"
"    MVN     R1, #0 \n"
"    BL      sub_FF820E7C /*_ClearEventFlag*/ \n"
"    MOV     R0, #0x120 \n"
"    ADD     R0, R0, #2 \n"
"    ADD     R1, SP, #4 \n"
"    MOV     R2, #4 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF995A90 \n"
"    LDR     R0, =0xFF9958CC \n"
"    MOV     R1, #0x1DC \n"
"    BL      _DebugAssert \n"

"loc_FF995A90:\n"
"    LDR     R3, =0xA2400 \n"
"    LDR     R2, =0xA24C0 \n"
"    LDR     R0, [R3, #0x7C] \n"
"    LDRSH   R1, [R2, #0xE] \n"
"    BL      sub_FF8B0C2C \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF995850 \n"
"    BL      wait_until_remote_button_is_released\n"
"    BL      capt_seq_hook_set_nr\n"
"    LDR     PC, =0xFF995AAC \n"  // Continue in firmware
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF92413C - 0xFF92463C, length=321
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    SUB     SP, SP, #0x20 \n"
"    ADD     R7, SP, #4 \n"
"    B       loc_FF9245F8 \n"

"loc_FF92414C:\n"
"    CMP     R2, #0x22 \n"
"    BNE     loc_FF924164 \n"
"    LDR     R0, [R12, #0x8C] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x88] \n"
"    B       loc_FF9241C8 \n"

"loc_FF924164:\n"
"    CMP     R2, #0x1D \n"
"    BNE     loc_FF924178 \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF92400C \n"
"    B       loc_FF9241B8 \n"

"loc_FF924178:\n"
"    CMP     R2, #0x1E \n"
"    BNE     loc_FF92418C \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF924068 \n"
"    B       loc_FF9241B8 \n"

"loc_FF92418C:\n"
"    SUB     R3, R2, #0x1F \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF9241A4 \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF9240C4 \n"
"    B       loc_FF9241B8 \n"

"loc_FF9241A4:\n"
"    CMP     R2, #0x21 \n"
"    BNE     loc_FF9241D4 \n"
"    BL      sub_FF8C57DC \n"
"    BL      sub_FF8C88D0 \n"
"    BL      sub_FF8C7B08 \n"

"loc_FF9241B8:\n"
"    LDR     R3, [SP, #4] \n"
"    LDR     R0, [R3, #0x8C] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x88] \n"

"loc_FF9241C8:\n"
"    LDR     R0, [SP, #4] \n"
"    BL      sub_FF91FE70 \n"
"    B       loc_FF9245F8 \n"

"loc_FF9241D4:\n"
"    CMP     R2, #0xD \n"
"    MOV     R8, #1 \n"
"    BNE     loc_FF924244 \n"
"    LDR     R1, [R12, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R12, R1, LSL#2 \n"
"    ADD     R6, SP, #0x14 \n"
"    SUB     R1, R1, #8 \n"
"    MOV     R2, #0xC \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R0, [SP, #4] \n"
"    BL      sub_FF92286C \n"
"    LDR     R3, [SP, #4] \n"
"    LDR     R1, [R3, #0x7C] \n"
"    LDR     R2, [R3, #0x8C] \n"
"    ADD     R0, R3, #4 \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x88] \n"
"    LDR     R0, [SP, #4] \n"
"    BL      sub_FF922B3C \n"
"    LDR     R3, [SP, #4] \n"
"    ADD     R0, R3, #4 \n"
"    LDR     R1, [R3, #0x7C] \n"
"    LDR     R2, [R3, #0x94] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x90] \n"
"    B       loc_FF924594 \n"

"loc_FF924244:\n"
"    SUB     R3, R2, #0xE \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF924300 \n"
"    ADD     R6, SP, #0x14 \n"
"    ADD     R5, SP, #8 \n"
"    MOV     R0, R12 \n"
"    MOV     R1, R6 \n"
"    MOV     R2, R5 \n"
"    BL      sub_FF922C30 \n"
"    MOV     R4, R0 \n"
"    CMP     R4, #5 \n"
"    CMPNE   R4, #1 \n"
"    BNE     loc_FF924298 \n"
"    LDR     R12, [SP, #4] \n"
"    MOV     R0, R5 \n"
"    LDR     R1, [R12, #0x7C] \n"
"    MOV     R2, R4 \n"
"    LDR     R3, [R12, #0x8C] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x88] \n"
"    B       loc_FF9242D0 \n"

"loc_FF924298:\n"
"    CMP     R4, #6 \n"
"    CMPNE   R4, #2 \n"
"    BNE     loc_FF9242E0 \n"
"    LDR     R12, [SP, #4] \n"
"    MOV     R0, R5 \n"
"    MOV     R1, R8 \n"
"    MOV     R2, R4 \n"
"    LDR     R3, [R12, #0x8C] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x88] \n"
"    MOV     R1, R6 \n"
"    LDR     R0, [SP, #4] \n"
"    MOV     R2, R5 \n"
"    BL      sub_FF923C78 \n"

"loc_FF9242D0:\n"
"    MOV     R1, R4 \n"
"    LDR     R0, [SP, #4] \n"
"    BL      sub_FF923FA0 \n"
"    B       loc_FF924594 \n"

"loc_FF9242E0:\n"
"    LDR     R12, [SP, #4] \n"
"    MOV     R2, R4 \n"
"    ADD     R0, R12, #4 \n"
"    LDR     R1, [R12, #0x7C] \n"
"    LDR     R3, [R12, #0x8C] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x88] \n"
"    B       loc_FF924594 \n"

"loc_FF924300:\n"
"    SUB     R3, R2, #0x19 \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF924358 \n"
"    LDR     R1, [R12, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R12, R1, LSL#2 \n"
"    ADD     R6, SP, #0x14 \n"
"    SUB     R1, R1, #8 \n"
"    MOV     R2, #0xC \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R0, [SP, #4] \n"
"    BL      sub_FF921D20 \n"
"    LDR     R3, [SP, #4] \n"
"    ADD     R0, R3, #4 \n"
"    LDR     R1, [R3, #0x7C] \n"
"    LDR     R2, [R3, #0x8C] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x88] \n"
"    LDR     R0, [SP, #4] \n"
"    BL      sub_FF922040 \n"
"    B       loc_FF924594 \n"

"loc_FF924358:\n"
"    ADD     R6, SP, #0x14 \n"
"    ADD     R1, R12, #4 \n"
"    MOV     R2, #0xC \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R12, [SP, #4] \n"
"    LDR     R3, [R12] \n"
"    MOV     R2, R12 \n"
"    CMP     R3, #0x1C \n"
"    LDRLS   PC, [PC, R3, LSL#2] \n"
"    B       loc_FF924580 \n"
"    .long   loc_FF9243F8 \n"
"    .long   loc_FF924404 \n"
"    .long   loc_FF924410 \n"
"    .long   loc_FF924410 \n"
"    .long   loc_FF9243F8 \n"
"    .long   loc_FF924404 \n"
"    .long   loc_FF924410 \n"
"    .long   loc_FF924410 \n"
"    .long   loc_FF924434 \n"
"    .long   loc_FF924434 \n"
"    .long   loc_FF924554 \n"
"    .long   loc_FF924560 \n"
"    .long   loc_FF924570 \n"
"    .long   loc_FF924580 \n"
"    .long   loc_FF924580 \n"
"    .long   loc_FF924580 \n"
"    .long   loc_FF92441C \n"
"    .long   loc_FF924428 \n"
"    .long   loc_FF924444 \n"
"    .long   loc_FF924450 \n"
"    .long   loc_FF924488 \n"
"    .long   loc_FF9244C0 \n"
"    .long   loc_FF9244F8 \n"
"    .long   loc_FF924530 \n"
"    .long   loc_FF924530 \n"
"    .long   loc_FF924580 \n"
"    .long   loc_FF924580 \n"
"    .long   loc_FF92453C \n"
"    .long   loc_FF924548 \n"

"loc_FF9243F8:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF920720 \n"
"    B       loc_FF92457C \n"

"loc_FF924404:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9209C4 \n"
"    B       loc_FF92457C \n"

"loc_FF924410:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF920C38 \n"
"    B       loc_FF92457C \n"

"loc_FF92441C:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF920F34 \n"
"    B       loc_FF92457C \n"

"loc_FF924428:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF921198 \n"
"    B       loc_FF92457C \n"

"loc_FF924434:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF921394_my \n"  // --> Patched. Old value = 0xFF921394.
"    MOV     R8, #0 \n"
"    B       loc_FF92457C \n"

"loc_FF924444:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9214F0 \n"
"    B       loc_FF92457C \n"

"loc_FF924450:\n"
"    LDRH    R1, [R2, #4] \n"
"    LDR     R3, =0x51028 \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R3, #6] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    LDRH    R1, [R3, #2] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R3, [R3, #4] \n"
"    STRH    R3, [SP, #0x18] \n"
"    MOV     R0, R2 \n"
"    LDRH    R2, [R2, #0xC] \n"
"    STRH    R2, [SP, #0x1C] \n"
"    BL      sub_FF9217EC \n"
"    B       loc_FF92457C \n"

"loc_FF924488:\n"
"    MOV     R0, R2 \n"
"    LDRH    R2, [R2, #4] \n"
"    LDR     R3, =0x51028 \n"
"    STRH    R2, [SP, #0x14] \n"
"    LDRH    R2, [R3, #8] \n"
"    STRH    R2, [SP, #0x1C] \n"
"    LDRH    R1, [R3, #2] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R2, [R3, #4] \n"
"    STRH    R2, [SP, #0x18] \n"
"    LDRH    R3, [R3, #6] \n"
"    STRH    R3, [SP, #0x1A] \n"
"    BL      sub_FF921914 \n"
"    B       loc_FF92457C \n"

"loc_FF9244C0:\n"
"    LDR     R3, =0x51028 \n"
"    LDRH    R1, [R3] \n"
"    STRH    R1, [SP, #0x14] \n"
"    MOV     R0, R2 \n"
"    LDRH    R2, [R2, #6] \n"
"    STRH    R2, [SP, #0x16] \n"
"    LDRH    R2, [R3, #8] \n"
"    STRH    R2, [SP, #0x1C] \n"
"    LDRH    R1, [R3, #4] \n"
"    STRH    R1, [SP, #0x18] \n"
"    LDRH    R3, [R3, #6] \n"
"    STRH    R3, [SP, #0x1A] \n"
"    BL      sub_FF9219D8 \n"
"    B       loc_FF92457C \n"

"loc_FF9244F8:\n"
"    LDR     R3, =0x51028 \n"
"    LDRH    R1, [R3, #6] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    LDRH    R1, [R3] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R3, #2] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R3, [R3, #4] \n"
"    STRH    R3, [SP, #0x18] \n"
"    MOV     R0, R2 \n"
"    LDRH    R2, [R2, #0xC] \n"
"    STRH    R2, [SP, #0x1C] \n"
"    BL      sub_FF921A90 \n"
"    B       loc_FF92457C \n"

"loc_FF924530:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF921B40 \n"
"    B       loc_FF92457C \n"

"loc_FF92453C:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF922190 \n"
"    B       loc_FF92457C \n"

"loc_FF924548:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF92238C \n"
"    B       loc_FF92457C \n"

"loc_FF924554:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF922548 \n"
"    B       loc_FF92457C \n"

"loc_FF924560:\n"
"    MOV     R0, R2 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF92272C \n"
"    B       loc_FF92457C \n"

"loc_FF924570:\n"
"    MOV     R0, R2 \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF92272C \n"

"loc_FF92457C:\n"
"    LDR     R12, [SP, #4] \n"

"loc_FF924580:\n"
"    ADD     R0, R12, #4 \n"
"    LDR     R1, [R12, #0x7C] \n"
"    LDR     R2, [R12, #0x8C] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x88] \n"

"loc_FF924594:\n"
"    CMP     R8, #1 \n"
"    BNE     loc_FF9245BC \n"
"    LDR     R1, [SP, #4] \n"
"    LDR     R3, [R1, #0x7C] \n"
"    ADD     R3, R3, R3, LSL#1 \n"
"    ADD     R1, R1, R3, LSL#2 \n"
"    MOV     R0, R6 \n"
"    SUB     R1, R1, #8 \n"
"    BL      sub_FF920484 \n"
"    B       loc_FF9245F0 \n"

"loc_FF9245BC:\n"
"    MOV     R4, #1 \n"
"    MOV     R0, R4 \n"
"    MOV     R1, R4 \n"
"    MOV     R2, R4 \n"
"    MOV     R3, R4 \n"
"    STR     R4, [SP] \n"
"    BL      sub_FF9203D8 \n"
"    MOV     R0, R4 \n"
"    MOV     R1, R0 \n"
"    MOV     R2, R0 \n"
"    MOV     R3, R0 \n"
"    STR     R4, [SP] \n"
"    BL      sub_FF92055C \n"

"loc_FF9245F0:\n"
"    LDR     R0, [SP, #4] \n"
"    BL      sub_FF91FE70 \n"

"loc_FF9245F8:\n"
"    LDR     R3, =0x51020 \n"
"    MOV     R2, #0 \n"
"    LDR     R0, [R3] \n"
"    MOV     R1, R7 \n"
"    BL      sub_FF8213F8 /*_ReceiveMessageQueue*/ \n"
"    LDR     R12, [SP, #4] \n"
"    LDR     R2, [R12] \n"
"    CMP     R2, #0x23 \n"
"    BNE     loc_FF92414C \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF91FE70 \n"
"    LDR     R3, =0x5101C \n"
"    MOV     R1, #1 \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF820CE0 /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x20 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"
);
}

/*************************************************************/
//** sub_FF921394_my @ 0xFF921394 - 0xFF9214D8, length=82
void __attribute__((naked,noinline)) sub_FF921394_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R3, =0x5101C \n"
"    MOV     R4, R0 \n"
"    MOV     R1, #0x3E \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF820E7C /*_ClearEventFlag*/ \n"
"    MOV     R1, #0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    BL      sub_FF91FFA4 \n"
"    MOV     R6, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF920118 \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF9201B4 \n"
"    LDRSH   R0, [R4, #0xA] \n"
"    BL      sub_FF920250 \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    BL      sub_FF9202EC \n"
"    LDR     R3, [R4] \n"
"    CMP     R3, #9 \n"
"    MOV     R5, R0 \n"
"    MOVEQ   R5, #0 \n"
"    MOVEQ   R6, R5 \n"
"    CMP     R6, #1 \n"
"    BNE     loc_FF921418 \n"
"    MOV     R2, #2 \n"
"    LDRSH   R0, [R4, #4] \n"
"    LDR     R1, =0xFF91FEC4 \n"
"    BL      sub_FFAF8644 \n"
"    LDR     R2, =0x5105C \n"
"    MOV     R3, #0 \n"
"    STR     R3, [R2] \n"
"    B       loc_FF92141C \n"

"loc_FF921418:\n"
"    BL      sub_FF920388 \n"

"loc_FF92141C:\n"
"    STRH    R0, [R4, #4] \n"
"    CMP     R5, #1 \n"
"    BNE     loc_FF92143C \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    LDR     R1, =0xFF91FF88 \n"
"    MOV     R2, #0x20 \n"
"    BL      sub_FF9206C0 \n"
"    B       loc_FF921440 \n"

"loc_FF92143C:\n"
"    BL      sub_FF9203C8 \n"

"loc_FF921440:\n"
"    STRH    R0, [R4, #0xC] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8C5464_my \n"  // --> Patched. Old value = 0xFF8C5464.
"    LDRSH   R0, [R4, #8] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF8C76C8 \n"
"    ADD     R0, R4, #8 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF8C7788 \n"
"    LDRSH   R0, [R4, #0xE] \n"
"    BL      sub_FF90DAA0 \n"
"    CMP     R6, #1 \n"
"    BNE     loc_FF9214A4 \n"
"    LDR     R3, =0x5101C \n"
"    MOV     R2, #0xBB0 \n"
"    LDR     R0, [R3] \n"
"    MOV     R1, #2 \n"
"    ADD     R2, R2, #8 \n"
"    BL      sub_FF820CD0 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF9214A4 \n"
"    MOV     R1, #0x440 \n"
"    LDR     R0, =0xFF91FE1C \n"
"    ADD     R1, R1, #0xB \n"
"    BL      _DebugAssert \n"

"loc_FF9214A4:\n"
"    CMP     R5, #1 \n"
"    LDMNEFD SP!, {R4-R6,PC} \n"
"    LDR     R3, =0x5101C \n"
"    MOV     R2, #0xBB0 \n"
"    LDR     R0, [R3] \n"
"    MOV     R1, #0x20 \n"
"    ADD     R2, R2, #8 \n"
"    BL      sub_FF820CD0 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    LDMEQFD SP!, {R4-R6,PC} \n"
"    LDR     R0, =0xFF91FE1C \n"
"    MOV     R1, #0x450 \n"
"    LDMFD   SP!, {R4-R6,LR} \n"
"    B       _DebugAssert \n"
);
}

/*************************************************************/
//** sub_FF8C5464_my @ 0xFF8C5464 - 0xFF8C54C0, length=24
void __attribute__((naked,noinline)) sub_FF8C5464_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    LDR     R3, =0x5670 \n"
"    LDR     R2, [R3] \n"
"    MOV     R1, #0x150 \n"
"    MOV     R3, R0, LSL#16 \n"
"    CMP     R2, #1 \n"
"    ADD     R1, R1, #1 \n"
"    LDR     R0, =0xFF8C4CA0 \n"
"    MOV     R4, R3, ASR#16 \n"
"    BEQ     loc_FF8C5490 \n"
"    BL      _DebugAssert \n"

"loc_FF8C5490:\n"
"    MOV     R1, #0x154 \n"
"    CMN     R4, #0xC00 \n"
"    LDR     R3, =0x359FE \n"
"    LDR     R0, =0xFF8C4CA0 \n"
"    ADD     R1, R1, #3 \n"
"    LDREQSH R4, [R3] \n"
"    LDRNE   R3, =0x359FE \n"
"    CMN     R4, #0xC00 \n"
"    STRH    R4, [R3] \n"
"    BNE     loc_FF8C54BC \n"
"    BL      _DebugAssert \n"

"loc_FF8C54BC:\n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    LDR     PC, =0xFF8C54C4 \n"  // Continue in firmware
);
}