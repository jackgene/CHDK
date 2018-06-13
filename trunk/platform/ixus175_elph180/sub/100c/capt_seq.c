/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define USE_STUBS_NRFLAG 1 // see stubs_min.S

#define NR_AUTO (0)

#define PAUSE_FOR_FILE_COUNTER 350  // Enable delay in capt_seq_hook_raw_here to ensure file counter is updated

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF88E214 - 0xFF88E504, length=189
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R3-R7,LR} \n"
"    LDR     R5, =0x1B8B8 \n"
"    LDR     R7, =0x3704 \n"
"    MOV     R6, #0 \n"

"loc_FF88E224:\n"
"    LDR     R0, [R7, #8] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, SP \n"
"    BL      sub_006B8568 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF88E254 \n"
"    LDR     R2, =0x428 \n"
"    LDR     R1, =0xFF88DBB4 /*'SsShootTask.c'*/ \n"
"    MOV     R0, #0 \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R3-R7,PC} \n"

"loc_FF88E254:\n"
"    LDR     R0, [SP] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #1 \n"
"    CMPNE   R0, #0x2B \n"
"    CMPNE   R0, #0x1F \n"
"    BLNE    sub_FF9AF908 \n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x2E \n"
"    ADDCC   PC, PC, R1, LSL#2 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E338 \n"
"    B       loc_FF88E354 \n"
"    B       loc_FF88E360 \n"
"    B       loc_FF88E374 \n"
"    B       loc_FF88E36C \n"
"    B       loc_FF88E384 \n"
"    B       loc_FF88E38C \n"
"    B       loc_FF88E398 \n"
"    B       loc_FF88E3A4 \n"
"    B       loc_FF88E3B8 \n"
"    B       loc_FF88E3C4 \n"
"    B       loc_FF88E3CC \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E3D8 \n"
"    B       loc_FF88E3E0 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E3E8 \n"
"    B       loc_FF88E3F0 \n"
"    B       loc_FF88E3F8 \n"
"    B       loc_FF88E404 \n"
"    B       loc_FF88E40C \n"
"    B       loc_FF88E414 \n"
"    B       loc_FF88E41C \n"
"    B       loc_FF88E424 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E42C \n"
"    B       loc_FF88E434 \n"
"    B       loc_FF88E43C \n"
"    B       loc_FF88E448 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E450 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E458 \n"
"    B       loc_FF88E460 \n"
"    B       loc_FF88E468 \n"
"    B       loc_FF88E474 \n"
"    B       loc_FF88E47C \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E4A8 \n"
"    B       loc_FF88E4B4 \n"
"    B       loc_FF88E4C8 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E338:\n"
"    LDR     R0, [R0, #0xC] \n"
"    BL      sub_FF88EB34 \n"
"    BL      shooting_expo_param_override\n"    // added
"    BL      sub_FF88B8E0 \n"
// Quick press override hack does not appear to be needed
"    LDR     R0, [R5, #0x28] \n"
"    CMP     R0, #0 \n"
"    BLNE    sub_FF9AE81C_my \n"  // --> Patched. Old value = 0xFF9AE81C.
"    B       loc_FF88E4D8 \n"

"loc_FF88E354:\n"
"    LDR     R0, [R0, #0x10] \n"
"    BL      sub_FF9AE794_my \n"  // --> Patched. Old value = 0xFF9AE794.
"    B       loc_FF88E4D8 \n"

"loc_FF88E360:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF88EF0C \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E36C:\n"
"    BL      sub_FF88E6C0 \n"
"    B       loc_FF88E37C \n"

"loc_FF88E374:\n"
"    LDR     R0, [R0, #0xC] \n"
"    BL      sub_FF88EB08 \n"

"loc_FF88E37C:\n"
"    STR     R6, [R5, #0x28] \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E384:\n"
"    BL      sub_FF88EB14 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E38C:\n"
"    BL      sub_FF88EDC4 \n"
"    BL      sub_FF88B8E0 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E398:\n"
"    LDR     R0, [R0, #0x10] \n"
"    BL      sub_FF9AE928 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3A4:\n"
"    BL      sub_FF88EE5C \n"
"    BL      sub_FF88B8E0 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF830D60 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3B8:\n"
"    LDR     R0, [R5, #0x54] \n"
"    BL      sub_FF88F4F8 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3C4:\n"
"    BL      sub_FF88F954 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3CC:\n"
"    LDR     R0, [R0, #0xC] \n"
"    BL      sub_FF88F9BC \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3D8:\n"
"    BL      sub_FF9ACEB0 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3E0:\n"
"    BL      sub_FF9AD0FC \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3E8:\n"
"    BL      sub_FF9AD1C8 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3F0:\n"
"    BL      sub_FF9AD2C8 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E3F8:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF9AD568 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E404:\n"
"    BL      sub_FF9AD6E4 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E40C:\n"
"    BL      sub_FF895FBC \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E414:\n"
"    BL      sub_FF895FC8 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E41C:\n"
"    BL      sub_FF9AD788 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E424:\n"
"    BL      sub_FF9AD83C \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E42C:\n"
"    BL      sub_FF88F030 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E434:\n"
"    MOV     R0, #0 \n"
"    B       loc_FF88E440 \n"

"loc_FF88E43C:\n"
"    LDR     R0, [R0, #0xC] \n"

"loc_FF88E440:\n"
"    BL      sub_FF88F0C0 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E448:\n"
"    BL      sub_FF9AD3A8 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E450:\n"
"    BL      sub_FF9AD3F8 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E458:\n"
"    BL      sub_FF8920B0 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E460:\n"
"    BL      sub_FF8921B4 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E468:\n"
"    LDR     R0, [R0, #0xC] \n"
"    BL      sub_FF9AD95C \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E474:\n"
"    BL      sub_FF9AD9EC \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E47C:\n"
"    BL      sub_FF8946F8 \n"
"    LDR     R0, =0x1B9B8 \n"
"    LDRH    R0, [R0, #0x9C] \n"
"    CMP     R0, #4 \n"
"    LDRNEH  R0, [R5] \n"
"    SUBNE   R1, R0, #0x8200 \n"
"    SUBNES  R1, R1, #0x36 \n"
"    BNE     loc_FF88E4D8 \n"
"    BL      sub_FF8921B4 \n"
"    BL      sub_FF892768 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E4A8:\n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0x11 \n"
"    B       loc_FF88E4BC \n"

"loc_FF88E4B4:\n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0x10 \n"

"loc_FF88E4BC:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF88C3D0 \n"
"    B       loc_FF88E4D8 \n"

"loc_FF88E4C8:\n"
"    LDR     R2, =0x557 \n"
"    LDR     R1, =0xFF88DBB4 /*'SsShootTask.c'*/ \n"
"    MOV     R0, #0 \n"
"    BL      _DebugAssert \n"

"loc_FF88E4D8:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0, #4] \n"
"    LDR     R0, [R7, #4] \n"
"    BL      sub_006B82FC /*_SetEventFlag*/ \n"
"    LDR     R4, [SP] \n"
"    LDR     R0, [R4, #8] \n"
"    CMP     R0, #0 \n"
"    LDREQ   R1, =0xFF88DBB4 /*'SsShootTask.c'*/ \n"
"    MOVEQ   R2, #0xFF \n"
"    BLEQ    _DebugAssert \n"
"    STR     R6, [R4, #8] \n"
"    B       loc_FF88E224 \n"
);
}

/*************************************************************/
//** sub_FF9AE81C_my @ 0xFF9AE81C - 0xFF9AE8F8, length=56
void __attribute__((naked,noinline)) sub_FF9AE81C_my() {
asm volatile (
"    STMFD   SP!, {R3-R7,LR} \n"
"    BL      sub_FF88D7C4 \n"
"    MOV     R4, R0 \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF894020 \n"
"    LDR     R6, =0x776C \n"
"    TST     R0, #1 \n"
"    MOV     R5, #1 \n"
"    BNE     loc_FF9AE8E4 \n"
"    MOV     R2, #2 \n"
"    MOV     R1, SP \n"
"    ADD     R0, R2, #0x110 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    ADDNE   R2, R5, #0x188 \n"
"    LDRNE   R1, =0xFF9AE900 /*'SsCaptureCtrl.c'*/ \n"
"    MOVNE   R0, #0 \n"
"    BLNE    _DebugAssert \n"
"    LDRSH   R0, [SP] \n"
"    BL      sub_FF82AFDC \n"
"    BL      sub_FF82ADEC \n"
"    CMP     R0, #1 \n"
"    BLS     loc_FF9AE8EC \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF82AF44 \n"
"    BL      sub_FF88EB20 \n"
"    BL      sub_FF88FCF4 \n"
"    MOV     R1, R4 \n"
"    BL      sub_FF88FD50 \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R4, #0x30 \n"
"    MOV     R0, #0x118 \n"
"    BL      _SetPropertyCase \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R4, #0x34 \n"
"    MOV     R0, #0x32 \n"
"    BL      _SetPropertyCase \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R4, #8 \n"
"    MOV     R0, #0x46 \n"
"    BL      _SetPropertyCase \n"
"    BL      sub_FF9AF124 \n"
"    MVN     R1, #0x1000 \n"
"    BL      sub_006B8344 /*_ClearEventFlag*/ \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9AE270 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFAE7F88_my \n"  // --> Patched. Old value = 0xFFAE7F88.
//"    BL      capt_seq_hook_raw_here \n"         // added
"    TST     R0, #1 \n"
"    BEQ     loc_FF9AE8E8 \n"

"loc_FF9AE8E4:\n"
"    STR     R5, [R6] \n"

"loc_FF9AE8E8:\n"
"    LDMFD   SP!, {R3-R7,PC} \n"

"loc_FF9AE8EC:\n"
"    STR     R5, [R6] \n"
"    BL      sub_FF88C174 \n"
"    BL      sub_FF894088 \n"
"    LDMFD   SP!, {R3-R7,PC} \n"
);
}

/*************************************************************/
//** sub_FF9AE794_my @ 0xFF9AE794 - 0xFF9AE818, length=34
void __attribute__((naked,noinline)) sub_FF9AE794_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0x1B8B8 \n"
"    MOV     R6, R0 \n"
"    LDR     R0, [R5, #0x28] \n"
"    MOV     R4, #0 \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF9AE7E0 \n"
"    LDR     R0, =0x776C \n"
"    MOV     R2, R6 \n"
"    LDR     R0, [R0] \n"
"    MOV     R1, #2 \n"
"    CMP     R0, #0 \n"
"    MOVNE   R4, #0x1D \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF88C3D0 \n"
"    MOV     R1, R4 \n"
"    MOV     R0, R6 \n"
"    BL      sub_FF9AF690 \n"
"    B       loc_FF9AE810 \n"

"loc_FF9AE7E0:\n"
"    MOV     R0, R6 \n"
"    BL      sub_FF9AE5A0_my \n"  // --> Patched. Old value = 0xFF9AE5A0.
"    TST     R0, #1 \n"
"    MOV     R4, R0 \n"
"    BEQ     loc_FF9AE810 \n"
"    MOV     R2, R6 \n"
"    MOV     R1, #2 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF88C3D0 \n"
"    MOV     R1, R4 \n"
"    MOV     R0, R6 \n"
"    BL      sub_FF9AF8A4 \n"

"loc_FF9AE810:\n"
"    MOV     R0, #0 \n"
"    STR     R0, [R5, #0x28] \n"
"    LDMFD   SP!, {R4-R6,PC} \n"
);
}

/*************************************************************/
//** sub_FF9AE5A0_my @ 0xFF9AE5A0 - 0xFF9AE790, length=125
void __attribute__((naked,noinline)) sub_FF9AE5A0_my() {
asm volatile (
"    STMFD   SP!, {R2-R8,LR} \n"
"    MOV     R4, R0 \n"
"    BL      sub_FF88FCF4 \n"
"    MOV     R1, R4 \n"
"    BL      sub_FF88FD50 \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R4, #0x30 \n"
"    MOV     R0, #0x118 \n"
"    BL      _SetPropertyCase \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R4, #0x34 \n"
"    MOV     R0, #0x32 \n"
"    BL      _SetPropertyCase \n"
"    LDR     R7, =0x1B8B8 \n"
"    LDR     R0, [R7, #0x104] \n"
"    ADD     R5, R7, #0x100 \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF9AE600 \n"
"    LDRH    R0, [R5, #0x9A] \n"
"    CMP     R0, #3 \n"
"    LDRNE   R0, [R4, #8] \n"
"    CMPNE   R0, #1 \n"
"    BHI     loc_FF9AE624 \n"
"    B       loc_FF9AE60C \n"

"loc_FF9AE600:\n"
"    LDR     R0, [R4, #0xC] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF9AE624 \n"

"loc_FF9AE60C:\n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF894020 \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF9AE624 \n"
"    BL      sub_FF88C174 \n"
"    B       loc_FF9AE748 \n"

"loc_FF9AE624:\n"
"    LDR     R0, [R7, #0xE4] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF9AE658 \n"
"    LDRH    R0, [R5, #0x9A] \n"
"    CMP     R0, #3 \n"
"    LDRNE   R0, [R4, #8] \n"
"    CMPNE   R0, #1 \n"
"    BHI     loc_FF9AE698 \n"
"    LDR     R0, [R7, #0x104] \n"
"    CMP     R0, #0 \n"
"    LDRNE   R0, [R4, #0xC] \n"
"    CMPNE   R0, #1 \n"
"    BHI     loc_FF9AE698 \n"

"loc_FF9AE658:\n"
"    MOV     R2, #2 \n"
"    ADD     R1, SP, #4 \n"
"    ADD     R0, R2, #0x110 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    MOVNE   R2, #0xC1 \n"
"    LDRNE   R1, =0xFF9AE900 /*'SsCaptureCtrl.c'*/ \n"
"    MOVNE   R0, #0 \n"
"    BLNE    _DebugAssert \n"
"    LDRSH   R0, [SP, #4] \n"
"    BL      sub_FF82AFDC \n"
"    BL      sub_FF82ADEC \n"
"    CMP     R0, #1 \n"
"    BLS     loc_FF9AE740 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF82AF44 \n"

"loc_FF9AE698:\n"
"    BL      sub_FF9AF124 \n"
"    MVN     R1, #0x1000 \n"
"    BL      sub_006B8344 /*_ClearEventFlag*/ \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFAE7C38 \n"
"    TST     R0, #1 \n"
"    MOV     R6, R0 \n"
"    BNE     loc_FF9AE78C \n"
"    BL      sub_FF88EB20 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9AE270 \n"
"    LDR     R0, [R7, #0xA0] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF9AE770 \n"
"    LDRH    R0, [R5, #0x9A] \n"
"    CMP     R0, #3 \n"
"    LDRNE   R0, [R4, #8] \n"
"    CMPNE   R0, #1 \n"
"    BLS     loc_FF9AE700 \n"
"    BL      sub_FF9AF124 \n"
"    LDR     R3, =0x111 \n"
"    LDR     R2, =0x3A98 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =0xFF9AE900 /*'SsCaptureCtrl.c'*/ \n"
"    MOV     R1, #0x1000 \n"
"    BL      sub_FF8942B4 \n"

"loc_FF9AE700:\n"
"    LDR     R0, =0x18A \n"
"    MOV     R2, #4 \n"
"    ADD     R1, SP, #4 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R2, =0x115 \n"
"    LDRNE   R1, =0xFF9AE900 /*'SsCaptureCtrl.c'*/ \n"
"    MOVNE   R0, #0 \n"
"    BLNE    _DebugAssert \n"
"    LDR     R0, [SP, #4] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF9AE750 \n"
"    BL      sub_FF9AF124 \n"
"    MOV     R1, #0x1000 \n"
"    BL      sub_006B82FC /*_SetEventFlag*/ \n"
"    B       loc_FF9AE770 \n"

"loc_FF9AE740:\n"
"    BL      sub_FF88C174 \n"
"    BL      sub_FF894088 \n"

"loc_FF9AE748:\n"
"    MOV     R0, #1 \n"
"    LDMFD   SP!, {R2-R8,PC} \n"

"loc_FF9AE750:\n"
"    BL      sub_FF9AF124 \n"
"    MOV     R1, #0x1000 \n"
"    BL      sub_006B8344 /*_ClearEventFlag*/ \n"
"    LDR     R2, =0xFF9AE58C \n"
"    LDR     R0, [SP, #4] \n"
"    MOV     R3, #0x1000 \n"
"    MOV     R1, R2 \n"
"    BL      sub_FF82605C /*_SetTimerAfter*/ \n"

"loc_FF9AE770:\n"
"    LDR     R0, [R7, #0xAC] \n"
"    CMP     R0, #0 \n"
"    MOV     R0, R4 \n"
"    BEQ     loc_FF9AE788 \n"
"    BL      sub_FFAE841C \n"
"    B       loc_FF9AE78C \n"

"loc_FF9AE788:\n"
"    BL      sub_FFAE7F88_my \n"  // --> Patched. Old value = 0xFFAE7F88.

"loc_FF9AE78C:\n"
//"    BL      capt_seq_hook_raw_here \n"         // added
"    MOV     R0, R6 \n"
"    LDMFD   SP!, {R2-R8,PC} \n"
);
}

/*************************************************************/
//** sub_FFAE7F88_my @ 0xFFAE7F88 - 0xFFAE8298, length=197
void __attribute__((naked,noinline)) sub_FFAE7F88_my() {
asm volatile (
"    STMFD   SP!, {R1-R9,LR} \n"
"    MOV     R4, R0 \n"
"    BL      sub_FF9AE1D8 \n"
"    BL      sub_FF9AEF80 \n"
"    LDR     R7, =0x1B8B8 \n"
"    LDR     R0, [R7, #0x190] \n"
"    CMP     R0, #2 \n"
"    BNE     loc_FFAE7FC4 \n"
"    ADD     R0, R7, #0x100 \n"
"    LDRH    R0, [R0, #0x9A] \n"
"    CMP     R0, #3 \n"
"    LDRNE   R0, [R4, #8] \n"
"    CMPNE   R0, #1 \n"
"    MOVLS   R0, #5 \n"
"    BLLS    sub_FF917674 \n"

"loc_FFAE7FC4:\n"
"    LDR     R0, =0x139 \n"
"    MOV     R2, #4 \n"
"    ADD     R1, SP, #8 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    MOVNE   R2, #0x150 \n"
"    LDRNE   R1, =0xFFAE824C /*'SsStandardCaptureSeq.c'*/ \n"
"    MOVNE   R0, #0 \n"
"    BLNE    _DebugAssert \n"
"    LDR     R0, [SP, #8] \n"
"    AND     R0, R0, #0xFF00 \n"
"    CMP     R0, #0x600 \n"
"    LDRNE   R0, =0xFF9ADDE4 \n"
"    LDREQ   R0, =0xFFAE7F38 \n"
"    MOVNE   R1, R4 \n"
"    MOVEQ   R1, #0 \n"
"    BL      sub_FFA33C40 \n"
"    MOV     R2, #2 \n"
"    ADD     R1, SP, #4 \n"
"    MOV     R0, #0x114 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R2, =0x159 \n"
"    LDRNE   R1, =0xFFAE824C /*'SsStandardCaptureSeq.c'*/ \n"
"    MOVNE   R0, #0 \n"
"    BLNE    _DebugAssert \n"
"    LDR     R0, [R7, #0x184] \n"
"    CMP     R0, #0 \n"
"    BLNE    sub_FF9AE0C4 \n"
"    MOV     R0, #0 \n"
//"  BL      _sub_FF891070 \n"  // --> Nullsub call removed.
"    BL      wait_until_remote_button_is_released\n" // added
"    BL      capt_seq_hook_set_nr\n"                 // added
"    MOV     R0, R4 \n"
"    BL      sub_FF9AE304 \n"
"    LDR     R1, =0xC4F0 \n"
"    MOV     R2, #4 \n"
"    MOV     R0, #0x92 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R2, =0x16E \n"
"    LDRNE   R1, =0xFFAE824C /*'SsStandardCaptureSeq.c'*/ \n"
"    MOVNE   R0, #0 \n"
"    BLNE    _DebugAssert \n"
"    BL      sub_FF891228 \n"
"    BL      sub_FF880BBC \n"
"    MOV     R1, #0 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFAE7F3C \n"
"    MOV     R6, R0 \n"
"    LDR     R0, [SP, #8] \n"
"    LDR     R8, =0xC4F0 \n"
"    AND     R0, R0, #0xFF00 \n"
"    CMP     R0, #0x600 \n"
"    LDRH    R0, [R4, #0x18] \n"
"    LDRNE   R2, =0xFF9AE098 \n"
"    LDREQ   R2, =0xFF9AE078 \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FFAE80B8 \n"
"    CMP     R0, #1 \n"
"    BEQ     loc_FFAE80DC \n"
"    CMP     R0, #4 \n"
"    BNE     loc_FFAE8150 \n"

"loc_FFAE80B8:\n"
"    STR     R6, [SP] \n"
"    MOV     R3, R2 \n"
"    LDR     R1, [R4, #0x34] \n"
"    LDR     R2, [R8] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9ADAF8 \n"
"    MOV     R5, R0 \n"
"    BL      sub_FF91F3A4 \n"
"    B       loc_FFAE8164 \n"

"loc_FFAE80DC:\n"
"    STR     R6, [SP] \n"
"    MOV     R3, R2 \n"
"    LDR     R1, [R4, #0x34] \n"
"    LDR     R2, [R8] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9ADBA0 \n"
"    MOV     R5, R0 \n"
"    MOV     R1, #0 \n"
"    MOV     R0, #0x45 \n"
"    BL      sub_FF832730 \n"
"    TST     R5, #1 \n"
"    BNE     loc_FFAE8164 \n"
"    LDR     R0, =0xFFAE7F38 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FFA33C40 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFAE7F3C \n"
"    MOV     R6, R0 \n"
"    LDR     R0, [R8] \n"
"    BL      sub_FF9AE15C \n"
"    LDR     R1, [R4, #0x34] \n"
"    LDR     R2, [R8] \n"
"    MOV     R3, R6 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9ADC54 \n"
"    MOV     R5, R0 \n"
"    BL      sub_FF9ADA80 \n"
"    B       loc_FFAE8164 \n"

"loc_FFAE8150:\n"
"    LDR     R2, =0x1A7 \n"
"    LDR     R1, =0xFFAE824C /*'SsStandardCaptureSeq.c'*/ \n"
"    MOV     R0, #0 \n"
"    BL      _DebugAssert \n"
"    MOV     R5, #0x1D \n"

"loc_FFAE8164:\n"
"    BL      sub_FF880BD4 \n"
"    LDR     R8, =0xFFAE7F38 \n"
"    TST     R5, #1 \n"
"    BNE     loc_FFAE81E4 \n"
"    LDR     R0, [R7, #0x100] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FFAE819C \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9AFF04 \n"
"    TST     R0, #1 \n"
"    LDRNE   R2, =0x1C9 \n"
"    LDRNE   R1, =0xFFAE824C /*'SsStandardCaptureSeq.c'*/ \n"
"    MOVNE   R0, #0 \n"
"    BLNE    _DebugAssert \n"
"    BL      capt_seq_hook_raw_here \n"         // added

"loc_FFAE819C:\n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9AE3D4 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9AE38C \n"
"    CMP     R6, R8 \n"
"    BEQ     loc_FFAE81E4 \n"
"    BL      sub_FF9AF124 \n"
"    LDR     R9, =0x1D6 \n"
"    LDR     R2, =0x3A98 \n"
"    LDR     R3, =0xFFAE824C /*'SsStandardCaptureSeq.c'*/ \n"
"    MOV     R1, #4 \n"
"    STR     R9, [SP] \n"
"    BL      sub_FF8942B4 \n"
"    CMP     R0, #0 \n"
"    MOVNE   R2, R9 \n"
"    LDRNE   R1, =0xFFAE824C /*'SsStandardCaptureSeq.c'*/ \n"
"    MOVNE   R0, #0 \n"
"    BLNE    _DebugAssert \n"

"loc_FFAE81E4:\n"
"    MOV     R2, R4 \n"
"    MOV     R1, #2 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF88C3D0 \n"
"    LDR     R0, [R7, #0x28] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FFAE8218 \n"
"    SUBS    R1, R6, R8 \n"
"    MOVNE   R1, #1 \n"
"    MOV     R2, R5 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9AF628 \n"
"    B       loc_FFAE822C \n"

"loc_FFAE8218:\n"
"    SUBS    R1, R6, R8 \n"
"    MOVNE   R1, #1 \n"
"    MOV     R2, R5 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9AF5BC \n"

"loc_FFAE822C:\n"
"    MOV     R0, R5 \n"
"    LDMFD   SP!, {R1-R9,PC} \n"
"    .ltorg\n"         // added
);
}
