/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0x61F4;

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF960314 - 0xFF960594, length=161
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    SUB     SP, SP, #4 \n"
"    MOV     R4, SP \n"
"    B       loc_FF96048C \n"

"loc_FF960324:\n"
"    LDR     R2, [SP] \n"
"    LDR     R3, [R2] \n"
"    MOV     R0, R2 \n"
"    CMP     R3, #0x14 \n"
"    LDRLS   PC, [PC, R3, LSL#2] \n"
"    B       loc_FF960460 \n"
"    .long   loc_FF960390 \n"
"    .long   loc_FF9603B0 \n"
"    .long   loc_FF9603C4 \n"
"    .long   loc_FF9603D4 \n"
"    .long   loc_FF9603CC \n"
"    .long   loc_FF9603DC \n"
"    .long   loc_FF9603E4 \n"
"    .long   loc_FF9603F0 \n"
"    .long   loc_FF9603F8 \n"
"    .long   loc_FF960404 \n"
"    .long   loc_FF96040C \n"
"    .long   loc_FF960414 \n"
"    .long   loc_FF96041C \n"
"    .long   loc_FF960424 \n"
"    .long   loc_FF96042C \n"
"    .long   loc_FF960438 \n"
"    .long   loc_FF960440 \n"
"    .long   loc_FF960448 \n"
"    .long   loc_FF960450 \n"
"    .long   loc_FF960458 \n"
"    .long   loc_FF960474 \n"

"loc_FF960390:\n"
"    BL      sub_FF961D60 \n"
"    BL      shooting_expo_param_override\n"   // +
"    BL      sub_FF95E090 \n"
"    LDR     R3, =0x99EC0 \n"
"    MOV     R2, #0\n"                          // added
"    STR     R2, [R3,#0x24]\n"                  // added, fixes overrides behavior at short shutter press (from S95)
//"  LDR     R2, [R3, #0x24] \n"  // above patch makes these three lines redundant
//"  CMP     R2, #0 \n"
//"  BEQ     loc_FF960470 \n"
//"  BL      _sub_FF95FF70 \n"
"    B       loc_FF960470 \n"

"loc_FF9603B0:\n"
"    BL      sub_FF95FEA0_my \n"  // --> Patched. Old value = 0xFF95FEA0.

"loc_FF9603B4:\n"
"    LDR     R2, =0x99EC0 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [R2, #0x24] \n"
"    B       loc_FF960470 \n"

"loc_FF9603C4:\n"
"    BL      sub_FF9620F0 \n"
"    B       loc_FF960470 \n"

"loc_FF9603CC:\n"
"    BL      sub_FF960F60 \n"
"    B       loc_FF9603B4 \n"

"loc_FF9603D4:\n"
"    BL      sub_FF9612FC \n"
"    B       loc_FF9603B4 \n"

"loc_FF9603DC:\n"
"    BL      sub_FF96130C \n"
"    B       loc_FF960470 \n"

"loc_FF9603E4:\n"
"    BL      sub_FF961E44 \n"
"    BL      sub_FF95E090 \n"
"    B       loc_FF960470 \n"

"loc_FF9603F0:\n"
"    BL      sub_FF960044 \n"
"    B       loc_FF960470 \n"

"loc_FF9603F8:\n"
"    BL      sub_FF961EAC \n"
"    BL      sub_FF95E090 \n"
"    B       loc_FF960470 \n"

"loc_FF960404:\n"
"    BL      sub_FF9612FC \n"
"    B       loc_FF960470 \n"

"loc_FF96040C:\n"
"    BL      sub_FF962644 \n"
"    B       loc_FF960470 \n"

"loc_FF960414:\n"
"    BL      sub_FF962988 \n"
"    B       loc_FF960470 \n"

"loc_FF96041C:\n"
"    BL      sub_FF962A0C \n"
"    B       loc_FF960470 \n"

"loc_FF960424:\n"
"    BL      sub_FF962AFC \n"
"    B       loc_FF960470 \n"

"loc_FF96042C:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF962BC4 \n"
"    B       loc_FF960470 \n"

"loc_FF960438:\n"
"    BL      sub_FF962D30 \n"
"    B       loc_FF960470 \n"

"loc_FF960440:\n"
"    BL      sub_FF962DC4 \n"
"    B       loc_FF960470 \n"

"loc_FF960448:\n"
"    BL      sub_FF962E80 \n"
"    B       loc_FF960470 \n"

"loc_FF960450:\n"
"    BL      sub_FF962F6C \n"
"    B       loc_FF960470 \n"

"loc_FF960458:\n"
"    BL      sub_FF962FC0 \n"
"    B       loc_FF960470 \n"

"loc_FF960460:\n"
"    MOV     R1, #0x36C \n"
"    LDR     R0, =0xFF95FC2C /*'ShootTask.c'*/ \n"
"    ADD     R1, R1, #1 \n"
"    BL      _DebugAssert \n"

"loc_FF960470:\n"
"    LDR     R2, [SP] \n"

"loc_FF960474:\n"
"    LDR     R3, =0x6F344 \n"
"    LDR     R1, [R2, #4] \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FD68 /*_SetEventFlag*/ \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF95FCA8 \n"

"loc_FF96048C:\n"
"    LDR     R3, =0x6F348 \n"
"    MOV     R1, R4 \n"
"    LDR     R0, [R3] \n"
"    MOV     R2, #0 \n"
"    BL      sub_FF820480 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF960324 \n"
"    MOV     R1, #0x2A4 \n"
"    LDR     R0, =0xFF95FC2C /*'ShootTask.c'*/ \n"
"    ADD     R1, R1, #3 \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #4 \n"
"    LDMFD   SP!, {R4,PC} \n"
"    MOV     PC, LR \n"
);
}

/*************************************************************/
//** sub_FF95FEA0_my @ 0xFF95FEA0 - 0xFF95FF60, length=49
void __attribute__((naked,noinline)) sub_FF95FEA0_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    LDR     R4, [R0, #0xC] \n"
"    BL      sub_FF968658 \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF95FEB8 \n"
"    BL      sub_FF968664 \n"

"loc_FF95FEB8:\n"
"    LDR     R3, =0x99EC0 \n"
"    LDR     R2, [R3, #0x24] \n"
"    CMP     R2, #0 \n"
"    BNE     loc_FF95FEEC \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF968678 \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF95FEEC \n"
"    MOV     R0, #1 \n"

"loc_FF95FEDC:\n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF95E574 \n"

"loc_FF95FEEC:\n"
"    LDR     R3, =0x99EC0 \n"
"    LDR     R2, [R3, #0x24] \n"
"    CMP     R2, #0 \n"
"    BNE     loc_FF95FF3C \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF962100 \n"
"    TST     R0, #1 \n"
"    BNE     loc_FF95FEDC \n"
"    BL      sub_FF9A15A8 \n"
"    BL      sub_FF824ADC \n"
"    LDR     R2, =0x99E04 \n"
"    ADD     R3, R4, R4, LSL#1 \n"
"    STR     R0, [R2, R3, LSL#5] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF963AB0 \n"
"    BL      sub_FF962604 \n"
"    BL      sub_FF9625A0 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF963344_my \n"  // --> Patched. Old value = 0xFF963344.
"    BL      capt_seq_hook_raw_here\n"   // +
"    B       loc_FF95FF50 \n"

"loc_FF95FF3C:\n"
"    LDR     R3, =0x61E0 \n"
"    LDR     R2, [R3] \n"
"    CMP     R2, #0 \n"
"    MOVNE   R0, #0x1D \n"
"    MOVEQ   R0, #0 \n"

"loc_FF95FF50:\n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF95E574 \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF96353C \n"
);
}

/*************************************************************/
//** sub_FF963344_my @ 0xFF963344 - 0xFF963370, length=12
void __attribute__((naked,noinline)) sub_FF963344_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R3, =0x6F3BC \n"
"    LDR     R5, =0x61F0 \n"
"    SUB     SP, SP, #4 \n"
"    MVN     R1, #0 \n"
"    STR     R0, [R5] \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FF04 /*_ClearEventFlag*/ \n"
"    LDR     R3, =0x99EC0 \n"
"    LDR     R0, [R3, #0x7C] \n"
"    BL      sub_FF89EFF0 \n"
"    BL      sub_FF963298 \n"
"    BL      wait_until_remote_button_is_released\n"
"    BL      capt_seq_hook_set_nr\n"
"    LDR     PC, =0xFF963374 \n"  // Continue in firmware
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF9072E4 - 0xFF907724, length=273
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    SUB     SP, SP, #0x14 \n"
"    MOV     R7, SP \n"
"    B       loc_FF9076E0 \n"

"loc_FF9072F4:\n"
"    CMP     R2, #0x1F \n"
"    BNE     loc_FF90730C \n"
"    LDR     R0, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"
"    B       loc_FF90736C \n"

"loc_FF90730C:\n"
"    CMP     R2, #0x1A \n"
"    BNE     loc_FF907320 \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF907214 \n"
"    B       loc_FF90735C \n"

"loc_FF907320:\n"
"    CMP     R2, #0x1B \n"
"    BNE     loc_FF907334 \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF907250 \n"
"    B       loc_FF90735C \n"

"loc_FF907334:\n"
"    SUB     R3, R2, #0x1C \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF90734C \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF90728C \n"
"    B       loc_FF90735C \n"

"loc_FF90734C:\n"
"    CMP     R2, #0x1E \n"
"    BNE     loc_FF907378 \n"
"    BL      sub_FF8B1FF4 \n"
"    BL      sub_FF8B3DE4 \n"

"loc_FF90735C:\n"
"    LDR     R3, [SP] \n"
"    LDR     R0, [R3, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x4C] \n"

"loc_FF90736C:\n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF904FD4 \n"
"    B       loc_FF9076E0 \n"

"loc_FF907378:\n"
"    CMP     R2, #0xD \n"
"    MOV     R8, #1 \n"
"    BNE     loc_FF9073E8 \n"
"    LDR     R1, [R12, #0x40] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R12, R1, LSL#1 \n"
"    ADD     R6, SP, #0xC \n"
"    SUB     R1, R1, #2 \n"
"    MOV     R2, #6 \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF9064A4 \n"
"    LDR     R3, [SP] \n"
"    LDR     R1, [R3, #0x40] \n"
"    LDR     R2, [R3, #0x50] \n"
"    ADD     R0, R3, #4 \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x4C] \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF906628 \n"
"    LDR     R3, [SP] \n"
"    ADD     R0, R3, #4 \n"
"    LDR     R1, [R3, #0x40] \n"
"    LDR     R2, [R3, #0x58] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x54] \n"
"    B       loc_FF907690 \n"

"loc_FF9073E8:\n"
"    SUB     R3, R2, #0xE \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF9074A4 \n"
"    ADD     R6, SP, #0xC \n"
"    ADD     R5, SP, #4 \n"
"    MOV     R0, R12 \n"
"    MOV     R1, R6 \n"
"    MOV     R2, R5 \n"
"    BL      sub_FF9066A4 \n"
"    MOV     R4, R0 \n"
"    CMP     R4, #5 \n"
"    CMPNE   R4, #1 \n"
"    BNE     loc_FF90743C \n"
"    LDR     R12, [SP] \n"
"    MOV     R0, R5 \n"
"    LDR     R1, [R12, #0x40] \n"
"    MOV     R2, R4 \n"
"    LDR     R3, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"
"    B       loc_FF907474 \n"

"loc_FF90743C:\n"
"    CMP     R4, #6 \n"
"    CMPNE   R4, #2 \n"
"    BNE     loc_FF907484 \n"
"    LDR     R12, [SP] \n"
"    MOV     R0, R5 \n"
"    MOV     R1, R8 \n"
"    MOV     R2, R4 \n"
"    LDR     R3, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"
"    MOV     R1, R6 \n"
"    LDR     R0, [SP] \n"
"    MOV     R2, R5 \n"
"    BL      sub_FF907050 \n"

"loc_FF907474:\n"
"    MOV     R1, R4 \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF9071F4 \n"
"    B       loc_FF907690 \n"

"loc_FF907484:\n"
"    LDR     R12, [SP] \n"
"    MOV     R2, R4 \n"
"    ADD     R0, R12, #4 \n"
"    LDR     R1, [R12, #0x40] \n"
"    LDR     R3, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"
"    B       loc_FF907690 \n"

"loc_FF9074A4:\n"
"    SUB     R3, R2, #0x17 \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF9074FC \n"
"    LDR     R1, [R12, #0x40] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R12, R1, LSL#1 \n"
"    ADD     R6, SP, #0xC \n"
"    SUB     R1, R1, #2 \n"
"    MOV     R2, #6 \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF905FD8 \n"
"    LDR     R3, [SP] \n"
"    ADD     R0, R3, #4 \n"
"    LDR     R1, [R3, #0x40] \n"
"    LDR     R2, [R3, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x4C] \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF9061A8 \n"
"    B       loc_FF907690 \n"

"loc_FF9074FC:\n"
"    ADD     R6, SP, #0xC \n"
"    ADD     R1, R12, #4 \n"
"    MOV     R2, #6 \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R12, [SP] \n"
"    LDR     R3, [R12] \n"
"    MOV     R2, R12 \n"
"    CMP     R3, #0x19 \n"
"    LDRLS   PC, [PC, R3, LSL#2] \n"
"    B       loc_FF90767C \n"
"    .long   loc_FF907590 \n"
"    .long   loc_FF90759C \n"
"    .long   loc_FF9075A8 \n"
"    .long   loc_FF9075A8 \n"
"    .long   loc_FF907590 \n"
"    .long   loc_FF90759C \n"
"    .long   loc_FF9075A8 \n"
"    .long   loc_FF9075A8 \n"
"    .long   loc_FF9075CC \n"
"    .long   loc_FF9075CC \n"
"    .long   loc_FF907650 \n"
"    .long   loc_FF90765C \n"
"    .long   loc_FF90766C \n"
"    .long   loc_FF90767C \n"
"    .long   loc_FF90767C \n"
"    .long   loc_FF90767C \n"
"    .long   loc_FF9075B4 \n"
"    .long   loc_FF9075C0 \n"
"    .long   loc_FF9075DC \n"
"    .long   loc_FF9075E8 \n"
"    .long   loc_FF907610 \n"
"    .long   loc_FF907638 \n"
"    .long   loc_FF907638 \n"
"    .long   loc_FF90767C \n"
"    .long   loc_FF90767C \n"
"    .long   loc_FF907644 \n"

"loc_FF907590:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF905578 \n"
"    B       loc_FF907678 \n"

"loc_FF90759C:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9056B4 \n"
"    B       loc_FF907678 \n"

"loc_FF9075A8:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9057E4 \n"
"    B       loc_FF907678 \n"

"loc_FF9075B4:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9059B8 \n"
"    B       loc_FF907678 \n"

"loc_FF9075C0:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF905AC0 \n"
"    B       loc_FF907678 \n"

"loc_FF9075CC:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF905B84_my \n"  // --> Patched. Old value = 0xFF905B84.
"    MOV     R8, #0 \n"
"    B       loc_FF907678 \n"

"loc_FF9075DC:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF905C44 \n"
"    B       loc_FF907678 \n"

"loc_FF9075E8:\n"
"    MOV     R0, R2 \n"
"    LDRH    R2, [R2, #4] \n"
"    LDR     R3, =0x4A414 \n"
"    STRH    R2, [SP, #0xC] \n"
"    LDRH    R1, [R3, #4] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R3, [R3, #2] \n"
"    STRH    R3, [SP, #0xE] \n"
"    BL      sub_FF905DCC \n"
"    B       loc_FF907678 \n"

"loc_FF907610:\n"
"    LDR     R3, =0x4A414 \n"
"    LDRH    R1, [R3] \n"
"    STRH    R1, [SP, #0xC] \n"
"    MOV     R0, R2 \n"
"    LDRH    R2, [R2, #6] \n"
"    STRH    R2, [SP, #0xE] \n"
"    LDRH    R3, [R3, #4] \n"
"    STRH    R3, [SP, #0x10] \n"
"    BL      sub_FF905E60 \n"
"    B       loc_FF907678 \n"

"loc_FF907638:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF905EE0 \n"
"    B       loc_FF907678 \n"

"loc_FF907644:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF906238 \n"
"    B       loc_FF907678 \n"

"loc_FF907650:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF90630C \n"
"    B       loc_FF907678 \n"

"loc_FF90765C:\n"
"    MOV     R0, R2 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF9063F8 \n"
"    B       loc_FF907678 \n"

"loc_FF90766C:\n"
"    MOV     R0, R2 \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF9063F8 \n"

"loc_FF907678:\n"
"    LDR     R12, [SP] \n"

"loc_FF90767C:\n"
"    ADD     R0, R12, #4 \n"
"    LDR     R1, [R12, #0x40] \n"
"    LDR     R2, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"

"loc_FF907690:\n"
"    CMP     R8, #1 \n"
"    BNE     loc_FF9076B8 \n"
"    LDR     R1, [SP] \n"
"    LDR     R3, [R1, #0x40] \n"
"    ADD     R3, R3, R3, LSL#1 \n"
"    ADD     R1, R1, R3, LSL#1 \n"
"    MOV     R0, R6 \n"
"    SUB     R1, R1, #2 \n"
"    BL      sub_FF9053E8 \n"
"    B       loc_FF9076D8 \n"

"loc_FF9076B8:\n"
"    MOV     R0, #1 \n"
"    MOV     R1, R0 \n"
"    MOV     R2, R0 \n"
"    BL      sub_FF90538C \n"
"    MOV     R0, #1 \n"
"    MOV     R1, R0 \n"
"    MOV     R2, R0 \n"
"    BL      sub_FF9054A4 \n"

"loc_FF9076D8:\n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF904FD4 \n"

"loc_FF9076E0:\n"
"    LDR     R3, =0x4A40C \n"
"    MOV     R2, #0 \n"
"    LDR     R0, [R3] \n"
"    MOV     R1, R7 \n"
"    BL      sub_FF820480 /*_ReceiveMessageQueue*/ \n"
"    LDR     R12, [SP] \n"
"    LDR     R2, [R12] \n"
"    CMP     R2, #0x20 \n"
"    BNE     loc_FF9072F4 \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF904FD4 \n"
"    LDR     R3, =0x4A408 \n"
"    MOV     R1, #1 \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FD68 /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x14 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"
);
}

/*************************************************************/
//** sub_FF905B84_my @ 0xFF905B84 - 0xFF905C34, length=45
void __attribute__((naked,noinline)) sub_FF905B84_my() {
asm volatile (
"    STMFD   SP!, {R4,R5,LR} \n"
"    LDR     R3, =0x4A408 \n"
"    MOV     R4, R0 \n"
"    MOV     R1, #0xE \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FF04 /*_ClearEventFlag*/ \n"
"    MOV     R1, #0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    BL      sub_FF9050B0 \n"
"    MOV     R5, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF905224 \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF9052C0 \n"
"    LDR     R3, [R4] \n"
"    CMP     R3, #9 \n"
"    MOVEQ   R5, #0 \n"
"    CMP     R5, #1 \n"
"    LDR     R1, =0xFF905008 \n"
"    MOV     R2, #2 \n"
"    BNE     loc_FF905BF0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    BL      sub_FFAB609C \n"
"    LDR     R2, =0x4A434 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [R2] \n"
"    B       loc_FF905BF4 \n"

"loc_FF905BF0:\n"
"    BL      sub_FF90535C \n"

"loc_FF905BF4:\n"
"    STRH    R0, [R4, #4] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8B1C7C_my \n"  // --> Patched. Old value = 0xFF8B1C7C.
"    LDRSH   R0, [R4, #8] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF8B39A4 \n"
"    MOV     R1, #0 \n"
"    ADD     R0, R4, #8 \n"
"    BL      sub_FF8B3A64 \n"
"    CMP     R5, #1 \n"
"    MOV     R1, #2 \n"
"    MOV     R2, #0 \n"
"    LDMNEFD SP!, {R4,R5,PC} \n"
"    LDR     R3, =0x4A408 \n"
"    LDR     R0, [R3] \n"
"    LDMFD   SP!, {R4,R5,LR} \n"
"    B       sub_FF81FD58 /*_WaitForAllEventFlag*/ \n"
);
}

/*************************************************************/
//** sub_FF8B1C7C_my @ 0xFF8B1C7C - 0xFF8B1CD8, length=24
void __attribute__((naked,noinline)) sub_FF8B1C7C_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    LDR     R3, =0x5360 \n"
"    LDR     R2, [R3] \n"
"    MOV     R1, #0x114 \n"
"    MOV     R3, R0, LSL#16 \n"
"    CMP     R2, #1 \n"
"    ADD     R1, R1, #1 \n"
"    LDR     R0, =0xFF8B16F8 /*'Shutter.c'*/ \n"
"    MOV     R4, R3, ASR#16 \n"
"    BEQ     loc_FF8B1CA8 \n"
"    BL      _DebugAssert \n"

"loc_FF8B1CA8:\n"
"    MOV     R1, #0x118 \n"
"    CMN     R4, #0xC00 \n"
"    LDR     R3, =0x3D266 \n"
"    LDR     R0, =0xFF8B16F8 /*'Shutter.c'*/ \n"
"    ADD     R1, R1, #3 \n"
"    LDREQSH R4, [R3] \n"
"    LDRNE   R3, =0x3D266 \n"
"    CMN     R4, #0xC00 \n"
"    STRH    R4, [R3] \n"
"    BNE     loc_FF8B1CD4 \n"
"    BL      _DebugAssert \n"

"loc_FF8B1CD4:\n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    LDR     PC, =0xFF8B1CDC \n"  // Continue in firmware
);
}
