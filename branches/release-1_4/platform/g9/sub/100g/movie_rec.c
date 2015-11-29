/*
 * movie_rec.c - auto-generated by CHDK code_gen.
 */
#include "conf.h"

int *video_quality = &conf.video_quality;
int *video_mode    = &conf.video_mode;

long def_table[48]={
  0x2000,   0x38D,   0x788, 0x5800,  0x9C5,  0x14B8, 0x10000,  0x1C6A,  0x3C45, 0x20000,  0x387A,  0x7813,
 0x25800,  0x422F,  0x8CB6, 0x8000,  0xE35,  0x1E23, 0x10000,  0x1C6A,  0x3C45, 0x12C00,  0x2118,  0x465B,
  0x1CCD,  -0x2E1,  -0x579, 0x4F33, -0x7EB,  -0xF0C,  0xE666, -0x170A, -0x2BC6, 0x1CC39, -0x2F5B, -0x59F0,
 0x21B53, -0x377F, -0x6965, 0x7333, -0xB85, -0x15E3,  0xE666, -0x170A, -0x2BC6, 0x10DAA, -0x1BC0, -0x34B3};

long table[48];

void change_video_tables(int a, int b){
    int i;
    for (i=0;i<48;i++) table[i]=(def_table[i]*a)/b; 
}

long CompressionRateTable[]={0x60, 0x5D, 0x5A, 0x57, 0x54, 0x51, 0x4D, 0x48, 0x42, 0x3B, 0x32, 0x29, 0x22, 0x1D, 0x17, 0x14, 0x10, 0xE, 0xB, 9, 7, 6, 5, 4, 3, 2, 1};

/*************************************************************/
//** movie_record_task @ 0xFF85D4C0 - 0xFF85D5C4, length=66
void __attribute__((naked,noinline)) movie_record_task() {
asm volatile (
"    STMFD   SP!, {R2-R8,LR} \n"
"    LDR     R8, =0x32B \n"
"    LDR     R7, =0x2710 \n"
"    LDR     R4, =0x56D8 \n"
"    MOV     R6, #0 \n"
"    MOV     R5, #1 \n"

"loc_FF85D4D8:\n"
"    LDR     R0, [R4, #0x1C] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #4 \n"
"    BL      sub_FF829FB0 /*_ReceiveMessageQueue*/ \n"
"    LDR     R0, [R4, #0x24] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF85D5A8 \n"
"    LDR     R0, [SP, #4] \n"
"    LDR     R1, [R0] \n"
"    SUB     R1, R1, #2 \n"
"    CMP     R1, #9 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FF85D5A8 \n"
"    B       loc_FF85D55C \n"
"    B       loc_FF85D57C \n"
"    B       loc_FF85D58C \n"
"    B       loc_FF85D594 \n"
"    B       loc_FF85D564 \n"
"    B       loc_FF85D59C \n"
"    B       loc_FF85D56C \n"
"    B       loc_FF85D5A8 \n"
"    B       loc_FF85D5A4 \n"
"    B       loc_FF85D534 \n"

"loc_FF85D534:\n"
"    LDR     R0, =0xFF85D180 \n"
"    STR     R6, [R4, #0x38] \n"
"    STR     R0, [R4, #0xA4] \n"
"    LDR     R0, =0xFF85CABC \n"
"    LDR     R2, =0xFF85C9D8 \n"
"    LDR     R1, =0x1E080 \n"
"    STR     R6, [R4, #0x28] \n"
"    BL      sub_FF83D8B4 \n"
"    STR     R5, [R4, #0x3C] \n"
"    B       loc_FF85D5A8 \n"

"loc_FF85D55C:\n"
"    BL      unlock_optical_zoom\n"
"    BL      sub_FF85D278 \n"
"    B       loc_FF85D5A8 \n"

"loc_FF85D564:\n"
"    BL      sub_FF85CF18_my \n"  // --> Patched. Old value = 0xFF85CF18.
"    B       loc_FF85D5A8 \n"

"loc_FF85D56C:\n"
"    LDR     R1, [R0, #0x10] \n"
"    LDR     R0, [R0, #4] \n"
"    BL      sub_FF940D08 \n"
"    B       loc_FF85D5A8 \n"

"loc_FF85D57C:\n"
"    LDR     R0, [R4, #0x3C] \n"
"    CMP     R0, #5 \n"
"    STRNE   R5, [R4, #0x2C] \n"
"    B       loc_FF85D5A8 \n"

"loc_FF85D58C:\n"
"    BL      sub_FF85CCA8 \n"
"    B       loc_FF85D5A8 \n"

"loc_FF85D594:\n"
"    BL      sub_FF85CB08 \n"
"    B       loc_FF85D5A8 \n"

"loc_FF85D59C:\n"
"    BL      sub_FF85C964 \n"
"    B       loc_FF85D5A8 \n"

"loc_FF85D5A4:\n"
"    BL      sub_FF85D710 \n"

"loc_FF85D5A8:\n"
"    LDR     R1, [SP, #4] \n"
"    STR     R6, [R1] \n"
"    LDR     R3, =0xFF85C768 /*'MovieRecorder.c'*/ \n"
"    MOV     R2, R7 \n"
"    STR     R8, [SP] \n"
"    LDR     R0, [R4, #0x20] \n"
"    BL      sub_FF81BF08 /*_PostMessageQueueStrictly*/ \n"
"    B       loc_FF85D4D8 \n"
);
}

/*************************************************************/
//** sub_FF85CF18_my @ 0xFF85CF18 - 0xFF85D17C, length=154
void __attribute__((naked,noinline)) sub_FF85CF18_my() {
asm volatile (
"    STMFD   SP!, {R4-R9,LR} \n"
"    SUB     SP, SP, #0x3C \n"
"    MOV     R7, #0 \n"
"    LDR     R5, =0x56D8 \n"
"    MOV     R4, R0 \n"
"    STR     R7, [SP, #0x2C] \n"
"    STR     R7, [SP, #0x24] \n"
"    LDR     R0, [R5, #0x3C] \n"
"    MOV     R8, #4 \n"
"    CMP     R0, #3 \n"
"    STREQ   R8, [R5, #0x3C] \n"
"    LDR     R0, [R5, #0xA4] \n"
"    MOV     R6, #0 \n"
"    BLX     R0 \n"
"    LDR     R0, [R5, #0x3C] \n"
"    CMP     R0, #4 \n"
"    BNE     loc_FF85D028 \n"
"    LDRH    R0, [R5, #2] \n"
"    MOV     R9, #1 \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF85CF94 \n"
"    LDRH    R1, [R5, #4] \n"
"    LDR     R0, [R5, #0x4C] \n"
"    MUL     R0, R1, R0 \n"
"    MOV     R1, #0x3E8 \n"
"    BL      sub_FFABECA8 /*__divmod_unsigned_int*/ \n"
"    MOV     R1, R0 \n"
"    LDR     R0, [R5, #0x54] \n"
"    BL      sub_FFABECA8 /*__divmod_unsigned_int*/ \n"
"    CMP     R1, #0 \n"
"    BNE     loc_FF85CFB0 \n"

"loc_FF85CF94:\n"
"    ADD     R3, SP, #0x24 \n"
"    ADD     R2, SP, #0x28 \n"
"    ADD     R1, SP, #0x2C \n"
"    ADD     R0, SP, #0x30 \n"
"    BL      sub_FF940E9C \n"
"    MOVS    R6, R0 \n"
"    BNE     loc_FF85CFCC \n"

"loc_FF85CFB0:\n"
"    LDR     R0, [R5, #0x2C] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF85D030 \n"
"    LDR     R0, [R5, #0x54] \n"
"    LDR     R1, [R5, #0x40] \n"
"    CMP     R0, R1 \n"
"    BCC     loc_FF85D030 \n"

"loc_FF85CFCC:\n"
"    CMP     R6, #0x80000001 \n"
"    STREQ   R8, [R5, #0x58] \n"
"    BEQ     loc_FF85D004 \n"
"    CMP     R6, #0x80000003 \n"
"    STREQ   R9, [R5, #0x58] \n"
"    BEQ     loc_FF85D004 \n"
"    CMP     R6, #0x80000005 \n"
"    MOVEQ   R0, #2 \n"
"    BEQ     loc_FF85D000 \n"
"    CMP     R6, #0x80000007 \n"
"    STRNE   R7, [R5, #0x58] \n"
"    BNE     loc_FF85D004 \n"
"    MOV     R0, #3 \n"

"loc_FF85D000:\n"
"    STR     R0, [R5, #0x58] \n"

"loc_FF85D004:\n"
"    LDR     R0, =0x1E0B0 \n"
"    LDR     R0, [R0, #8] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF85D01C \n"
"    BL      sub_FF84ACE4 \n"
"    B       loc_FF85D020 \n"

"loc_FF85D01C:\n"
"    BL      sub_FF85C964 \n"

"loc_FF85D020:\n"
"    MOV     R0, #5 \n"
"    STR     R0, [R5, #0x3C] \n"

"loc_FF85D028:\n"
"    ADD     SP, SP, #0x3C \n"
"    LDMFD   SP!, {R4-R9,PC} \n"

"loc_FF85D030:\n"
"    LDR     R12, [SP, #0x2C] \n"
"    CMP     R12, #0 \n"
"    BEQ     loc_FF85D128 \n"
"    STR     R9, [R5, #0x30] \n"
"    LDR     R0, [R5, #0x48] \n"
"    CMP     R0, #4 \n"
"    LDRNE   LR, [R4, #0xC] \n"
"    BNE     loc_FF85D070 \n"
"    LDR     R0, [R4, #0xC] \n"
"    LDR     R1, [R4, #8] \n"
"    MOV     R2, R0, LSR#3 \n"
"    MUL     R1, R2, R1 \n"
"    LDR     R2, [R4, #4] \n"
"    SUB     LR, R0, R0, LSR#2 \n"
"    ADD     R1, R2, R1, LSL#1 \n"
"    STR     R1, [R4, #4] \n"

"loc_FF85D070:\n"
"    LDR     R0, [R5, #0x70] \n"
"    LDR     R1, [R4, #0x14] \n"
"    LDR     R2, [R4, #0x18] \n"
"    ADD     R3, SP, #0x34 \n"
"    ADD     R6, SP, #0x14 \n"
"    STMIA   R6, {R0-R3} \n"
"    LDR     R0, [SP, #0x24] \n"
"    LDR     R3, [R5, #0x5C] \n"
"    LDR     R1, [SP, #0x28] \n"
"    ADD     R2, SP, #0x38 \n"
"    ADD     R6, SP, #8 \n"
"    STMIA   R6, {R0,R2,R3} \n"
"    STR     R1, [SP, #4] \n"
"    STR     R12, [SP] \n"
"    LDMIB   R4, {R0,R1} \n"
"    LDR     R3, [SP, #0x30] \n"
"    MOV     R2, LR \n"
"    BL      sub_FF8FBD68 \n"
"    LDR     R0, [R5, #0x14] \n"
"    MOV     R1, #0x3E8 \n"
"    BL      _TakeSemaphore \n"
"    CMP     R0, #9 \n"
"    BNE     loc_FF85D0DC \n"
"    BL      sub_FF941478 \n"
"    MOV     R0, #0x90000 \n"
"    STR     R9, [R5, #0x3C] \n"
"    B       loc_FF85D0F4 \n"

"loc_FF85D0DC:\n"
"    LDR     R0, [SP, #0x34] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF85D0FC \n"
"    BL      sub_FF941478 \n"
"    MOV     R0, #0xA0000 \n"
"    STR     R9, [R5, #0x3C] \n"

"loc_FF85D0F4:\n"
"    BL      sub_FF87347C /*_HardwareDefect_FW*/ \n"
"    B       loc_FF85D028 \n"

"loc_FF85D0FC:\n"
"    BL      sub_FF8FBE2C \n"
"    LDR     R0, [SP, #0x30] \n"
"    LDR     R1, [SP, #0x38] \n"
"    BL      sub_FF941220 \n"
"    LDR     R0, [R5, #0x50] \n"
"    LDR     R1, =0x5748 \n"
"    ADD     R0, R0, #1 \n"
"    STR     R0, [R5, #0x50] \n"
"    LDR     R0, [SP, #0x38] \n"
"    MOV     R2, #0 \n"
"    BL      sub_FF93F040_my \n"  // --> Patched. Old value = 0xFF93F040.

"loc_FF85D128:\n"
"    LDR     R0, [R5, #0x54] \n"
"    ADD     R0, R0, #1 \n"
"    STR     R0, [R5, #0x54] \n"
"    LDR     R1, [R5, #0x7C] \n"
"    MUL     R0, R1, R0 \n"
"    LDR     R1, [R5, #0x78] \n"
"    BL      sub_FFABECA8 /*__divmod_unsigned_int*/ \n"
"    MOV     R4, R0 \n"
"    BL      sub_FF9414B0 \n"
"    LDR     R1, [R5, #0x74] \n"
"    CMP     R1, R4 \n"
"    BNE     loc_FF85D164 \n"
"    LDR     R0, [R5, #0x34] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF85D178 \n"

"loc_FF85D164:\n"
"    LDR     R1, [R5, #0x88] \n"
"    MOV     R0, R4 \n"
"    BLX     R1 \n"
"    STR     R4, [R5, #0x74] \n"
"    STR     R7, [R5, #0x34] \n"

"loc_FF85D178:\n"
"    STR     R7, [R5, #0x30] \n"
"    B       loc_FF85D028 \n"
);
}

/*************************************************************/
//** sub_FF93F040_my @ 0xFF93F040 - 0xFF93F120, length=57
void __attribute__((naked,noinline)) sub_FF93F040_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    LDR     R4, =0xE400 \n"
"    LDR     LR, [R4] \n"
"    LDR     R2, [R4, #8] \n"
"    CMP     LR, #0 \n"
"    LDRNE   R3, [R4, #0xC] \n"
"    MOV     R5, R2 \n"
"    CMPNE   R3, #1 \n"
"    MOVEQ   R2, #0 \n"
"    STREQ   R0, [R4] \n"
"    STREQ   R2, [R4, #0xC] \n"
"    BEQ     loc_FF93F10C \n"
"    LDR     R3, [R4, #4] \n"
"    LDR     R7, =table\n"          // +
"    LDR     R7, =0xFFADC8E8 \n"
"    ADD     R12, R3, R3, LSL#1 \n"
"    LDR     R3, [R7, R12, LSL#2] \n"
"    ADD     R6, R7, #0x60 \n"
"    LDR     R8, [R6, R12, LSL#2] \n"
"    SUB     R3, LR, R3 \n"
"    CMP     R3, #0 \n"
"    SUB     LR, LR, R8 \n"
"    BLE     loc_FF93F0C8 \n"
"    ADD     R12, R7, R12, LSL#2 \n"
"    LDR     LR, [R12, #4] \n"
"    CMP     LR, R3 \n"
"    ADDGE   R2, R2, #1 \n"
"    BGE     loc_FF93F0BC \n"
"    LDR     R12, [R12, #8] \n"
"    CMP     R12, R3 \n"
"    ADDLT   R2, R2, #3 \n"
"    ADDGE   R2, R2, #2 \n"

"loc_FF93F0BC:\n"
"    CMP     R2, #0x1A \n"  // --> Patched. Old value = 0x17.
"    MOVGE   R2, #0x19 \n"  // --> Patched. Old value = 0x16.
"    B       loc_FF93F0FC \n"

"loc_FF93F0C8:\n"
"    CMP     LR, #0 \n"
"    BGE     loc_FF93F0FC \n"
"    ADD     R3, R6, R12, LSL#2 \n"
"    LDR     R12, [R3, #4] \n"
"    CMP     R12, LR \n"
"    SUBLE   R2, R2, #1 \n"
"    BLE     loc_FF93F0F4 \n"
"    LDR     R3, [R3, #8] \n"
"    CMP     R3, LR \n"
"    SUBGT   R2, R2, #3 \n"
"    SUBLE   R2, R2, #2 \n"

"loc_FF93F0F4:\n"
"    CMP     R2, #0 \n"
"    MOVLT   R2, #0 \n"

"loc_FF93F0FC:\n"
"    CMP     R2, R5 \n"
"    STRNE   R2, [R4, #8] \n"
"    MOVNE   R2, #1 \n"
"    STRNE   R2, [R4, #0xC] \n"

"loc_FF93F10C:\n"
"    LDR     R2, =CompressionRateTable \n"  // --> Patched. Old value = 0xFFADC88C.
"    LDR     R3, [R4, #8] \n"
"    LDR     R2, [R2, R3, LSL#2] \n"
//mod start
"    LDR     R3, =video_mode\n"         // +
"    LDR     R3, [R3]\n"                // +
"    LDR     R3, [R3]\n"                // +
"    CMP     R3, #1\n"                  // +
"    LDREQ   R3, =video_quality\n"      // +
"    LDREQ   R3, [R3]\n"                // +
"    LDREQ   R2, [R3]\n"                // +
//mod end
"    STR     R2, [R1] \n"
"    STR     R0, [R4] \n"
"    BL      mute_on_zoom\n"            // +
"    LDMFD   SP!, {R4-R8,PC} \n"
);
}
