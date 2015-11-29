/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
// Powershot N Facebook
#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define NR_AUTO (0)                          // have to explictly reset value back to 0 to enable auto
#define PAUSE_FOR_FILE_COUNTER 100           // sometimes the file counter isn't updated when hook starts

static long *nrflag = (long*)(0xdeb0+0x00);  // Found @ ff2ff348 & ff2ff384

#include "../../../generic/capt_seq.c"
//////////////////////////////////////////////////////////////
// capt_seq_task & exp_drv_task- based on A2500
//////////////////////////////////////////////////////////////

/*************************************************************/
//** capt_seq_task @ 0xFF0B82EC - 0xFF0B85BC, length=181
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R3-R7,LR} \n"
"    LDR     R4, =0xA57DC \n"
"    LDR     R7, =0x3A74 \n"
"    MOV     R6, #0 \n"

"loc_FF0B82FC:\n"
"    LDR     R0, [R7, #4] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, SP \n"
"    BL      sub_0068BDE4 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF0B8328 \n"
"    LDR     R1, =0x479 \n"
"    LDR     R0, =0xFF0B7D08 /*'SsShootTask.c'*/ \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R3-R7,PC} \n"

"loc_FF0B8328:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x25 \n"
"    ADDCC   PC, PC, R1, LSL#2 \n"
"    B       loc_FF0B8584 \n"
"    B       loc_FF0B83D0 \n"
"    B       loc_FF0B83E8 \n"
"    B       loc_FF0B83F4 \n"
"    B       loc_FF0B8408 \n"
"    B       loc_FF0B8400 \n"
"    B       loc_FF0B8414 \n"
"    B       loc_FF0B841C \n"
"    B       loc_FF0B8424 \n"
"    B       loc_FF0B8430 \n"
"    B       loc_FF0B848C \n"
"    B       loc_FF0B843C \n"
"    B       loc_FF0B8448 \n"
"    B       loc_FF0B8450 \n"
"    B       loc_FF0B8474 \n"
"    B       loc_FF0B847C \n"
"    B       loc_FF0B8484 \n"
"    B       loc_FF0B8494 \n"
"    B       loc_FF0B849C \n"
"    B       loc_FF0B84A4 \n"
"    B       loc_FF0B84AC \n"
"    B       loc_FF0B84B4 \n"
"    B       loc_FF0B84C0 \n"
"    B       loc_FF0B84C8 \n"
"    B       loc_FF0B84D0 \n"
"    B       loc_FF0B84D8 \n"
"    B       loc_FF0B84E0 \n"
"    B       loc_FF0B84E8 \n"
"    B       loc_FF0B84F0 \n"
"    B       loc_FF0B84F8 \n"
"    B       loc_FF0B8500 \n"
"    B       loc_FF0B8508 \n"
"    B       loc_FF0B8514 \n"
"    B       loc_FF0B851C \n"
"    B       loc_FF0B8528 \n"
"    B       loc_FF0B8564 \n"
"    B       loc_FF0B8570 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B83D0:\n"
//"    BL      shooting_expo_iso_override\n"      // extra ISO override call doesn't appear to be needed on elph130
"    BL      sub_FF0B8B24 \n"
"    BL      shooting_expo_param_override\n"    // added
"    BL      sub_FF0B5980 \n"
// try avoid intermittetant override failues on quick press, not needed?
"    MOV     R0, #0\n"                          // added
"    STR     R0, [R4,#0x28]\n"                  // added
"    LDR     R0, [R4, #0x28] \n"
"    CMP     R0, #0 \n"
"    BLNE    sub_FF240090_my \n"  // --> Patched. Old value = 0xFF240090.
"    B       loc_FF0B8590 \n"

"loc_FF0B83E8:\n"
"    LDR     R0, [R0, #0x10] \n"
"    BL      sub_FF23FE90_my \n"  // --> Patched. Old value = 0xFF23FE90.
"    B       loc_FF0B8590 \n"

"loc_FF0B83F4:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF0B8E48 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8400:\n"
"    BL      sub_FF0B8760 \n"
"    B       loc_FF0B840C \n"

"loc_FF0B8408:\n"
"    BL      sub_FF0B8B00 \n"

"loc_FF0B840C:\n"
"    STR     R6, [R4, #0x28] \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8414:\n"
"    BL      sub_FF0B8B08 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B841C:\n"
"    BL      sub_FF0B8D18 \n"
"    B       loc_FF0B8434 \n"

"loc_FF0B8424:\n"
"    LDR     R0, [R0, #0x10] \n"
"    BL      sub_FF240120 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8430:\n"
"    BL      sub_FF0B8D9C \n"

"loc_FF0B8434:\n"
"    BL      sub_FF0B5980 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B843C:\n"
"    LDR     R0, [R4, #0x58] \n"
"    BL      sub_FF0B951C \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8448:\n"
"    BL      sub_FF0B9884 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8450:\n"
"    LDRH    R0, [R4] \n"
"    SUB     R1, R0, #0x8200 \n"
"    SUBS    R1, R1, #0x3B \n"
"    SUBNE   R1, R0, #0x8000 \n"
"    SUBNES  R1, R1, #0x10 \n"
"    MOVEQ   R0, #1 \n"
"    MOVNE   R0, #0 \n"
"    BL      sub_FF0B98E8 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8474:\n"
"    BL      sub_FF0B9AC8 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B847C:\n"
"    BL      sub_FF0B9F60 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8484:\n"
"    BL      sub_FF0BA044 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B848C:\n"
"    BL      sub_FF0B8B00 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8494:\n"
"    BL      sub_FF23F188 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B849C:\n"
"    BL      sub_FF23F3C8 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84A4:\n"
"    BL      sub_FF23F484 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84AC:\n"
"    BL      sub_FF23F558 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84B4:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF23F7B8 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84C0:\n"
"    BL      sub_FF23F91C \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84C8:\n"
"    BL      sub_FF23F9B0 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84D0:\n"
"    BL      sub_FF23FA58 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84D8:\n"
"    BL      sub_FF0B8FB4 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84E0:\n"
"    BL      sub_FF0B9038 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84E8:\n"
"    BL      sub_FF23F628 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84F0:\n"
"    BL      sub_FF23F668 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B84F8:\n"
"    BL      sub_FF0BE490 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8500:\n"
"    BL      sub_FF0BE590 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8508:\n"
"    LDR     R0, [R0, #0xC] \n"
"    BL      sub_FF23FB68 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8514:\n"
"    BL      sub_FF23FBD8 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B851C:\n"
"    BL      sub_FF0BE71C \n"
"    BL      sub_FF0BE5E8 \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8528:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF240930 \n"
"    MOV     R0, #1 \n"
"    BL      sub_FF240A58 \n"
"    LDR     R0, =0xA58DC \n"
"    LDRH    R0, [R0, #0x8C] \n"
"    CMP     R0, #4 \n"
"    LDRNEH  R0, [R4] \n"
"    SUBNE   R1, R0, #0x8000 \n"
"    SUBNES  R1, R1, #0x230 \n"
"    BNE     loc_FF0B8590 \n"
"    BL      sub_FF0BE590 \n"
"    BL      sub_FF0BED14 \n"
"    BL      sub_FF0BEA2C \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8564:\n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0xD \n"
"    B       loc_FF0B8578 \n"

"loc_FF0B8570:\n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0xC \n"

"loc_FF0B8578:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF0B656C \n"
"    B       loc_FF0B8590 \n"

"loc_FF0B8584:\n"
"    LDR     R1, =0x5DE \n"
"    LDR     R0, =0xFF0B7D08 /*'SsShootTask.c'*/ \n"
"    BL      _DebugAssert \n"

"loc_FF0B8590:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0, #4] \n"
"    LDR     R0, [R7] \n"
"    BL      sub_0068BB54 /*_SetEventFlag*/ \n"
"    LDR     R5, [SP] \n"
"    LDR     R0, [R5, #8] \n"
"    CMP     R0, #0 \n"
"    LDREQ   R1, =0x116 \n"
"    LDREQ   R0, =0xFF0B7D08 /*'SsShootTask.c'*/ \n"
"    BLEQ    _DebugAssert \n"
"    STR     R6, [R5, #8] \n"
"    B       loc_FF0B82FC \n"
);
}

/*************************************************************/
//** sub_FF240090_my @ 0xFF240090 - 0xFF24011C, length=36
void __attribute__((naked,noinline)) sub_FF240090_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    BL      sub_FF0B7940 \n"
"    MOV     R4, R0 \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF0C03E4 \n"
"    LDR     R6, =0xAA80 \n"
"    TST     R0, #1 \n"
"    MOV     R5, #1 \n"
"    BNE     loc_FF240118 \n"
"    BL      sub_FF0B8B10 \n"
"    BL      sub_FF0BC078 \n"
"    MOV     R1, R4 \n"
"    BL      sub_FF0BC0D0 \n"
"    LDR     R0, =0x10E \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R4, #0x48 \n"
"    BL      _SetPropertyCase \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R4, #0x4C \n"
"    MOV     R0, #0x2C \n"
"    BL      _SetPropertyCase \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R4, #8 \n"
"    MOV     R0, #0x3F \n"
"    BL      _SetPropertyCase \n"
"    BL      sub_FF240C18 \n"
"    MVN     R1, #0x1000 \n"
"    BL      sub_0068BB88 /*_ClearEventFlag*/ \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF3EDA0C \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF3EDDA0_my \n"  // --> Patched. Old value = 0xFF3EDDA0.
"    TST     R0, #1 \n"
"    LDMEQFD SP!, {R4-R6,PC} \n"

"loc_FF240118:\n"
"    STR     R5, [R6] \n"
"    LDMFD   SP!, {R4-R6,PC} \n"
);
}

/*************************************************************/
//** sub_FF23FE90_my @ 0xFF23FE90 - 0xFF24008C, length=128
void __attribute__((naked,noinline)) sub_FF23FE90_my() {
asm volatile (
"    STMFD   SP!, {R2-R8,LR} \n"
"    MOV     R5, R0 \n"
"    LDR     R0, =0xAA80 \n"
"    LDR     R7, =0xA57DC \n"
"    LDR     R0, [R0] \n"
"    MOV     R4, #0 \n"
"    CMP     R0, #0 \n"
"    MOVNE   R4, #0x1D \n"
"    BNE     loc_FF240058 \n"
"    LDR     R0, [R7, #0x28] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF240058 \n"
"    BL      sub_FF0BC078 \n"
"    MOV     R1, R5 \n"
"    BL      sub_FF0BC0D0 \n"
"    LDR     R0, =0x10E \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R5, #0x48 \n"
"    BL      _SetPropertyCase \n"
"    MOV     R2, #4 \n"
"    ADD     R1, R5, #0x4C \n"
"    MOV     R0, #0x2C \n"
"    BL      _SetPropertyCase \n"
"    LDR     R0, [R7, #0x11C] \n"
"    LDR     R6, =0xA58DC \n"
"    CMP     R0, #0 \n"
"    LDRNEH  R0, [R6, #0x8A] \n"
"    CMPNE   R0, #3 \n"
"    LDRNE   R0, [R5, #8] \n"
"    CMPNE   R0, #1 \n"
"    BLS     loc_FF23FF2C \n"
"    LDR     R0, [R7, #0xD4] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF23FF44 \n"
"    BL      sub_FF030CCC \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF23FF44 \n"
"    BL      sub_FF0C044C \n"
"    B       loc_FF23FF40 \n"

"loc_FF23FF2C:\n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF0C03E4 \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF23FF44 \n"
"    BL      sub_FF0B62D8 \n"

"loc_FF23FF40:\n"
"    MOV     R4, #1 \n"

"loc_FF23FF44:\n"
"    TST     R4, #1 \n"
"    BNE     loc_FF240058 \n"
"    BL      sub_FF240C18 \n"
"    MVN     R1, #0x1000 \n"
"    BL      sub_0068BB88 /*_ClearEventFlag*/ \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF3ED0E8 \n"
"    TST     R0, #1 \n"
"    MOV     R4, R0 \n"
"    BNE     loc_FF240058 \n"
"    BL      sub_FF0B8B10 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF3EDA0C \n"
"    LDR     R0, [R7, #0x118] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF23FF98 \n"
"    LDRH    R0, [R6, #0x8A] \n"
"    CMP     R0, #3 \n"
"    LDRNE   R0, [R5, #8] \n"
"    CMPNE   R0, #1 \n"
"    BHI     loc_FF23FFA0 \n"

"loc_FF23FF98:\n"
"    MOV     R0, #2 \n"
"    BL      sub_FF0C1C98 \n"

"loc_FF23FFA0:\n"
"    LDR     R0, [R7, #0xA0] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF240038 \n"
"    LDRH    R0, [R6, #0x8A] \n"
"    CMP     R0, #3 \n"
"    LDRNE   R0, [R5, #8] \n"
"    CMPNE   R0, #1 \n"
"    BLS     loc_FF23FFDC \n"
"    BL      sub_FF240C18 \n"
"    MOV     R3, #0xDB \n"
"    STR     R3, [SP] \n"
"    LDR     R2, =0x3A98 \n"
"    LDR     R3, =0xFF2401B0 /*'SsCaptureCtrl.c'*/ \n"
"    MOV     R1, #0x1000 \n"
"    BL      sub_FF0C065C \n"

"loc_FF23FFDC:\n"
"    MOV     R2, #4 \n"
"    ADD     R1, SP, #4 \n"
"    MOV     R0, #0x180 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    MOVNE   R1, #0xDF \n"
"    LDRNE   R0, =0xFF2401B0 /*'SsCaptureCtrl.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    LDR     R0, [SP, #4] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF240018 \n"
"    BL      sub_FF240C18 \n"
"    MOV     R1, #0x1000 \n"
"    BL      sub_0068BB54 /*_SetEventFlag*/ \n"
"    B       loc_FF240038 \n"

"loc_FF240018:\n"
"    BL      sub_FF240C18 \n"
"    MOV     R1, #0x1000 \n"
"    BL      sub_0068BB88 /*_ClearEventFlag*/ \n"
"    LDR     R2, =0xFF23FE7C \n"
"    LDR     R0, [SP, #4] \n"
"    MOV     R3, #0x1000 \n"
"    MOV     R1, R2 \n"
"    BL      sub_FF039F5C /*_SetTimerAfter*/ \n"

"loc_FF240038:\n"
"    LDR     R0, [R7, #0xAC] \n"
"    CMP     R0, #0 \n"
"    MOV     R0, R5 \n"
"    BEQ     loc_FF240050 \n"
"    BL      sub_FF3EE344 \n"
"    B       loc_FF240054 \n"

"loc_FF240050:\n"
"    BL      sub_FF3EDDA0_my \n"  // --> Patched. Old value = 0xFF3EDDA0.

"loc_FF240054:\n"
"    BL      capt_seq_hook_raw_here \n"         // added
"    MOV     R4, R0 \n"

"loc_FF240058:\n"
"    MOV     R2, R5 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF0B656C \n"
"    TST     R4, #1 \n"
"    BNE     loc_FF24008C \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R7, #0x28] \n"
"    LDR     R0, [R7, #0xF0] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF24008C \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF0B62EC \n"

"loc_FF24008C:\n"
"    LDMFD   SP!, {R2-R8,PC} \n"
);
}

/*************************************************************/
//** sub_FF3EDDA0_my @ 0xFF3EDDA0 - 0xFF3EDE40, length=41
void __attribute__((naked,noinline)) sub_FF3EDDA0_my() {
asm volatile (
"    STMFD   SP!, {R2-R10,LR} \n"
"    LDR     R8, =0xA57DC \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R8, #0x15C] \n"
"    ADD     R5, R8, #0x100 \n"
"    CMP     R0, #0 \n"
"    LDRNEH  R0, [R5, #0x8A] \n"
"    CMPNE   R0, #3 \n"
"    LDRNE   R0, [R4, #8] \n"
"    CMPNE   R0, #1 \n"
"    BHI     loc_FF3EDDD8 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF3ED988 \n"
"    BL      sub_FF24070C \n"

"loc_FF3EDDD8:\n"
"    LDR     R0, [R8, #0x180] \n"
"    CMP     R0, #2 \n"
"    BNE     loc_FF3EDDFC \n"
"    LDRH    R0, [R5, #0x8A] \n"
"    CMP     R0, #3 \n"
"    LDRNE   R0, [R4, #8] \n"
"    CMPNE   R0, #1 \n"
"    MOVLS   R0, #4 \n"
"    BLLS    sub_FF179924 \n"

"loc_FF3EDDFC:\n"
"    LDR     R0, =0x12F \n"
"    MOV     R2, #4 \n"
"    ADD     R1, SP, #4 \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    MOVNE   R1, #0x170 \n"
"    LDRNE   R0, =0xFF3EE054 /*'SsStandardCaptureSeq.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    LDR     R0, [SP, #4] \n"
"    AND     R0, R0, #0xFF00 \n"
"    CMP     R0, #0x600 \n"
"    LDRNE   R0, =0xFF3ED5BC \n"
"    LDREQ   R0, =0xFF3EDD68 \n"
"    MOVNE   R1, R4 \n"
"    MOVEQ   R1, #0 \n"
"    BL      sub_FF11CF10 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF3EDB08_my \n"  // --> Patched. Old value = 0xFF3EDB08.
"    LDR     PC, =0xFF3EDE44 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF3EDB08_my @ 0xFF3EDB08 - 0xFF3EDBA0, length=39
void __attribute__((naked,noinline)) sub_FF3EDB08_my() {
asm volatile (
"    STMFD   SP!, {R1-R7,LR} \n"
"    LDR     R5, =0xA59AC \n"
"    LDR     R6, =0xA57DC \n"
"    MOV     R4, R0 \n"
"    LDR     R3, [R5] \n"
"    LDRSH   R2, [R5, #0xC] \n"
"    LDRSH   R1, [R5, #0xE] \n"
"    LDR     R0, [R6, #0x88] \n"
"    BL      sub_FF1E97A8 \n"
"    MOV     R2, #2 \n"
"    ADD     R1, SP, #8 \n"
"    MOV     R0, #0xFA \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x2E5 \n"
"    LDRNE   R0, =0xFF3ED870 /*'SsCaptureCommon.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    LDRSH   R0, [R5, #0xC] \n"
"    LDRSH   R1, [SP, #8] \n"
"    BL      sub_FF176C24 \n"
"    LDR     R0, [R6, #0xE4] \n"
"    CMP     R0, #0 \n"
"    LDRNE   R0, =0xA58DC \n"
"    LDRNEH  R0, [R0, #0x8A] \n"
"    CMPNE   R0, #3 \n"
"    LDRNE   R0, [R4, #8] \n"
"    CMPNE   R0, #1 \n"
"    BHI     loc_FF3EDBA0 \n"
"    BL      _GetCCDTemperature \n"
"    LDR     R3, =0x134B0 \n"
"    STRH    R0, [R4, #0xC8] \n"
"    SUB     R2, R3, #4 \n"
"    STRD    R2, [SP] \n"
"    MOV     R1, R0 \n"
"    LDRSH   R2, [R5, #0xC] \n"
"    LDRH    R0, [R6, #0x5E] \n"
"    ADD     R3, R3, #4 \n"
"    BL      sub_FF2FEF10 \n"

"loc_FF3EDBA0:\n"
"    BL      wait_until_remote_button_is_released\n" // added
"    BL      capt_seq_hook_set_nr\n"                 // added
"    LDRH    R0, [R4, #0xC8] \n"
"    LDR     PC, =0xFF3EDBA4 \n"  // Continue in firmware
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF12A2F0 - 0xFF12A980, length=421
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R9,LR} \n"
"    SUB     SP, SP, #0x2C \n"
"    LDR     R6, =0x4F28 \n"
"    LDR     R7, =0xBB8 \n"
"    LDR     R4, =0xF9D00 \n"
"    MOV     R0, #0 \n"
"    ADD     R5, SP, #0x1C \n"
"    STR     R0, [SP, #0xC] \n"

"loc_FF12A310:\n"
"    LDR     R0, [R6, #0x20] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #0x28 \n"
"    BL      sub_0068BDE4 /*_ReceiveMessageQueue*/ \n"
"    LDR     R0, [SP, #0xC] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF12A35C \n"
"    LDR     R0, [SP, #0x28] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0x14 \n"
"    CMPNE   R0, #0x15 \n"
"    CMPNE   R0, #0x16 \n"
"    CMPNE   R0, #0x17 \n"
"    BEQ     loc_FF12A4BC \n"
"    CMP     R0, #0x2A \n"
"    BEQ     loc_FF12A444 \n"
"    ADD     R1, SP, #0xC \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF12A2A0 \n"

"loc_FF12A35C:\n"
"    LDR     R0, [SP, #0x28] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x30 \n"
"    BNE     loc_FF12A388 \n"
"    BL      sub_FF12B8B0 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R1, #1 \n"
"    BL      sub_0068BB54 /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x2C \n"
"    LDMFD   SP!, {R4-R9,PC} \n"

"loc_FF12A388:\n"
"    CMP     R1, #0x2F \n"
"    BNE     loc_FF12A3A4 \n"
"    LDR     R2, [R0, #0xA4]! \n"
"    LDR     R1, [R0, #4] \n"
"    MOV     R0, R1 \n"
"    BLX     R2 \n"
"    B       loc_FF12A978 \n"

"loc_FF12A3A4:\n"
"    CMP     R1, #0x28 \n"
"    BNE     loc_FF12A3F4 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_0068BB88 /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFF125080 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF23124C \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R2, R7 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_0068BA94 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x167F \n"
"    BNE     loc_FF12A4B0 \n"

"loc_FF12A3E0:\n"
"    LDR     R1, [SP, #0x28] \n"
"    LDR     R0, [R1, #0xA8] \n"
"    LDR     R1, [R1, #0xA4] \n"
"    BLX     R1 \n"
"    B       loc_FF12A978 \n"

"loc_FF12A3F4:\n"
"    CMP     R1, #0x29 \n"
"    BNE     loc_FF12A43C \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FF12A2A0 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_0068BB88 /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFF125090 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF2313EC \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R2, R7 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_0068BA94 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF12A3E0 \n"
"    LDR     R1, =0x1689 \n"
"    B       loc_FF12A4B0 \n"

"loc_FF12A43C:\n"
"    CMP     R1, #0x2A \n"
"    BNE     loc_FF12A454 \n"

"loc_FF12A444:\n"
"    LDR     R0, [SP, #0x28] \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FF12A2A0 \n"
"    B       loc_FF12A3E0 \n"

"loc_FF12A454:\n"
"    CMP     R1, #0x2D \n"
"    BNE     loc_FF12A46C \n"
"    BL      sub_FF113D98 \n"
"    BL      sub_FF114B6C \n"
"    BL      sub_FF114680 \n"
"    B       loc_FF12A3E0 \n"

"loc_FF12A46C:\n"
"    CMP     R1, #0x2E \n"
"    BNE     loc_FF12A4BC \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R1, #4 \n"
"    BL      sub_0068BB88 /*_ClearEventFlag*/ \n"
"    LDR     R1, =0xFF1250B0 \n"
"    LDR     R0, =0xFFFFF400 \n"
"    MOV     R2, #4 \n"
"    BL      sub_FF1137E8 \n"
"    BL      sub_FF113A78 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R2, R7 \n"
"    MOV     R1, #4 \n"
"    BL      sub_0068B9B0 /*_WaitForAnyEventFlag*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF12A3E0 \n"
"    LDR     R1, =0x16B1 \n"

"loc_FF12A4B0:\n"
"    LDR     R0, =0xFF12591C /*'ExpDrv.c'*/ \n"
"    BL      _DebugAssert \n"
"    B       loc_FF12A3E0 \n"

"loc_FF12A4BC:\n"
"    LDR     R0, [SP, #0x28] \n"
"    MOV     R8, #1 \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x12 \n"
"    CMPNE   R1, #0x13 \n"
"    BNE     loc_FF12A524 \n"
"    LDR     R1, [R0, #0x94] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2,R3,R9} \n"
"    STMIA   R5, {R2,R3,R9} \n"
"    BL      sub_FF1283DC \n"
"    LDR     R0, [SP, #0x28] \n"
"    LDR     R1, [R0, #0x94] \n"
"    LDR     R3, [R0, #0xA4] \n"
"    LDR     R2, [R0, #0xA8] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x28] \n"
"    BL      sub_FF12BC64 \n"
"    LDR     R0, [SP, #0x28] \n"
"    LDR     R1, [R0, #0x94] \n"
"    LDR     R2, [R0, #0xB0] \n"
"    LDR     R3, [R0, #0xAC] \n"
"    B       loc_FF12A83C \n"

"loc_FF12A524:\n"
"    CMP     R1, #0x14 \n"
"    CMPNE   R1, #0x15 \n"
"    CMPNE   R1, #0x16 \n"
"    CMPNE   R1, #0x17 \n"
"    BNE     loc_FF12A5DC \n"
"    ADD     R3, SP, #0xC \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x1C \n"
"    BL      sub_FF128640 \n"
"    CMP     R0, #1 \n"
"    MOV     R9, R0 \n"
"    CMPNE   R9, #5 \n"
"    BNE     loc_FF12A578 \n"
"    LDR     R0, [SP, #0x28] \n"
"    MOV     R2, R9 \n"
"    LDR     R1, [R0, #0x94]! \n"
"    LDR     R12, [R0, #0x10]! \n"
"    LDR     R3, [R0, #4] \n"
"    MOV     R0, SP \n"
"    BLX     R12 \n"
"    B       loc_FF12A5B0 \n"

"loc_FF12A578:\n"
"    LDR     R0, [SP, #0x28] \n"
"    CMP     R9, #2 \n"
"    LDR     R3, [R0, #0xA8] \n"
"    CMPNE   R9, #6 \n"
"    BNE     loc_FF12A5C4 \n"
"    LDR     R12, [R0, #0xA4] \n"
"    MOV     R2, R9 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, SP \n"
"    BLX     R12 \n"
"    LDR     R0, [SP, #0x28] \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x1C \n"
"    BL      sub_FF129F78 \n"

"loc_FF12A5B0:\n"
"    LDR     R0, [SP, #0x28] \n"
"    LDR     R2, [SP, #0xC] \n"
"    MOV     R1, R9 \n"
"    BL      sub_FF12A240 \n"
"    B       loc_FF12A844 \n"

"loc_FF12A5C4:\n"
"    LDR     R1, [R0, #0x94] \n"
"    LDR     R12, [R0, #0xA4] \n"
"    MOV     R2, R9 \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R12 \n"
"    B       loc_FF12A844 \n"

"loc_FF12A5DC:\n"
"    CMP     R1, #0x24 \n"
"    CMPNE   R1, #0x25 \n"
"    BNE     loc_FF12A628 \n"
"    LDR     R1, [R0, #0x94] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2,R3,R9} \n"
"    STMIA   R5, {R2,R3,R9} \n"
"    BL      sub_FF127130 \n"
"    LDR     R0, [SP, #0x28] \n"
"    LDR     R1, [R0, #0x94] \n"
"    LDR     R3, [R0, #0xA4] \n"
"    LDR     R2, [R0, #0xA8] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x28] \n"
"    BL      sub_FF127608 \n"
"    B       loc_FF12A844 \n"

"loc_FF12A628:\n"
"    ADD     R1, R0, #4 \n"
"    LDMIA   R1, {R2,R3,R9} \n"
"    STMIA   R5, {R2,R3,R9} \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x28 \n"
"    ADDCC   PC, PC, R1, LSL#2 \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A6E4 \n"
"    B       loc_FF12A6E4 \n"
"    B       loc_FF12A6EC \n"
"    B       loc_FF12A6F4 \n"
"    B       loc_FF12A6F4 \n"
"    B       loc_FF12A6F4 \n"
"    B       loc_FF12A6E4 \n"
"    B       loc_FF12A6EC \n"
"    B       loc_FF12A6F4 \n"
"    B       loc_FF12A6F4 \n"
"    B       loc_FF12A70C \n"
"    B       loc_FF12A70C \n"
"    B       loc_FF12A818 \n"
"    B       loc_FF12A820 \n"
"    B       loc_FF12A820 \n"
"    B       loc_FF12A820 \n"
"    B       loc_FF12A820 \n"
"    B       loc_FF12A828 \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A6FC \n"
"    B       loc_FF12A704 \n"
"    B       loc_FF12A704 \n"
"    B       loc_FF12A704 \n"
"    B       loc_FF12A718 \n"
"    B       loc_FF12A718 \n"
"    B       loc_FF12A720 \n"
"    B       loc_FF12A758 \n"
"    B       loc_FF12A790 \n"
"    B       loc_FF12A7C8 \n"
"    B       loc_FF12A800 \n"
"    B       loc_FF12A800 \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A82C \n"
"    B       loc_FF12A808 \n"
"    B       loc_FF12A810 \n"

"loc_FF12A6E4:\n"
"    BL      sub_FF125728 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A6EC:\n"
"    BL      sub_FF125A6C \n"
"    B       loc_FF12A82C \n"

"loc_FF12A6F4:\n"
"    BL      sub_FF125CD8 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A6FC:\n"
"    BL      sub_FF125FD4 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A704:\n"
"    BL      sub_FF1261F0 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A70C:\n"
"    BL      sub_FF1266F4_my \n"  // --> Patched. Old value = 0xFF1266F4.
"    MOV     R8, #0 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A718:\n"
"    BL      sub_FF1268D4 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A720:\n"
"    LDRH    R1, [R0, #4] \n"
"    STRH    R1, [SP, #0x1C] \n"
"    LDRH    R1, [R4, #2] \n"
"    STRH    R1, [SP, #0x1E] \n"
"    LDRH    R1, [R4, #4] \n"
"    STRH    R1, [SP, #0x20] \n"
"    LDRH    R1, [R4, #6] \n"
"    STRH    R1, [SP, #0x22] \n"
"    LDRH    R1, [R0, #0xC] \n"
"    STRH    R1, [SP, #0x24] \n"
"    LDRH    R1, [R4, #0xA] \n"
"    STRH    R1, [SP, #0x26] \n"
"    BL      sub_FF12B954 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A758:\n"
"    LDRH    R1, [R0, #4] \n"
"    STRH    R1, [SP, #0x1C] \n"
"    LDRH    R1, [R4, #2] \n"
"    STRH    R1, [SP, #0x1E] \n"
"    LDRH    R1, [R4, #4] \n"
"    STRH    R1, [SP, #0x20] \n"
"    LDRH    R1, [R4, #6] \n"
"    STRH    R1, [SP, #0x22] \n"
"    LDRH    R1, [R4, #8] \n"
"    STRH    R1, [SP, #0x24] \n"
"    LDRH    R1, [R4, #0xA] \n"
"    STRH    R1, [SP, #0x26] \n"
"    BL      sub_FF12BA60 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A790:\n"
"    LDRH    R1, [R4] \n"
"    STRH    R1, [SP, #0x1C] \n"
"    LDRH    R1, [R0, #6] \n"
"    STRH    R1, [SP, #0x1E] \n"
"    LDRH    R1, [R4, #4] \n"
"    STRH    R1, [SP, #0x20] \n"
"    LDRH    R1, [R4, #6] \n"
"    STRH    R1, [SP, #0x22] \n"
"    LDRH    R1, [R4, #8] \n"
"    STRH    R1, [SP, #0x24] \n"
"    LDRH    R1, [R4, #0xA] \n"
"    STRH    R1, [SP, #0x26] \n"
"    BL      sub_FF12BB18 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A7C8:\n"
"    LDRH    R1, [R4] \n"
"    STRH    R1, [SP, #0x1C] \n"
"    LDRH    R1, [R4, #2] \n"
"    STRH    R1, [SP, #0x1E] \n"
"    LDRH    R1, [R4, #4] \n"
"    STRH    R1, [SP, #0x20] \n"
"    LDRH    R1, [R4, #6] \n"
"    STRH    R1, [SP, #0x22] \n"
"    LDRH    R1, [R0, #0xC] \n"
"    STRH    R1, [SP, #0x24] \n"
"    LDRH    R1, [R4, #0xA] \n"
"    STRH    R1, [SP, #0x26] \n"
"    BL      sub_FF12BBC0 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A800:\n"
"    BL      sub_FF126EE0 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A808:\n"
"    BL      sub_FF12770C \n"
"    B       loc_FF12A82C \n"

"loc_FF12A810:\n"
"    BL      sub_FF127C7C \n"
"    B       loc_FF12A82C \n"

"loc_FF12A818:\n"
"    BL      sub_FF127EA4 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A820:\n"
"    BL      sub_FF128064 \n"
"    B       loc_FF12A82C \n"

"loc_FF12A828:\n"
"    BL      sub_FF1281D0 \n"

"loc_FF12A82C:\n"
"    LDR     R0, [SP, #0x28] \n"
"    LDR     R1, [R0, #0x94] \n"
"    LDR     R2, [R0, #0xA8] \n"
"    LDR     R3, [R0, #0xA4] \n"

"loc_FF12A83C:\n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"

"loc_FF12A844:\n"
"    LDR     R0, [SP, #0x28] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0x10 \n"
"    BEQ     loc_FF12A87C \n"
"    BGT     loc_FF12A86C \n"
"    CMP     R0, #1 \n"
"    CMPNE   R0, #4 \n"
"    CMPNE   R0, #0xE \n"
"    BNE     loc_FF12A8B0 \n"
"    B       loc_FF12A87C \n"

"loc_FF12A86C:\n"
"    CMP     R0, #0x13 \n"
"    CMPNE   R0, #0x17 \n"
"    CMPNE   R0, #0x1A \n"
"    BNE     loc_FF12A8B0 \n"

"loc_FF12A87C:\n"
"    LDRSH   R0, [R4] \n"
"    CMN     R0, #0xC00 \n"
"    LDRNESH R1, [R4, #8] \n"
"    CMNNE   R1, #0xC00 \n"
"    STRNEH  R0, [SP, #0x1C] \n"
"    STRNEH  R1, [SP, #0x24] \n"
"    BNE     loc_FF12A8B0 \n"
"    ADD     R0, SP, #0x10 \n"
"    BL      sub_FF12BE98 \n"
"    LDRH    R0, [SP, #0x10] \n"
"    STRH    R0, [SP, #0x1C] \n"
"    LDRH    R0, [SP, #0x18] \n"
"    STRH    R0, [SP, #0x24] \n"

"loc_FF12A8B0:\n"
"    LDR     R0, [SP, #0x28] \n"
"    CMP     R8, #1 \n"
"    BNE     loc_FF12A900 \n"
"    LDR     R1, [R0, #0x94] \n"
"    MOV     R2, #0xC \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R0, R0, R1, LSL#2 \n"
"    SUB     R8, R0, #8 \n"
"    LDR     R0, =0xF9D00 \n"
"    ADD     R1, SP, #0x1C \n"
"    BL      sub_006A90D8 \n"
"    LDR     R0, =0xF9D0C \n"
"    MOV     R2, #0xC \n"
"    ADD     R1, SP, #0x1C \n"
"    BL      sub_006A90D8 \n"
"    LDR     R0, =0xF9D18 \n"
"    MOV     R2, #0xC \n"
"    MOV     R1, R8 \n"
"    BL      sub_006A90D8 \n"
"    B       loc_FF12A978 \n"

"loc_FF12A900:\n"
"    LDR     R0, [R0] \n"
"    MOV     R3, #1 \n"
"    CMP     R0, #0xB \n"
"    BNE     loc_FF12A944 \n"
"    MOV     R2, #0 \n"
"    STRD    R2, [SP] \n"
"    MOV     R2, R3 \n"
"    MOV     R1, R3 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF125508 \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #0 \n"
"    STRD    R2, [SP] \n"
"    MOV     R2, R3 \n"
"    MOV     R1, R3 \n"
"    MOV     R0, #0 \n"
"    B       loc_FF12A974 \n"

"loc_FF12A944:\n"
"    MOV     R2, #1 \n"
"    STRD    R2, [SP] \n"
"    MOV     R3, R2 \n"
"    MOV     R1, R2 \n"
"    MOV     R0, R2 \n"
"    BL      sub_FF125508 \n"
"    MOV     R3, #1 \n"
"    MOV     R2, R3 \n"
"    MOV     R1, R3 \n"
"    MOV     R0, R3 \n"
"    STR     R3, [SP] \n"
"    STR     R3, [SP, #4] \n"

"loc_FF12A974:\n"
"    BL      sub_FF125674 \n"

"loc_FF12A978:\n"
"    LDR     R0, [SP, #0x28] \n"
"    BL      sub_FF12B8B0 \n"
"    B       loc_FF12A310 \n"
);
}

/*************************************************************/
//** sub_FF1266F4_my @ 0xFF1266F4 - 0xFF1267B8, length=50
void __attribute__((naked,noinline)) sub_FF1266F4_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    LDR     R7, =0x4F28 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x3E \n"
"    BL      sub_0068BB88 /*_ClearEventFlag*/ \n"
"    MOV     R2, #0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    MOV     R3, #1 \n"
"    MOV     R1, R2 \n"
"    BL      sub_FF125118 \n"
"    MOV     R6, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF125328 \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF125380 \n"
"    LDRSH   R0, [R4, #0xA] \n"
"    BL      sub_FF1253D8 \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF125430 \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R4] \n"
"    LDR     R8, =0xF9D18 \n"
"    CMP     R0, #0xB \n"
"    MOVEQ   R6, #0 \n"
"    MOVEQ   R5, R6 \n"
"    BEQ     loc_FF12678C \n"
"    CMP     R6, #1 \n"
"    BNE     loc_FF12678C \n"
"    LDRSH   R0, [R4, #4] \n"
"    LDR     R1, =0xFF125070 \n"
"    MOV     R2, #2 \n"
"    BL      sub_FF2312D0 \n"
"    STRH    R0, [R4, #4] \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R7, #0x28] \n"
"    B       loc_FF126794 \n"

"loc_FF12678C:\n"
"    LDRH    R0, [R8] \n"
"    STRH    R0, [R4, #4] \n"

"loc_FF126794:\n"
"    CMP     R5, #1 \n"
"    LDRNEH  R0, [R8, #8] \n"
"    BNE     loc_FF1267B0 \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    LDR     R1, =0xFF1250F4 \n"
"    MOV     R2, #0x20 \n"
"    BL      sub_FF12B910 \n"

"loc_FF1267B0:\n"
"    STRH    R0, [R4, #0xC] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF113AE4_my \n"  // --> Patched. Old value = 0xFF113AE4.
"    LDR     PC, =0xFF1267BC \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF113AE4_my @ 0xFF113AE4 - 0xFF113B24, length=17
void __attribute__((naked,noinline)) sub_FF113AE4_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0x4B88 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #4] \n"
"    CMP     R0, #1 \n"
"    MOVNE   R1, #0x154 \n"
"    LDRNE   R0, =0xFF11391C /*'Shutter.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    CMN     R4, #0xC00 \n"
"    LDREQSH R4, [R5, #2] \n"
"    CMN     R4, #0xC00 \n"
"    LDREQ   R1, =0x15A \n"
"    LDREQ   R0, =0xFF11391C /*'Shutter.c'*/ \n"
"    STRH    R4, [R5, #2] \n"
"    BLEQ    _DebugAssert \n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    LDR     PC, =0xFF113B28 \n"  // Continue in firmware
);
}
