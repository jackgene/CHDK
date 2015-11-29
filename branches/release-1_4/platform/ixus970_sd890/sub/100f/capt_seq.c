/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define USE_STUBS_NRFLAG 1          // see stubs_entry.S

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF85DFC0 - 0xFF85E258, length=167
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R3-R9,LR} \n"
"    LDR     R6, =0x19EBC \n"
"    LDR     R5, =0x54E0 \n"
"    MOV     R9, #1 \n"
"    MOV     R7, #0 \n"

"loc_FF85DFD4:\n"
"    LDR     R0, [R5, #0xC] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, SP \n"
"    BL      sub_FF827D8C /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF85E000 \n"
"    LDR     R1, =0x48E \n"
"    LDR     R0, =0xFF85DC98 /*'SsShootTask.c'*/ \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R3-R9,PC} \n"

"loc_FF85E000:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x1B \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FF85E220 \n"
"    B       loc_FF85E084 \n"
"    B       loc_FF85E0EC \n"
"    B       loc_FF85E0F4 \n"
"    B       loc_FF85E10C \n"
"    B       loc_FF85E100 \n"
"    B       loc_FF85E114 \n"
"    B       loc_FF85E11C \n"
"    B       loc_FF85E124 \n"
"    B       loc_FF85E17C \n"
"    B       loc_FF85E188 \n"
"    B       loc_FF85E190 \n"
"    B       loc_FF85E198 \n"
"    B       loc_FF85E1A0 \n"
"    B       loc_FF85E1A8 \n"
"    B       loc_FF85E1B0 \n"
"    B       loc_FF85E1B8 \n"
"    B       loc_FF85E1C0 \n"
"    B       loc_FF85E1CC \n"
"    B       loc_FF85E1D4 \n"
"    B       loc_FF85E1DC \n"
"    B       loc_FF85E1E4 \n"
"    B       loc_FF85E1F0 \n"
"    B       loc_FF85E1F8 \n"
"    B       loc_FF85E200 \n"
"    B       loc_FF85E208 \n"
"    B       loc_FF85E210 \n"
"    B       loc_FF85E218 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E084:\n"
"    BL      sub_FF93C3B8 \n"
"    BL      shooting_expo_param_override\n"      // added
"    BL      sub_FF85C148 \n"
"    LDR     R0, [R6, #0x24] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF85E22C \n"
"    BL      sub_FF85D968 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R6, #0x24] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF85E0CC \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF861030 \n"
"    TST     R0, #1 \n"
"    STRNE   R9, [R5, #4] \n"
"    LDRNE   R0, [R4, #8] \n"
"    ORRNE   R0, R0, #0x40000000 \n"
"    STRNE   R0, [R4, #8] \n"
"    BNE     loc_FF85E22C \n"

"loc_FF85E0CC:\n"
"    BL      sub_FF95DE10 \n"
"    BL      sub_FF86D11C \n"
"    STR     R0, [R4, #0x14] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF93DAA0_my \n"  // --> Patched. Old value = 0xFF93DAA0.
"    BL      capt_seq_hook_raw_here \n"         // added
"    TST     R0, #1 \n"
"    STRNE   R9, [R5, #4] \n"
"    B       loc_FF85E22C \n"

"loc_FF85E0EC:\n"
"    BL      sub_FF85E344_my \n"  // --> Patched. Old value = 0xFF85E344.
"    B       loc_FF85E104 \n"

"loc_FF85E0F4:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF93C560 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E100:\n"
"    BL      sub_FF93C050 \n"

"loc_FF85E104:\n"
"    STR     R7, [R6, #0x24] \n"
"    B       loc_FF85E22C \n"

"loc_FF85E10C:\n"
"    BL      sub_FF93C384 \n"
"    B       loc_FF85E104 \n"

"loc_FF85E114:\n"
"    BL      sub_FF93C38C \n"
"    B       loc_FF85E22C \n"

"loc_FF85E11C:\n"
"    BL      sub_FF93C480 \n"
"    B       loc_FF85E180 \n"

"loc_FF85E124:\n"
"    LDR     R4, [R0, #0xC] \n"
"    BL      sub_FF93C394 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF93CBA8 \n"
"    TST     R0, #1 \n"
"    MOV     R8, R0 \n"
"    BNE     loc_FF85E164 \n"
"    BL      sub_FF86D11C \n"
"    STR     R0, [R4, #0x14] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF93D9B8 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF93DF0C \n"
"    MOV     R8, R0 \n"
"    LDR     R0, [R4, #0x14] \n"
"    BL      sub_FF86D328 \n"

"loc_FF85E164:\n"
"    BL      sub_FF93C384 \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #9 \n"
"    MOV     R0, R8 \n"
"    BL      sub_FF85C69C \n"
"    B       loc_FF85E22C \n"

"loc_FF85E17C:\n"
"    BL      sub_FF93C4E0 \n"

"loc_FF85E180:\n"
"    BL      sub_FF85C148 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E188:\n"
"    BL      sub_FF93C384 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E190:\n"
"    BL      sub_FF93CE14 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E198:\n"
"    BL      sub_FF93CFFC \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1A0:\n"
"    BL      sub_FF93D08C \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1A8:\n"
"    BL      sub_FF93D140 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1B0:\n"
"    BL      sub_FF93D338 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1B8:\n"
"    BL      sub_FF93D388 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1C0:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF93D40C \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1CC:\n"
"    BL      sub_FF93D55C \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1D4:\n"
"    BL      sub_FF93D5F0 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1DC:\n"
"    BL      sub_FF93D6B8 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1E4:\n"
"    BL      sub_FF93C684 \n"
"    BL      sub_FF824C38 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1F0:\n"
"    BL      sub_FF93D1FC \n"
"    B       loc_FF85E22C \n"

"loc_FF85E1F8:\n"
"    BL      sub_FF93D268 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E200:\n"
"    BL      sub_FF93F4C8 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E208:\n"
"    BL      sub_FF93F4E4 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E210:\n"
"    BL      sub_FF93F4F4 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E218:\n"
"    BL      sub_FF93F520 \n"
"    B       loc_FF85E22C \n"

"loc_FF85E220:\n"
"    LDR     R1, =0x58E \n"
"    LDR     R0, =0xFF85DC98 /*'SsShootTask.c'*/ \n"
"    BL      _DebugAssert \n"

"loc_FF85E22C:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0, #4] \n"
"    LDR     R0, [R5, #8] \n"
"    BL      sub_FF827B08 /*_SetEventFlag*/ \n"
"    LDR     R4, [SP] \n"
"    LDR     R0, [R4, #8] \n"
"    CMP     R0, #0 \n"
"    LDREQ   R1, =0x10D \n"
"    LDREQ   R0, =0xFF85DC98 /*'SsShootTask.c'*/ \n"
"    BLEQ    _DebugAssert \n"
"    STR     R7, [R4, #8] \n"
"    B       loc_FF85DFD4 \n"
);
}

/*************************************************************/
//** sub_FF93DAA0_my @ 0xFF93DAA0 - 0xFF93DB10, length=29
void __attribute__((naked,noinline)) sub_FF93DAA0_my() {
asm volatile (
"    STMFD   SP!, {R0-R10,LR} \n"
"    MOV     R6, #0 \n"
"    MOV     R4, R0 \n"
"    BL      sub_FF93E608 \n"
"    MVN     R1, #0 \n"
"    BL      sub_FF827B3C /*_ClearEventFlag*/ \n"
"    MOV     R2, #4 \n"
"    ADD     R1, SP, #8 \n"
"    MOV     R0, #0x8A \n"
"    BL      _PT_SetPropertyCaseString \n"
"    TST     R0, #1 \n"
"    MOVNE   R1, #0x218 \n"
"    LDRNE   R0, =0xFF93DC74 /*'SsCaptureSeq.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    LDR     R8, =0x19F70 \n"
"    LDR     R5, =0x19EBC \n"
"    LDRSH   R1, [R8, #0xE] \n"
"    LDR     R0, [R5, #0x7C] \n"
"    BL      sub_FF9F46B4 \n"
"    BL      _GetCCDTemperature \n"
"    LDR     R2, =0x91A8 \n"
"    ADD     R3, R4, #0x8C \n"
"    STRH    R0, [R4, #0x88] \n"
"    STRD    R2, [SP] \n"
"    MOV     R1, R0 \n"
"    LDRH    R0, [R5, #0x54] \n"
"    LDRSH   R2, [R8, #0xC] \n"
"    LDR     R3, =0x91A4 \n"
"    BL      sub_FF93EAFC \n"
"    BL      wait_until_remote_button_is_released\n" // added
"    BL      capt_seq_hook_set_nr\n"                 // added
"    LDR     PC, =0xFF93DB14 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF85E344_my @ 0xFF85E344 - 0xFF85E3B8, length=30
void __attribute__((naked,noinline)) sub_FF85E344_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R4, [R0, #0xC] \n"
"    LDR     R6, =0x19EBC \n"
"    LDR     R0, [R4, #8] \n"
"    MOV     R5, #0 \n"
"    ORR     R0, R0, #1 \n"
"    STR     R0, [R4, #8] \n"
"    LDR     R0, [R6, #0x24] \n"
"    CMP     R0, #0 \n"
"    MOVEQ   R0, #2 \n"
"    BLEQ    sub_FF8582B4 \n"
"    BL      sub_FF93C394 \n"
"    LDR     R0, [R6, #0x24] \n"
"    CMP     R0, #0 \n"
"    BNE     sub_FF85E3C4 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF93C828 \n"
"    TST     R0, #1 \n"
"    MOVNE   R2, R4 \n"
"    LDMNEFD SP!, {R4-R6,LR} \n"
"    MOVNE   R1, #1 \n"
"    BNE     sub_FF85C69C \n"
"    BL      sub_FF95DE10 \n"
"    BL      sub_FF86D11C \n"
"    STR     R0, [R4, #0x14] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF93D9B8 \n"
"    BL      sub_FF93E490 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF93DAA0_my \n"  // --> Patched. Old value = 0xFF93DAA0.
"    BL      capt_seq_hook_raw_here \n"         // added
"    LDR     PC, =0xFF85E3BC \n"  // Continue in firmware
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF8B67E8 - 0xFF8B6DDC, length=382
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    SUB     SP, SP, #0x20 \n"
"    LDR     R8, =0xBB8 \n"
"    LDR     R7, =0x6E30 \n"
"    LDR     R5, =0x3E198 \n"
"    MOV     R0, #0 \n"
"    ADD     R6, SP, #0x10 \n"
"    STR     R0, [SP, #0xC] \n"

"loc_FF8B6808:\n"
"    LDR     R0, [R7, #0x20] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #0x1C \n"
"    BL      sub_FF827D8C /*_ReceiveMessageQueue*/ \n"
"    LDR     R0, [SP, #0xC] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF8B6850 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0x13 \n"
"    CMPNE   R0, #0x14 \n"
"    CMPNE   R0, #0x15 \n"
"    BEQ     loc_FF8B696C \n"
"    CMP     R0, #0x27 \n"
"    BEQ     loc_FF8B6944 \n"
"    ADD     R1, SP, #0xC \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8B6798 \n"

"loc_FF8B6850:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x2C \n"
"    BNE     loc_FF8B6880 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8B7A54 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF827B08 /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x20 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"

"loc_FF8B6880:\n"
"    CMP     R1, #0x2B \n"
"    BNE     loc_FF8B689C \n"
"    LDR     R2, [R0, #0x88]! \n"
"    LDR     R1, [R0, #4] \n"
"    MOV     R0, R1 \n"
"    BLX     R2 \n"
"    B       loc_FF8B6DD4 \n"

"loc_FF8B689C:\n"
"    CMP     R1, #0x25 \n"
"    BNE     loc_FF8B68EC \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF827B3C /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFF8B3220 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF92F7C8 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF827A40 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0xD1B \n"
"    BNE     loc_FF8B6930 \n"

"loc_FF8B68D8:\n"
"    LDR     R1, [SP, #0x1C] \n"
"    LDR     R0, [R1, #0x8C] \n"
"    LDR     R1, [R1, #0x88] \n"
"    BLX     R1 \n"
"    B       loc_FF8B6DD4 \n"

"loc_FF8B68EC:\n"
"    CMP     R1, #0x26 \n"
"    BNE     loc_FF8B693C \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FF8B6798 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF827B3C /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFF8B3230 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF92FA50 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF827A40 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF8B68D8 \n"
"    LDR     R1, =0xD25 \n"

"loc_FF8B6930:\n"
"    LDR     R0, =0xFF8B3920 /*'ExpDrv.c'*/ \n"
"    BL      _DebugAssert \n"
"    B       loc_FF8B68D8 \n"

"loc_FF8B693C:\n"
"    CMP     R1, #0x27 \n"
"    BNE     loc_FF8B6954 \n"

"loc_FF8B6944:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FF8B6798 \n"
"    B       loc_FF8B68D8 \n"

"loc_FF8B6954:\n"
"    CMP     R1, #0x2A \n"
"    BNE     loc_FF8B696C \n"
"    BL      sub_FF895BA0 \n"
"    BL      sub_FF89696C \n"
"    BL      sub_FF8963F0 \n"
"    B       loc_FF8B68D8 \n"

"loc_FF8B696C:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R4, #1 \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x11 \n"
"    CMPNE   R1, #0x12 \n"
"    BNE     loc_FF8B69DC \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2-R4} \n"
"    STMIA   R6, {R2-R4} \n"
"    BL      sub_FF8B52AC \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8B7E28 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x90] \n"
"    LDR     R2, [R0, #0x94] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    B       loc_FF8B6D14 \n"

"loc_FF8B69DC:\n"
"    CMP     R1, #0x13 \n"
"    CMPNE   R1, #0x14 \n"
"    CMPNE   R1, #0x15 \n"
"    BNE     loc_FF8B6A90 \n"
"    ADD     R3, SP, #0xC \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FF8B54F4 \n"
"    CMP     R0, #1 \n"
"    MOV     R4, R0 \n"
"    CMPNE   R4, #5 \n"
"    BNE     loc_FF8B6A2C \n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, R4 \n"
"    LDR     R1, [R0, #0x7C]! \n"
"    LDR     R12, [R0, #0xC]! \n"
"    LDR     R3, [R0, #4] \n"
"    MOV     R0, SP \n"
"    BLX     R12 \n"
"    B       loc_FF8B6A64 \n"

"loc_FF8B6A2C:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    CMP     R4, #2 \n"
"    LDR     R3, [R0, #0x8C] \n"
"    CMPNE   R4, #6 \n"
"    BNE     loc_FF8B6A78 \n"
"    LDR     R12, [R0, #0x88] \n"
"    MOV     R0, SP \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    BLX     R12 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FF8B64AC \n"

"loc_FF8B6A64:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R2, [SP, #0xC] \n"
"    MOV     R1, R4 \n"
"    BL      sub_FF8B6738 \n"
"    B       loc_FF8B6D14 \n"

"loc_FF8B6A78:\n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R12, [R0, #0x88] \n"
"    ADD     R0, R0, #4 \n"
"    MOV     R2, R4 \n"
"    BLX     R12 \n"
"    B       loc_FF8B6D14 \n"

"loc_FF8B6A90:\n"
"    CMP     R1, #0x21 \n"
"    CMPNE   R1, #0x22 \n"
"    BNE     loc_FF8B6ADC \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2-R4} \n"
"    STMIA   R6, {R2-R4} \n"
"    BL      sub_FF8B4838 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8B4B28 \n"
"    B       loc_FF8B6D14 \n"

"loc_FF8B6ADC:\n"
"    ADD     R1, R0, #4 \n"
"    LDMIA   R1, {R2,R3,R12} \n"
"    STMIA   R6, {R2,R3,R12} \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x24 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FF8B6CF4 \n"
"    B       loc_FF8B6B8C \n"
"    B       loc_FF8B6B8C \n"
"    B       loc_FF8B6BDC \n"
"    B       loc_FF8B6BE4 \n"
"    B       loc_FF8B6BE4 \n"
"    B       loc_FF8B6BE4 \n"
"    B       loc_FF8B6B8C \n"
"    B       loc_FF8B6BDC \n"
"    B       loc_FF8B6BE4 \n"
"    B       loc_FF8B6BE4 \n"
"    B       loc_FF8B6BFC \n"
"    B       loc_FF8B6BFC \n"
"    B       loc_FF8B6CE8 \n"
"    B       loc_FF8B6CF0 \n"
"    B       loc_FF8B6CF0 \n"
"    B       loc_FF8B6CF0 \n"
"    B       loc_FF8B6CF0 \n"
"    B       loc_FF8B6CF4 \n"
"    B       loc_FF8B6CF4 \n"
"    B       loc_FF8B6CF4 \n"
"    B       loc_FF8B6CF4 \n"
"    B       loc_FF8B6CF4 \n"
"    B       loc_FF8B6BEC \n"
"    B       loc_FF8B6BF4 \n"
"    B       loc_FF8B6BF4 \n"
"    B       loc_FF8B6C08 \n"
"    B       loc_FF8B6C08 \n"
"    B       loc_FF8B6C10 \n"
"    B       loc_FF8B6C40 \n"
"    B       loc_FF8B6C70 \n"
"    B       loc_FF8B6CA0 \n"
"    B       loc_FF8B6CD0 \n"
"    B       loc_FF8B6CD0 \n"
"    B       loc_FF8B6CF4 \n"
"    B       loc_FF8B6CF4 \n"
"    B       loc_FF8B6CD8 \n"
"    B       loc_FF8B6CE0 \n"

"loc_FF8B6B8C:\n"
"    BL      sub_FF8B3708 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6BDC:\n"
"    BL      sub_FF8B3998 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6BE4:\n"
"    BL      sub_FF8B3B9C \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6BEC:\n"
"    BL      sub_FF8B3E04 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6BF4:\n"
"    BL      sub_FF8B3FF8 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6BFC:\n"
"    BL      sub_FF8B4260_my \n"  // --> Patched. Old value = 0xFF8B4260.
"    MOV     R4, #0 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6C08:\n"
"    BL      sub_FF8B439C \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6C10:\n"
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
"    BL      sub_FF8B7AC8 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6C40:\n"
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
"    BL      sub_FF8B7C44 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6C70:\n"
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
"    BL      sub_FF8B7CF0 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6CA0:\n"
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
"    BL      sub_FF8B7D90 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6CD0:\n"
"    BL      sub_FF8B4610 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6CD8:\n"
"    BL      sub_FF8B4C2C \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6CE0:\n"
"    BL      sub_FF8B4E64 \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6CE8:\n"
"    BL      sub_FF8B4FDC \n"
"    B       loc_FF8B6CF4 \n"

"loc_FF8B6CF0:\n"
"    BL      sub_FF8B5174 \n"

"loc_FF8B6CF4:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    CMP     R4, #1 \n"
"    BNE     loc_FF8B6D5C \n"

"loc_FF8B6D14:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, #0xC \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R0, R0, R1, LSL#2 \n"
"    SUB     R4, R0, #8 \n"
"    LDR     R0, =0x3E198 \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFAAD758 \n"
"    LDR     R0, =0x3E1A4 \n"
"    MOV     R2, #0xC \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFAAD758 \n"
"    LDR     R0, =0x3E1B0 \n"
"    MOV     R2, #0xC \n"
"    MOV     R1, R4 \n"
"    BL      sub_FFAAD758 \n"
"    B       loc_FF8B6DD4 \n"

"loc_FF8B6D5C:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0xB \n"
"    BNE     loc_FF8B6DA4 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8B3510 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    B       loc_FF8B6DD0 \n"

"loc_FF8B6DA4:\n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #1 \n"
"    STR     R3, [SP] \n"
"    BL      sub_FF8B3510 \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #1 \n"
"    STR     R3, [SP] \n"

"loc_FF8B6DD0:\n"
"    BL      sub_FF8B3650 \n"

"loc_FF8B6DD4:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8B7A54 \n"
"    B       loc_FF8B6808 \n"
);
}

/*************************************************************/
//** sub_FF8B4260_my @ 0xFF8B4260 - 0xFF8B431C, length=48
void __attribute__((naked,noinline)) sub_FF8B4260_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    LDR     R7, =0x6E30 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x3E \n"
"    BL      sub_FF827B3C /*_ClearEventFlag*/ \n"
"    LDRSH   R0, [R4, #4] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF8B32A4 \n"
"    MOV     R6, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8B33B0 \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF8B3408 \n"
"    LDRSH   R0, [R4, #0xA] \n"
"    BL      sub_FF8B3460 \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    BL      sub_FF8B34B8 \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R4] \n"
"    LDR     R8, =0x3E1B0 \n"
"    CMP     R0, #0xB \n"
"    MOVEQ   R6, #0 \n"
"    MOVEQ   R5, #0 \n"
"    BEQ     loc_FF8B42F0 \n"
"    CMP     R6, #1 \n"
"    BNE     loc_FF8B42F0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    LDR     R1, =0xFF8B3210 \n"
"    MOV     R2, #2 \n"
"    BL      sub_FF92F91C \n"
"    STRH    R0, [R4, #4] \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R7, #0x28] \n"
"    B       loc_FF8B42F8 \n"

"loc_FF8B42F0:\n"
"    LDRH    R0, [R8] \n"
"    STRH    R0, [R4, #4] \n"

"loc_FF8B42F8:\n"
"    CMP     R5, #1 \n"
"    LDRNEH  R0, [R8, #8] \n"
"    BNE     loc_FF8B4314 \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    MOV     R2, #0x20 \n"
"    LDR     R1, =0xFF8B3294 \n"
"    BL      sub_FF8B7A84 \n"

"loc_FF8B4314:\n"
"    STRH    R0, [R4, #0xC] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8958EC_my \n"  // --> Patched. Old value = 0xFF8958EC.
"    LDR     PC, =0xFF8B4320 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF8958EC_my @ 0xFF8958EC - 0xFF895954, length=27
void __attribute__((naked,noinline)) sub_FF8958EC_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0x68EC \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #4] \n"
"    CMP     R0, #1 \n"
"    LDRNE   R1, =0x16D \n"
"    LDRNE   R0, =0xFF895684 /*'Shutter.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    CMN     R4, #0xC00 \n"
"    LDREQSH R4, [R5, #2] \n"
"    CMN     R4, #0xC00 \n"
"    LDREQ   R1, =0x173 \n"
"    LDREQ   R0, =0xFF895684 /*'Shutter.c'*/ \n"
"    STRH    R4, [R5, #2] \n"
"    BLEQ    _DebugAssert \n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    MOV     R4, R0 \n"
//"  BL      _sub_FF8C5350 \n"  // --> Nullsub call removed.
"    MOV     R0, R4 \n"
"    BL      sub_FF8C9840 \n"
"    TST     R0, #1 \n"
"    LDMNEFD SP!, {R4-R6,LR} \n"
"    MOVNE   R1, #0x178 \n"
"    LDRNE   R0, =0xFF895684 /*'Shutter.c'*/ \n"
"    BNE     _DebugAssert \n"
"    LDMFD   SP!, {R4-R6,PC} \n"
);
}
