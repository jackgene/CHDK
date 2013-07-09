/*
 * filewrite.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"

typedef struct {
    unsigned int address;
    unsigned int length;
} cam_ptp_data_chunk; //camera specific structure

#define MAX_CHUNKS_FOR_JPEG 7   // filewritetask is prepared for this many chunks
/*
 * fwt_data_struct: defined here as it's camera dependent
 * unneeded members are designated with unkn
 * pdc is required, everything after that is optional (DryOS < R50)
 * file_offset, full_size, seek_flag only needs to be defined for DryOS>=r50 generation cameras
 */
typedef struct
{
    int unkn1;
    int file_offset;
    int full_size;
    int unkn2, unkn3;
    cam_ptp_data_chunk pdc[MAX_CHUNKS_FOR_JPEG];
    int seek_flag;      // offset from start 0x4c = 76 bytes = 19 words
    int unkn4, unkn5;
    char name[32];      // offset from start 0x58 = 88 bytes = 22 words
} fwt_data_struct;
// seek_flag is different:
// seek state is activated (from state 0xc, open) when
// (word at 0x4c) AND 0x40
// OR
// write offset is not 0
#define FWT_MUSTSEEK    0x40   // value of the masked seek_flag indicating seek is required
#define FWT_SEEKMASK    0x40   // masks out unneeded bits of seek_flag

#include "../../../generic/filewrite.c"

/*************************************************************/
//** filewritetask @ 0xFF367DC4 - 0xFF367F64, length=105
void __attribute__((naked,noinline)) filewritetask() {
asm volatile (
"    STMFD   SP!, {R1-R7,LR} \n"
"    LDR     R5, =0x10E44 \n"
"    MOV     R6, #0 \n"

"loc_FF367DD0:\n"
"    LDR     R0, [R5, #0x10] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #8 \n"
"    BL      sub_0068BDE0 /*_ReceiveMessageQueue*/ \n"
"    CMP     R0, #0 \n"
"    MOVNE   R1, #0x3EC \n"
"    LDRNE   R0, =0xFF367F90 \n"
"    BLNE    _DebugAssert \n"
"    LDR     R0, [SP, #8] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0xD \n"
"    ADDCC   PC, PC, R1, LSL#2 \n"
"    B       loc_FF367DD0 \n"
"    B       loc_FF367F58 \n"
"    B       loc_FF367F58 \n"
"    B       loc_FF367F58 \n"
"    B       loc_FF367F58 \n"
"    B       loc_FF367F58 \n"
"    B       loc_FF367F58 \n"
"    B       loc_FF367F58 \n"
"    B       loc_FF367F60 \n"
"    B       loc_FF367E38 \n"
"    B       loc_FF367ED4 \n"
"    B       loc_FF367F04 \n"
"    B       loc_FF367EA0 \n"
"    B       loc_FF367ECC \n"

"loc_FF367E38:\n"
"    MOV     R4, R5 \n"
"    STR     R6, [SP] \n"

"loc_FF367E40:\n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R1, SP \n"
"    BL      sub_0068C024 /*_GetNumberOfPostedMessages*/ \n"
"    LDR     R0, [SP] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF367E6C \n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #4 \n"
"    BL      sub_0068BDE0 /*_ReceiveMessageQueue*/ \n"
"    B       loc_FF367E40 \n"

"loc_FF367E6C:\n"
"    LDR     R0, [R4, #4] \n"
"    CMN     R0, #1 \n"
"    BEQ     loc_FF367E94 \n"
"    BL      fwt_close \n"  // --> Patched. Old value = _Close.
"    MVN     R0, #0 \n"
"    STR     R0, [R4, #4] \n"
"    LDR     R0, =0x1628F8 \n"
"    BL      sub_FF073ED8 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF072128 \n"

"loc_FF367E94:\n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      _GiveSemaphore \n"
"    B       loc_FF367DD0 \n"

"loc_FF367EA0:\n"
"    MOV     R4, R0 \n"
"    ADD     R0, R0, #0x58 \n"
"    BL      sub_FF073ED8 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF071FEC \n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      sub_FF000370 \n"
"    ADD     R0, R4, #0x58 \n"
//mod start
"    LDR R3, =ignore_current_write\n" // !!
"    LDR R3, [R3]\n"
"    CMP R3, #0\n"
"    BNE loc_A\n" // skip creating directory
//mod end
"    BL      sub_FF01D1F0 \n"
"    ADD     R0, R4, #0x58 \n"
"    B       loc_FF367F38 \n"

"loc_FF367ECC:\n"
"    BL      sub_FF367AB0_my \n"  // --> Patched. Old value = 0xFF367AB0. Open stage
"    B       loc_FF367DD0 \n"

"loc_FF367ED4:\n"
"    LDR     R1, [R0, #4] \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #4] \n"
"    MOV     R2, #0 \n"
"    BL      fwt_lseek \n"  // --> Patched. Old value = _lseek.
"    CMN     R0, #1 \n"
"    LDREQ   R0, =0x9200013 \n"
"    MOVEQ   R1, R4 \n"
"    STREQ   R0, [R4, #0x10] \n"
"    MOVEQ   R0, #7 \n"
"    BLEQ    sub_FF3679F0 \n"
"    B       loc_FF367DD0 \n"

"loc_FF367F04:\n"
"    MOV     R4, R0 \n"
"    LDRSB   R0, [R0, #0x58] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF367DD0 \n"
"    STRB    R0, [SP, #4] \n"
"    ADD     R0, R4, #0x58 \n"
"    STRB    R6, [SP, #5] \n"
"    BL      sub_FF073ED8 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF071FEC \n"
//mod start
"    LDR R3, =ignore_current_write\n" // !!
"    LDR R3, [R3]\n"
"    CMP R3, #0\n"
"    BNE loc_B\n" // skip flushing the cache
//mod end
"    ADD     R0, SP, #4 \n"
"    BL      sub_FF070EF0 \n"
"loc_B:\n"
"    ADD     R0, R4, #0x58 \n"

"loc_FF367F38:\n"
"loc_A:\n"
"    BL      sub_FF073ED8 \n"
"    LDR     R1, [R5, #0x18] \n"
"    BL      sub_FF072128 \n"
"    LDR     R1, [R5, #0x14] \n"
"    CMP     R1, #0 \n"
"    LDRNE   R0, [R4, #0x10] \n"
"    BLXNE   R1 \n"
"    B       loc_FF367DD0 \n"

"loc_FF367F58:\n"
"    BL      sub_FF36816C_my \n"  // --> Patched. Old value = 0xFF36816C. Write stage
"    B       loc_FF367DD0 \n"

"loc_FF367F60:\n"
"    BL      sub_FF367C3C_my \n"  // --> Patched. Old value = 0xFF367C3C. Close stage
"    B       loc_FF367DD0 \n"
);
}

/*************************************************************/
//** sub_FF367AB0_my @ 0xFF367AB0 - 0xFF367C38, length=99
void __attribute__((naked,noinline)) sub_FF367AB0_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    MOV     R4, R0 \n"
//hook placed here to avoid conditional branch a few instructions below (watch out for registers!)
//"  MOV   R0, R4\n"      //data block start, commented out as R0 is already holding what we need
"    BL filewrite_main_hook\n"
"    MOV     R0, R4\n"      //restore register(s)
//hook end
"    LDR     R0, [R0, #0x4C] \n"
"    SUB     SP, SP, #0x38 \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF367C0C \n"
"    ADD     R0, R4, #0x58 \n"
"    BL      sub_FF073ED8 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF071FEC \n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      sub_FF000370 \n"
"    LDR     R0, [R4, #0x4C] \n"
"    LDR     R5, =0x301 \n"
"    TST     R0, #0x10 \n"
"    MOVNE   R5, #9 \n"
"    BNE     loc_FF367AFC \n"
"    TST     R0, #0x40 \n"
"    MOVNE   R5, #1 \n"

"loc_FF367AFC:\n"
"    TST     R0, #0x20 \n"
"    BNE     loc_FF367B10 \n"
"    LDR     R0, [R4, #0x54] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF367B14 \n"

"loc_FF367B10:\n"
"    ORR     R5, R5, #0x8000 \n"

"loc_FF367B14:\n"
"    LDR     R8, =0x1B6 \n"
"    ADD     R7, R4, #0x58 \n"
"    LDR     R6, [R4, #0xC] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, R5 \n"
"    MOV     R0, R7 \n"
"    BL      fwt_open \n"  // --> Patched. Old value = _Open.
"    CMN     R0, #1 \n"
"    BNE     loc_FF367B94 \n"
"    MOV     R0, R7 \n"
"    BL      sub_FF01D1F0 \n"
"    MOV     R2, #0xF \n"
"    MOV     R1, R7 \n"
"    MOV     R0, SP \n"
"    BL      sub_00690174 \n"
"    MOV     R0, #0 \n"
"    LDR     R1, =0x41FF \n"
"    STRB    R0, [SP, #0xF] \n"
"    STR     R1, [SP, #0x20] \n"
"    MOV     R1, #0x10 \n"
"    STR     R0, [SP, #0x28] \n"
"    STR     R1, [SP, #0x24] \n"
"    ADD     R1, SP, #0x20 \n"
"    MOV     R0, SP \n"
"    STR     R6, [SP, #0x2C] \n"
"    STR     R6, [SP, #0x30] \n"
"    STR     R6, [SP, #0x34] \n"
"    BL      sub_FF071968 \n"
"    MOV     R2, R8 \n"
"    MOV     R1, R5 \n"
"    MOV     R0, R7 \n"
"    BL      _Open \n"

"loc_FF367B94:\n"
"    LDR     R6, =0x10E44 \n"
"    CMN     R0, #1 \n"
"    MOV     R5, R0 \n"
"    STR     R0, [R6, #4] \n"
"    BNE     loc_FF367BD4 \n"
"    ADD     R0, R4, #0x58 \n"
"    BL      sub_FF073ED8 \n"
"    LDR     R1, [R6, #0x18] \n"
"    BL      sub_FF072128 \n"
"    LDR     R1, [R6, #0x14] \n"
"    CMP     R1, #0 \n"
"    BEQ     loc_FF367C34 \n"
"    ADD     SP, SP, #0x38 \n"
"    LDMFD   SP!, {R4-R8,LR} \n"
"    LDR     R0, =0x9200001 \n"
"    BX      R1 \n"

"loc_FF367BD4:\n"
"    LDR     R0, =0x1628F8 \n"
"    MOV     R2, #0x20 \n"
"    ADD     R1, R4, #0x58 \n"
"    BL      sub_0069035C \n"

//mod start
"    LDR R3, =current_write_ignored\n"
"    LDR R3, [R3]\n"
"    CMP R3, #0\n"
"    BNE loc_C\n" // jump over the next block
//mod end

"    LDR     R0, [R4, #0x4C] \n"
"    TST     R0, #0x80 \n"
"    BEQ     loc_FF367C0C \n"
"    LDR     R1, [R4, #8] \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF01CEC0 \n"
"    CMP     R0, #0 \n"
"    MOVEQ   R1, R4 \n"
"    MOVEQ   R0, #7 \n"
"    BEQ     loc_FF367C30 \n"

"loc_FF367C0C:\n"
"loc_C:\n"
"    LDR     R0, [R4, #0x4C] \n"
"    TST     R0, #0x40 \n"
"    LDREQ   R0, [R4, #4] \n"
"    CMPEQ   R0, #0 \n"
"    MOVNE   R1, R4 \n"
"    MOVNE   R0, #9 \n"
"    BLNE    sub_FF3679F0 \n"
"    MOV     R1, R4 \n"
"    MOV     R0, #0 \n"

"loc_FF367C30:\n"
"    BL      sub_FF3679F0 \n"

"loc_FF367C34:\n"
"    ADD     SP, SP, #0x38 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"
);
}

/*************************************************************/
//** sub_FF36816C_my @ 0xFF36816C - 0xFF368248, length=56
void __attribute__((naked,noinline)) sub_FF36816C_my() {
asm volatile (
"    STMFD   SP!, {R4-R10,LR} \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #6 \n"
"    BHI     loc_FF368198 \n"
"    ADD     R0, R5, R0, LSL#3 \n"
"    LDR     R8, [R0, #0x14]! \n"
"    LDR     R7, [R0, #4] \n"
"    CMP     R7, #0 \n"
"    BNE     loc_FF3681B0 \n"
"    B       loc_FF3681A4 \n"

"loc_FF368198:\n"
"    LDR     R1, =0x341 \n"
"    LDR     R0, =0xFF367F90 \n"
"    BL      _DebugAssert \n"

"loc_FF3681A4:\n"
"    MOV     R1, R5 \n"
"    MOV     R0, #7 \n"
"    B       loc_FF368244 \n"

"loc_FF3681B0:\n"
"    LDR     R9, =0x10E44 \n"
"    MOV     R4, R7 \n"

"loc_FF3681B8:\n"
"    LDR     R0, [R5, #4] \n"
"    CMP     R4, #0x1000000 \n"
"    MOVLS   R6, R4 \n"
"    MOVHI   R6, #0x1000000 \n"
"    BIC     R1, R0, #0xFF000000 \n"
"    CMP     R1, #0 \n"
"    BICNE   R0, R0, #0xFF000000 \n"
"    RSBNE   R0, R0, #0x1000000 \n"
"    CMPNE   R6, R0 \n"
"    MOVHI   R6, R0 \n"
"    LDR     R0, [R9, #4] \n"
"    MOV     R2, R6 \n"
"    MOV     R1, R8 \n"
"    BL      fwt_write \n"  // --> Patched. Old value = _write.
"    LDR     R1, [R5, #4] \n"
"    CMP     R6, R0 \n"
"    ADD     R1, R1, R0 \n"
"    STR     R1, [R5, #4] \n"
"    BEQ     loc_FF368218 \n"
"    CMN     R0, #1 \n"
"    LDRNE   R0, =0x9200015 \n"
"    LDREQ   R0, =0x9200005 \n"
"    STR     R0, [R5, #0x10] \n"
"    B       loc_FF3681A4 \n"

"loc_FF368218:\n"
"    SUB     R4, R4, R0 \n"
"    CMP     R4, R7 \n"
"    ADD     R8, R8, R0 \n"
"    MOVCS   R1, #0x36C \n"
"    LDRCS   R0, =0xFF367F90 \n"
"    BLCS    _DebugAssert \n"
"    CMP     R4, #0 \n"
"    BNE     loc_FF3681B8 \n"
"    LDR     R0, [R5] \n"
"    MOV     R1, R5 \n"
"    ADD     R0, R0, #1 \n"

"loc_FF368244:\n"
"    LDMFD   SP!, {R4-R10,LR} \n"
"    B       sub_FF3679F0 \n"
);
}

/*************************************************************/
//** sub_FF367C3C_my @ 0xFF367C3C - 0xFF367C7C, length=17
void __attribute__((naked,noinline)) sub_FF367C3C_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R0, #0x4C] \n"
"    LDR     R5, =0x10E44 \n"
"    TST     R0, #2 \n"
"    SUB     SP, SP, #0x38 \n"
"    BEQ     sub_FF367DA4 \n"
"    LDR     R0, [R5, #4] \n"
"    CMN     R0, #1 \n"
"    BEQ     sub_FF367C90 \n"
"    LDR     R1, [R4, #0x54] \n"
"    LDR     R6, =0x9200003 \n"
"    CMP     R1, #1 \n"
"    BNE     loc_FF367C7C \n"

//mod start
"    LDR R3, =current_write_ignored\n"
"    LDR R3, [R3]\n"
"    CMP R3, #0\n"
"    BNE loc_D\n" // jump over the next block
//mod end

"    BL      sub_FF01CC14 \n"
"    B       sub_FF367C80 \n"

"loc_FF367C7C:\n"
"loc_D:\n"
"    BL      fwt_close \n"  // --> Patched. Old value = _Close.
"    LDR     PC, =0xFF367C80 \n"  // Continue in firmware
);
}
