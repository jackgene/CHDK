/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define USE_STUBS_NRFLAG 1  // see stubs_entry.S
#define NR_AUTO (0)         // have to explictly reset value back to 0 to enable auto

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF8868C0 - 0xFF886B88, length=179
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R3-R7,LR} \n"
"    LDR     R7, =0x3648 \n"
"    LDR     R4, =0x3BC24 \n"
"    MOV     R6, #0 \n"

"loc_FF8868D0:\n"
"    LDR     R0, [R7, #4] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, SP \n"
"    BL      sub_FF83A4C8 \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF8868FC \n"
"    LDR     R1, =0x43F \n"
"    LDR     R0, =0xFF8863B0 \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R3-R7,PC} \n"

"loc_FF8868FC:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x22 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FF886B50 \n"
"    B       loc_FF88699C \n"
"    B       loc_FF8869B4 \n"
"    B       loc_FF8869CC \n"
"    B       loc_FF8869EC \n"
"    B       loc_FF8869E4 \n"
"    B       loc_FF8869F8 \n"
"    B       loc_FF886A00 \n"
"    B       loc_FF886A08 \n"
"    B       loc_FF886A14 \n"
"    B       loc_FF886A3C \n"
"    B       loc_FF886A20 \n"
"    B       loc_FF886A2C \n"
"    B       loc_FF886A34 \n"
"    B       loc_FF886A44 \n"
"    B       loc_FF886A4C \n"
"    B       loc_FF886A54 \n"
"    B       loc_FF886A5C \n"
"    B       loc_FF886A64 \n"
"    B       loc_FF886A6C \n"
"    B       loc_FF886A74 \n"
"    B       loc_FF886A7C \n"
"    B       loc_FF886A84 \n"
"    B       loc_FF886A8C \n"
"    B       loc_FF886A98 \n"
"    B       loc_FF886AA0 \n"
"    B       loc_FF886AAC \n"
"    B       loc_FF886AB4 \n"
"    B       loc_FF886AE4 \n"
"    B       loc_FF886AEC \n"
"    B       loc_FF886AF4 \n"
"    B       loc_FF886AFC \n"
"    B       loc_FF886B04 \n"
"    B       loc_FF886B0C \n"
"    B       loc_FF886B18 \n"
"    B       loc_FF886B5C \n"

"loc_FF88699C:\n"
"    BL      shooting_expo_iso_override\n"      // added
"    BL      sub_FF887084 \n"
"    BL      shooting_expo_param_override\n"    // added
"    BL      sub_FF8840BC \n"
"    MOV     R0, #0\n"                          // added
"    STR     R0, [R4,#0x24]\n"                  // added, fixes overrides behavior at short shutter press (from S95)
//"    LDR     R0, [R4, #0x24] \n"  // above patch makes these three lines redundant
//"    CMP     R0, #0 \n"
//"    BLNE    _sub_FF992D20 \n"
"    B       loc_FF886B5C \n"

"loc_FF8869B4:\n"
"    LDRH    R1, [R4] \n"
"    SUB     R12, R1, #0x8200 \n"
"    SUBS    R12, R12, #0x2E \n"
"    LDRNE   R0, [R0, #0xC] \n"
"    BLNE    sub_FF992B4C_my \n"  // --> Patched. Old value = 0xFF992B4C.
"    B       loc_FF886B5C \n"

"loc_FF8869CC:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF88739C \n"
"    LDR     R0, [R4, #0xC] \n"
"    CMP     R0, #0 \n"
"    BLNE    sub_FF888024 \n"
"    B       loc_FF886B5C \n"

"loc_FF8869E4:\n"
"    BL      sub_FF886D20 \n"
"    B       loc_FF8869F0 \n"

"loc_FF8869EC:\n"
"    BL      sub_FF887064 \n"

"loc_FF8869F0:\n"
"    STR     R6, [R4, #0x24] \n"
"    B       loc_FF886B5C \n"

"loc_FF8869F8:\n"
"    BL      sub_FF88706C \n"
"    B       loc_FF886B5C \n"

"loc_FF886A00:\n"
"    BL      sub_FF887270 \n"
"    B       loc_FF886A18 \n"

"loc_FF886A08:\n"
"    LDR     R0, [R0, #0xC] \n"
"    BL      sub_FF992D88 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A14:\n"
"    BL      sub_FF88730C \n"

"loc_FF886A18:\n"
"    BL      sub_FF8840BC \n"
"    B       loc_FF886B5C \n"

"loc_FF886A20:\n"
"    LDR     R0, [R4, #0x54] \n"
"    BL      sub_FF887A5C \n"
"    B       loc_FF886B5C \n"

"loc_FF886A2C:\n"
"    BL      sub_FF887DDC \n"
"    B       loc_FF886B5C \n"

"loc_FF886A34:\n"
"    BL      sub_FF887E40 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A3C:\n"
"    BL      sub_FF887064 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A44:\n"
"    BL      sub_FF991B28 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A4C:\n"
"    BL      sub_FF991D78 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A54:\n"
"    BL      sub_FF991E44 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A5C:\n"
"    BL      sub_FF991F58 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A64:\n"
"    BL      sub_FF992028 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A6C:\n"
"    MOV     R0, #0 \n"
"    B       loc_FF886A90 \n"

"loc_FF886A74:\n"
"    BL      sub_FF99263C \n"
"    B       loc_FF886B5C \n"

"loc_FF886A7C:\n"
"    BL      sub_FF9926D4 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A84:\n"
"    BL      sub_FF9927B4 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A8C:\n"
"    MOV     R0, #1 \n"

"loc_FF886A90:\n"
"    BL      sub_FF9924E0 \n"
"    B       loc_FF886B5C \n"

"loc_FF886A98:\n"
"    BL      sub_FF8875D8 \n"
"    B       loc_FF886B5C \n"

"loc_FF886AA0:\n"
"    BL      sub_FF887680 \n"
"    BL      sub_FF9939E8 \n"
"    B       loc_FF886B5C \n"

"loc_FF886AAC:\n"
"    BL      sub_FF992308 \n"
"    B       loc_FF886B5C \n"

"loc_FF886AB4:\n"
"    MOV     R2, #2 \n"
"    ADD     R1, R4, #0x68 \n"
"    MOV     R0, #0x6F \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x531 \n"
"    LDRNE   R0, =0xFF8863B0 \n"
"    BLNE    _DebugAssert \n"
"    LDRH    R0, [R4, #0x68] \n"
"    CMP     R0, #1 \n"
"    BLEQ    sub_FF9922FC \n"
"    B       loc_FF886B5C \n"

"loc_FF886AE4:\n"
"    BL      sub_FF992434 \n"
"    B       loc_FF886B5C \n"

"loc_FF886AEC:\n"
"    BL      sub_FF993AB8 \n"
"    B       loc_FF886B5C \n"

"loc_FF886AF4:\n"
"    BL      sub_FF837D44 \n"
"    B       loc_FF886B5C \n"

"loc_FF886AFC:\n"
"    BL      sub_FF88A2D8 \n"
"    B       loc_FF886B5C \n"

"loc_FF886B04:\n"
"    BL      sub_FF88A360 \n"
"    B       loc_FF886B5C \n"

"loc_FF886B0C:\n"
"    BL      sub_FF88A3BC \n"
"    BL      sub_FF88A37C \n"
"    B       loc_FF886B5C \n"

"loc_FF886B18:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF993524 \n"
"    MOV     R0, #1 \n"
"    BL      sub_FF993654 \n"
"    LDRH    R0, [R4, #0xA4] \n"
"    CMP     R0, #4 \n"
"    LDRNEH  R0, [R4] \n"
"    SUBNE   R12, R0, #0x4200 \n"
"    SUBNES  R12, R12, #0x2A \n"
"    BNE     loc_FF886B5C \n"
"    BL      sub_FF88A360 \n"
"    BL      sub_FF88A8D4 \n"
"    BL      sub_FF88A7DC \n"
"    B       loc_FF886B5C \n"

"loc_FF886B50:\n"
"    LDR     R1, =0x591 \n"
"    LDR     R0, =0xFF8863B0 \n"
"    BL      _DebugAssert \n"

"loc_FF886B5C:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0, #4] \n"
"    LDR     R0, [R7] \n"
"    BL      sub_FF891798 \n"
"    LDR     R5, [SP] \n"
"    LDR     R0, [R5, #8] \n"
"    CMP     R0, #0 \n"
"    LDREQ   R1, =0x115 \n"
"    LDREQ   R0, =0xFF8863B0 \n"
"    BLEQ    _DebugAssert \n"
"    STR     R6, [R5, #8] \n"
"    B       loc_FF8868D0 \n"
);
}

/*************************************************************/
//** sub_FF992B4C_my @ 0xFF992B4C - 0xFF992D1C, length=117
void __attribute__((naked,noinline)) sub_FF992B4C_my() {
asm volatile (
"    STMFD   SP!, {R3-R7,LR} \n"
"    LDR     R5, =0x3BC24 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #0x24] \n"
"    MOV     R6, #0 \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF992B88 \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF88C648 \n"
"    TST     R0, #1 \n"
"    MOVNE   R2, R4 \n"
"    LDMNEFD SP!, {R3-R7,LR} \n"
"    MOVNE   R1, #1 \n"
"    MOVNE   R0, #1 \n"
"    BNE     sub_FF884798 \n"

"loc_FF992B88:\n"
"    LDR     R0, [R4, #8] \n"
"    LDR     R7, =0x420C \n"
"    ORR     R0, R0, #1 \n"
"    STR     R0, [R4, #8] \n"
"    LDRH    R0, [R5] \n"
"    CMP     R0, R7 \n"
"    BEQ     loc_FF992C18 \n"
"    LDRH    R0, [R5, #0xA2] \n"
"    CMP     R0, #3 \n"
"    BEQ     loc_FF992C60 \n"
"    LDR     R0, [R4, #0xC] \n"
"    CMP     R0, #1 \n"
"    BLS     loc_FF992C24 \n"
"    LDRH    R0, [R5, #0xA0] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF992C60 \n"
"    LDRH    R0, [R5, #0x9C] \n"
"    CMP     R0, #2 \n"
"    BNE     loc_FF992C30 \n"
"    BL      sub_FF887740 \n"
"    LDRH    R0, [R5] \n"
"    CMP     R0, R7 \n"
"    BEQ     loc_FF992C18 \n"
"    LDRH    R0, [R5, #0xA2] \n"
"    CMP     R0, #3 \n"
"    BEQ     loc_FF992C60 \n"
"    LDR     R0, [R4, #0xC] \n"
"    CMP     R0, #1 \n"
"    BLS     loc_FF992C24 \n"
"    LDRH    R0, [R5, #0xA0] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF992C60 \n"
"    LDRH    R0, [R5, #0x9C] \n"
"    CMP     R0, #2 \n"
"    BEQ     loc_FF992C5C \n"
"    B       loc_FF992C30 \n"

"loc_FF992C18:\n"
"    LDRH    R0, [R5, #0xA2] \n"
"    CMP     R0, #3 \n"
"    BEQ     loc_FF992C60 \n"

"loc_FF992C24:\n"
"    LDRH    R0, [R5, #0xA0] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF992C60 \n"

"loc_FF992C30:\n"
"    LDRH    R0, [R5, #0x9C] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF992C60 \n"
"    LDRH    R0, [R5] \n"
"    CMP     R0, R7 \n"
"    LDRNE   R0, [R4, #0xC] \n"
"    CMPNE   R0, #1 \n"
"    BLS     loc_FF992C60 \n"
"    LDR     R0, [R4, #0x10] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF992C60 \n"

"loc_FF992C5C:\n"
"    BL      sub_FF993AF0 \n"

"loc_FF992C60:\n"
"    BL      sub_FF993AB8 \n"
"    BL      sub_FF887074 \n"
"    LDR     R0, [R5, #0x24] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF992CF8 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFAEC130 \n"
"    TST     R0, #1 \n"
"    BNE     loc_FF992D1C \n"
"    MOV     R0, R4 \n"
"    BL      sub_FFAEC544 \n"
"    BL      sub_FF9932F8 \n"
"    MOV     R6, #1 \n"
"    MOV     R0, #2 \n"
"    BL      sub_FF87FD8C \n"
"    BL      wait_until_remote_button_is_released\n"    // added
"    BL      capt_seq_hook_set_nr\n"                    // added
"    LDRH    R0, [R5] \n"
"    SUB     R12, R0, #0x8200 \n"
"    SUBS    R12, R12, #0x2D \n"
"    BNE     loc_FF992CE8 \n"
"    MOV     R2, #2 \n"
"    ADD     R0, R2, #0x15C \n"
"    MOV     R1, SP \n"
"    STR     R6, [SP] \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    MOVNE   R1, #0xC3 \n"
"    LDRNE   R0, =0xFF992DFC \n"
"    BLNE    _DebugAssert \n"
"    LDRH    R0, [SP] \n"
"    CMP     R0, #1 \n"
"    STRHI   R6, [R4, #0xD4] \n"
"    BHI     loc_FF992D08 \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R4, #0xD4] \n"

"loc_FF992CE8:\n"
"    MOV     R0, R4 \n"
"    BL      sub_FFAECA3C_my \n"  // --> Patched. Old value = 0xFFAECA3C.
"    MOV     R6, R0 \n"
"    B       loc_FF992D0C \n"

"loc_FF992CF8:\n"
"    LDR     R0, =0x85AC \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF992D0C \n"

"loc_FF992D08:\n"
"    MOV     R6, #0x1D \n"

"loc_FF992D0C:\n"
"    MOV     R1, R6 \n"
"    MOV     R0, R4 \n"
"    LDMFD   SP!, {R3-R7,LR} \n"
"    B       sub_FFAEC254 \n"

"loc_FF992D1C:\n"
"    LDMFD   SP!, {R3-R7,PC} \n"
);
}

/*************************************************************/
//** sub_FFAECA3C_my @ 0xFFAECA3C - 0xFFAECBA4, length=91
void __attribute__((naked,noinline)) sub_FFAECA3C_my() {
asm volatile (
"    STMFD   SP!, {R2-R6,LR} \n"
"    MOV     R5, R0 \n"
"    BL      sub_FF993818 \n"
"    MVN     R1, #0 \n"
"    BL      sub_FF8917CC \n"
"    LDR     R0, =0xFFAEC2D0 \n"
"    MOV     R1, R5 \n"
"    BL      sub_FF8C6444 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFAEC1DC \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFAEC62C \n"
"    MOV     R4, R0 \n"
"    LDR     R1, =0xE164 \n"
"    MOV     R0, #0x8A \n"
"    MOV     R2, #4 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x1F6 \n"
"    LDRNE   R0, =0xFFAECBC4 \n"
"    BLNE    _DebugAssert \n"
"    BL      sub_FF889A00 \n"
"    MOV     R0, R4 \n"
"    CMP     R0, #1 \n"
"    MOV     R4, #0 \n"
"    BEQ     loc_FFAECADC \n"
"    CMP     R0, #2 \n"
"    BEQ     loc_FFAECAEC \n"
"    CMP     R0, #3 \n"
"    BEQ     loc_FFAECB10 \n"
"    CMP     R0, #7 \n"
"    BNE     loc_FFAECB2C \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8C6474 \n"
"    MOV     R0, #4 \n"
"    STR     R0, [SP, #4] \n"

"loc_FFAECACC:\n"
"    ADD     R1, SP, #4 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFAEC8A0 \n"
"    B       loc_FFAECB08 \n"

"loc_FFAECADC:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF8C6474 \n"
"    STR     R4, [SP, #4] \n"
"    B       loc_FFAECACC \n"

"loc_FFAECAEC:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF8C6474 \n"
"    MOV     R0, #1 \n"
"    STR     R0, [SP, #4] \n"
"    MOV     R0, R5 \n"
"    ADD     R1, SP, #4 \n"
"    BL      sub_FFAECC98 \n"

"loc_FFAECB08:\n"
"    BL      capt_seq_hook_raw_here\n"      // added (16/2/2011, moved here so that long exposures work)
"    MOV     R6, R0 \n"
"    B       loc_FFAECB38 \n"

"loc_FFAECB10:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF8C6474 \n"
"    ADD     R1, SP, #4 \n"
"    MOV     R0, R5 \n"
"    STR     R4, [SP, #4] \n"
"    BL      sub_FFAEC91C \n"
"    B       loc_FFAECB08 \n"

"loc_FFAECB2C:\n"
"    MOV     R1, #0x22C \n"
"    LDR     R0, =0xFFAECBC4 \n"
"    BL      _DebugAssert \n"

"loc_FFAECB38:\n"
"    TST     R6, #1 \n"
"    MOVNE   R0, R6 \n"
"    BNE     loc_FFAECBA4 \n"
"    MOV     R1, #0 \n"
"    LDR     R0, =0xFFAEC810 \n"
"    BL      sub_FF8C6444 \n"
"    LDR     R0, =0x3BC24 \n"
"    LDRH    R0, [R0] \n"
"    SUB     R12, R0, #0x4000 \n"
"    SUBS    R12, R12, #0x20C \n"
"    BLEQ    sub_FF8AF950 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FFAEC6D4 \n"
"    BL      sub_FF993818 \n"
"    MOV     R3, #0x244 \n"
"    STR     R3, [SP] \n"
"    LDR     R2, =0x3A98 \n"
"    LDR     R3, =0xFFAECBC4 \n"
"    MOV     R1, #4 \n"
"    BL      sub_FF88C9C4 \n"
"    CMP     R0, #0 \n"
"    MOVNE   R1, #0x244 \n"
"    LDRNE   R0, =0xFFAECBC4 \n"
"    BLNE    _DebugAssert \n"
"    LDRH    R0, [SP, #4] \n"
"    STRH    R0, [R5, #0x14] \n"
"    MOV     R0, #0 \n"

"loc_FFAECBA4:\n"
"    LDMFD   SP!, {R2-R6,PC} \n"
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF8D0818 - 0xFF8D0EAC, length=422
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    SUB     SP, SP, #0x20 \n"
"    LDR     R8, =0xBB8 \n"
"    LDR     R7, =0x5094 \n"
"    LDR     R5, =0x57870 \n"
"    MOV     R0, #0 \n"
"    ADD     R6, SP, #0x10 \n"
"    STR     R0, [SP, #0xC] \n"

"loc_FF8D0838:\n"
"    LDR     R0, [R7, #0x20] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #0x1C \n"
"    BL      sub_FF83A4C8 \n"
"    LDR     R0, [SP, #0xC] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF8D0884 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0x14 \n"
"    CMPNE   R0, #0x15 \n"
"    CMPNE   R0, #0x16 \n"
"    CMPNE   R0, #0x17 \n"
"    BEQ     loc_FF8D09E8 \n"
"    CMP     R0, #0x29 \n"
"    BEQ     loc_FF8D0970 \n"
"    ADD     R1, SP, #0xC \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8D07C8 \n"

"loc_FF8D0884:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x2F \n"
"    BNE     loc_FF8D08B4 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8D1BBC \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF891798 \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x20 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"

"loc_FF8D08B4:\n"
"    CMP     R1, #0x2E \n"
"    BNE     loc_FF8D08D0 \n"
"    LDR     R2, [R0, #0x8C]! \n"
"    LDR     R1, [R0, #4] \n"
"    MOV     R0, R1 \n"
"    BLX     R2 \n"
"    B       loc_FF8D0EA4 \n"

"loc_FF8D08D0:\n"
"    CMP     R1, #0x27 \n"
"    BNE     loc_FF8D0920 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF8917CC \n"
"    LDR     R0, =0xFF8CC678 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF97F6B0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF8916D8 \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x1089 \n"
"    BNE     loc_FF8D09DC \n"

"loc_FF8D090C:\n"
"    LDR     R1, [SP, #0x1C] \n"
"    LDR     R0, [R1, #0x90] \n"
"    LDR     R1, [R1, #0x8C] \n"
"    BLX     R1 \n"
"    B       loc_FF8D0EA4 \n"

"loc_FF8D0920:\n"
"    CMP     R1, #0x28 \n"
"    BNE     loc_FF8D0968 \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FF8D07C8 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF8917CC \n"
"    LDR     R0, =0xFF8CC688 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF9800E0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF8916D8 \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF8D090C \n"
"    LDR     R1, =0x1093 \n"
"    B       loc_FF8D09DC \n"

"loc_FF8D0968:\n"
"    CMP     R1, #0x29 \n"
"    BNE     loc_FF8D0980 \n"

"loc_FF8D0970:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FF8D07C8 \n"
"    B       loc_FF8D090C \n"

"loc_FF8D0980:\n"
"    CMP     R1, #0x2C \n"
"    BNE     loc_FF8D0998 \n"
"    BL      sub_FF8BEBCC \n"
"    BL      sub_FF8BF7D8 \n"
"    BL      sub_FF8BF344 \n"
"    B       loc_FF8D090C \n"

"loc_FF8D0998:\n"
"    CMP     R1, #0x2D \n"
"    BNE     loc_FF8D09E8 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #4 \n"
"    BL      sub_FF8917CC \n"
"    LDR     R1, =0xFF8CC6A8 \n"
"    LDR     R0, =0xFFFFF400 \n"
"    MOV     R2, #4 \n"
"    BL      sub_FF8BE648 \n"
"    BL      sub_FF8BE8D0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #4 \n"
"    BL      sub_FF8915F4 \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF8D090C \n"
"    LDR     R1, =0x10BB \n"

"loc_FF8D09DC:\n"
"    LDR     R0, =0xFF8CCD30 \n"
"    BL      _DebugAssert \n"
"    B       loc_FF8D090C \n"

"loc_FF8D09E8:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R4, #1 \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x12 \n"
"    CMPNE   R1, #0x13 \n"
"    BNE     loc_FF8D0A58 \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2-R4} \n"
"    STMIA   R6, {R2-R4} \n"
"    BL      sub_FF8CEF50 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x8C] \n"
"    LDR     R2, [R0, #0x90] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8D1FC8 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x94] \n"
"    LDR     R2, [R0, #0x98] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    B       loc_FF8D0DE0 \n"

"loc_FF8D0A58:\n"
"    CMP     R1, #0x14 \n"
"    CMPNE   R1, #0x15 \n"
"    CMPNE   R1, #0x16 \n"
"    CMPNE   R1, #0x17 \n"
"    BNE     loc_FF8D0B10 \n"
"    ADD     R3, SP, #0xC \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FF8CF1BC \n"
"    CMP     R0, #1 \n"
"    MOV     R4, R0 \n"
"    CMPNE   R4, #5 \n"
"    BNE     loc_FF8D0AAC \n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, R4 \n"
"    LDR     R1, [R0, #0x7C]! \n"
"    LDR     R12, [R0, #0x10]! \n"
"    LDR     R3, [R0, #4] \n"
"    MOV     R0, SP \n"
"    BLX     R12 \n"
"    B       loc_FF8D0AE4 \n"

"loc_FF8D0AAC:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    CMP     R4, #2 \n"
"    LDR     R3, [R0, #0x90] \n"
"    CMPNE   R4, #6 \n"
"    BNE     loc_FF8D0AF8 \n"
"    LDR     R12, [R0, #0x8C] \n"
"    MOV     R0, SP \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    BLX     R12 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FF8D0514 \n"

"loc_FF8D0AE4:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R2, [SP, #0xC] \n"
"    MOV     R1, R4 \n"
"    BL      sub_FF8D0768 \n"
"    B       loc_FF8D0DE0 \n"

"loc_FF8D0AF8:\n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R12, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    MOV     R2, R4 \n"
"    BLX     R12 \n"
"    B       loc_FF8D0DE0 \n"

"loc_FF8D0B10:\n"
"    CMP     R1, #0x23 \n"
"    CMPNE   R1, #0x24 \n"
"    BNE     loc_FF8D0B5C \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2-R4} \n"
"    STMIA   R6, {R2-R4} \n"
"    BL      sub_FF8CDFD4 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x8C] \n"
"    LDR     R2, [R0, #0x90] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8CE420 \n"
"    B       loc_FF8D0DE0 \n"

"loc_FF8D0B5C:\n"
"    ADD     R1, R0, #4 \n"
"    LDMIA   R1, {R2,R3,R12} \n"
"    STMIA   R6, {R2,R3,R12} \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x26 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0C14 \n"
"    B       loc_FF8D0C14 \n"
"    B       loc_FF8D0C1C \n"
"    B       loc_FF8D0C24 \n"
"    B       loc_FF8D0C24 \n"
"    B       loc_FF8D0C24 \n"
"    B       loc_FF8D0C14 \n"
"    B       loc_FF8D0C1C \n"
"    B       loc_FF8D0C24 \n"
"    B       loc_FF8D0C24 \n"
"    B       loc_FF8D0C3C \n"
"    B       loc_FF8D0C3C \n"
"    B       loc_FF8D0DAC \n"
"    B       loc_FF8D0DB4 \n"
"    B       loc_FF8D0DB4 \n"
"    B       loc_FF8D0DB4 \n"
"    B       loc_FF8D0DB4 \n"
"    B       loc_FF8D0DBC \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0C2C \n"
"    B       loc_FF8D0C34 \n"
"    B       loc_FF8D0C34 \n"
"    B       loc_FF8D0C48 \n"
"    B       loc_FF8D0C48 \n"
"    B       loc_FF8D0C50 \n"
"    B       loc_FF8D0C88 \n"
"    B       loc_FF8D0CC0 \n"
"    B       loc_FF8D0D5C \n"
"    B       loc_FF8D0D94 \n"
"    B       loc_FF8D0D94 \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0DC0 \n"
"    B       loc_FF8D0D9C \n"
"    B       loc_FF8D0DA4 \n"

"loc_FF8D0C14:\n"
"    BL      sub_FF8CCBB8 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0C1C:\n"
"    BL      sub_FF8CCE54 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0C24:\n"
"    BL      sub_FF8CD07C \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0C2C:\n"
"    BL      sub_FF8CD354 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0C34:\n"
"    BL      sub_FF8CD56C \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0C3C:\n"
"    BL      sub_FF8CD890_my \n"  // --> Patched. Old value = 0xFF8CD890.
"    MOV     R4, #0 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0C48:\n"
"    BL      sub_FF8CD9D8 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0C50:\n"
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
"    LDRH    R1, [R5, #0xA] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    BL      sub_FF8D1CC0 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0C88:\n"
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
"    LDRH    R1, [R5, #0xA] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    BL      sub_FF8D1DC8 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0CC0:\n"
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
"    LDRH    R1, [R5, #0xA] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    BL      sub_FF8D1E7C \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0D5C:\n"
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
"    LDRH    R1, [R5, #0xA] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    BL      sub_FF8D1F24 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0D94:\n"
"    BL      sub_FF8CDDAC \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0D9C:\n"
"    BL      sub_FF8CE524 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0DA4:\n"
"    BL      sub_FF8CE7C0 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0DAC:\n"
"    BL      sub_FF8CE9A0 \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0DB4:\n"
"    BL      sub_FF8CEB5C \n"
"    B       loc_FF8D0DC0 \n"

"loc_FF8D0DBC:\n"
"    BL      sub_FF8CED48 \n"

"loc_FF8D0DC0:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x8C] \n"
"    LDR     R2, [R0, #0x90] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    CMP     R4, #1 \n"
"    BNE     loc_FF8D0E28 \n"

"loc_FF8D0DE0:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, #0xC \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R0, R0, R1, LSL#2 \n"
"    SUB     R4, R0, #8 \n"
"    LDR     R0, =0x57870 \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFB9228C \n"
"    LDR     R0, =0x5787C \n"
"    MOV     R2, #0xC \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFB9228C \n"
"    LDR     R0, =0x57888 \n"
"    MOV     R2, #0xC \n"
"    MOV     R1, R4 \n"
"    BL      sub_FFB9228C \n"
"    B       loc_FF8D0EA4 \n"

"loc_FF8D0E28:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R3, #1 \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0xB \n"
"    BNE     loc_FF8D0E70 \n"
"    MOV     R2, #0 \n"
"    STRD    R2, [SP] \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8CC998 \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #0 \n"
"    STRD    R2, [SP] \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    B       loc_FF8D0EA0 \n"

"loc_FF8D0E70:\n"
"    MOV     R2, #1 \n"
"    STRD    R2, [SP] \n"
"    MOV     R3, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #1 \n"
"    BL      sub_FF8CC998 \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #1 \n"
"    STR     R3, [SP] \n"
"    STR     R3, [SP, #4] \n"

"loc_FF8D0EA0:\n"
"    BL      sub_FF8CCB00 \n"

"loc_FF8D0EA4:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8D1BBC \n"
"    B       loc_FF8D0838 \n"
);
}

/*************************************************************/
//** sub_FF8CD890_my @ 0xFF8CD890 - 0xFF8CD958, length=51
void __attribute__((naked,noinline)) sub_FF8CD890_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    LDR     R7, =0x5094 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x3E \n"
"    BL      sub_FF8917CC \n"
"    LDRSH   R0, [R4, #4] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF8CC6FC \n"
"    MOV     R5, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8CC80C \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF8CC864 \n"
"    LDRSH   R0, [R4, #0xA] \n"
"    BL      sub_FF8CC8BC \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF8CC914 \n"
"    MOV     R6, R0 \n"
"    LDRSH   R0, [R4, #0xE] \n"
"    BL      sub_FF8D1C60 \n"
"    LDR     R0, [R4] \n"
"    LDR     R8, =0x57888 \n"
"    CMP     R0, #0xB \n"
"    MOVEQ   R5, #0 \n"
"    MOVEQ   R6, #0 \n"
"    BEQ     loc_FF8CD92C \n"
"    CMP     R5, #1 \n"
"    BNE     loc_FF8CD92C \n"
"    LDRSH   R0, [R4, #4] \n"
"    LDR     R1, =0xFF8CC668 \n"
"    MOV     R2, #2 \n"
"    BL      sub_FF97F9FC \n"
"    STRH    R0, [R4, #4] \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R7, #0x28] \n"
"    B       loc_FF8CD934 \n"

"loc_FF8CD92C:\n"
"    LDRH    R0, [R8] \n"
"    STRH    R0, [R4, #4] \n"

"loc_FF8CD934:\n"
"    CMP     R6, #1 \n"
"    LDRNEH  R0, [R8, #8] \n"
"    BNE     loc_FF8CD950 \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    LDR     R1, =0xFF8CC6EC \n"
"    MOV     R2, #0x20 \n"
"    BL      sub_FF8D1C7C \n"

"loc_FF8CD950:\n"
"    STRH    R0, [R4, #0xC] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8BE93C_my \n"  // --> Patched. Old value = 0xFF8BE93C.
"    B       sub_FF8CD95C \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF8BE93C_my @ 0xFF8BE93C - 0xFF8BE97C, length=17
void __attribute__((naked,noinline)) sub_FF8BE93C_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0x4D70 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #4] \n"
"    CMP     R0, #1 \n"
"    LDRNE   R1, =0x146 \n"
"    LDRNE   R0, =0xFF8BE740 \n"
"    BLNE    _DebugAssert \n"
"    CMN     R4, #0xC00 \n"
"    LDREQSH R4, [R5, #2] \n"
"    CMN     R4, #0xC00 \n"
"    MOVEQ   R1, #0x14C \n"
"    LDREQ   R0, =0xFF8BE740 \n"
"    STRH    R4, [R5, #2] \n"
"    BLEQ    _DebugAssert \n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = 0xFFA4E78C.
"    B       sub_FF8BE980 \n"  // Continue in firmware
);
}