#include "conf.h"

void change_video_tables(int a, int b){
}


void  set_quality(int *x){ // -17 highest; +12 lowest
 if (conf.video_mode) *x=12-((conf.video_quality-1)*(12+17)/(99-1));
}


void __attribute__((naked,noinline)) movie_record_task(){
 asm volatile(
"    STMFD   SP!, {R2-R8,LR} \n" 
"    LDR     R7, =0x2710 \n" 
"    LDR     R4, =0x67A8 \n" 
"    MOV     R6, #0 \n" 
"    MOV     R5, #1 \n" 
"loc_FF94AF1C:\n"
"    LDR     R0, [R4, #0x18] \n" 
"    MOV     R2, #0 \n" 
"    ADD     R1, SP, #4 \n" 
"    BL      sub_FF837F08 \n" 
"    LDR     R0, [R4, #0x20] \n" 
"    CMP     R0, #0 \n" 
"    BNE     loc_FF94AFEC \n" 
"    LDR     R0, [SP, #4] \n" 
"    LDR     R1, [R0] \n" 
"    SUB     R1, R1, #2 \n" 
"    CMP     R1, #9 \n" 
"    ADDLS   PC, PC, R1, LSL #2 \n" 
"    B       loc_FF94AFEC \n" 
"    B       loc_FF94AFA0 \n" 
"    B       loc_FF94AFC0 \n" 
"    B       loc_FF94AFD0 \n" 
"    B       loc_FF94AFD8 \n" 
"    B       loc_FF94AFA8 \n" 
"    B       loc_FF94AFE0 \n" 
"    B       loc_FF94AFB0 \n" 
"    B       loc_FF94AFEC \n" 
"    B       loc_FF94AFE8 \n" 
"    B       loc_FF94AF78 \n" 
"loc_FF94AF78:\n"
"    LDR     R0, =0xFF94AC1C \n" 
"    STR     R6, [R4, #0x34] \n" 
"    STR     R0, [R4, #0x9C] \n" 
"    LDR     R2, =0xFF94A150 \n" 
"    LDR     R1, =0x7B1D0 \n" 
"    LDR     R0, =0xFF94A234 \n" 
"    STR     R6, [R4, #0x24] \n" 
"    BL      sub_FF8E1A58 \n" 
"    STR     R5, [R4, #0x38] \n" 
"    B       loc_FF94AFEC \n" 
"loc_FF94AFA0:\n"
"	BL      unlock_optical_zoom\n" //  +
"    BL      sub_FF94AD24 \n" 
"    B       loc_FF94AFEC \n" 
"loc_FF94AFA8:\n"
"	BL	sub_FF94A89C_my \n"   //--------->   
"    B       loc_FF94AFEC \n" 
"loc_FF94AFB0:\n"
"    LDR     R1, [R0, #0x18] \n" 
"    LDR     R0, [R0, #4] \n" 
"    BL      sub_FFA967A4 \n" 
"    B       loc_FF94AFEC \n" 
"loc_FF94AFC0:\n"
"    LDR     R0, [R4, #0x38] \n" 
"    CMP     R0, #5 \n" 
"    STRNE   R5, [R4, #0x28] \n" 
"    B       loc_FF94AFEC \n" 
"loc_FF94AFD0:\n"
"    BL      sub_FF94A59C \n" 
"    B       loc_FF94AFEC \n" 
"loc_FF94AFD8:\n"
"    BL      sub_FF94A280 \n" 
"    B       loc_FF94AFEC \n" 
"loc_FF94AFE0:\n"
"    BL      sub_FF94A0DC \n" 
"    B       loc_FF94AFEC \n" 
"loc_FF94AFE8:\n"
"    BL      sub_FF94B158 \n" 
"loc_FF94AFEC:\n"
"    LDR     R1, [SP, #4] \n" 
"    MOV     R3, #0x460 \n" 
"    STR     R6, [R1] \n" 
"    STR     R3, [SP] \n" 
"    LDR     R0, [R4, #0x1C] \n" 
"    LDR     R3, =0xFF949F3C \n" 
"    MOV     R2, R7 \n" 
"    BL      sub_FF83885C \n" 
"    B       loc_FF94AF1C \n"     
 );
}


void __attribute__((naked,noinline)) sub_FF94A89C_my(){
 asm volatile(
"    STMFD   SP!, {R4-R8,LR} \n" 
"    SUB     SP, SP, #0x40 \n" 
"    MOV     R7, #0 \n" 
"    LDR     R6, =0x67A8 \n" 
"    MOV     R4, R0 \n" 
"    STR     R7, [SP, #0x30] \n" 
"    STR     R7, [SP, #0x28] \n" 
"    LDR     R0, [R6, #0x38] \n" 
"    MOV     R8, #4 \n" 
"    CMP     R0, #3 \n" 
"    STREQ   R8, [R6, #0x38] \n" 
"    LDR     R0, [R6, #0x9C] \n" 
"    BLX     R0 \n" 
"    LDR     R0, [R6, #0x38] \n" 
"    CMP     R0, #4 \n" 
"    BNE     loc_FF94AA0C \n" 
"    ADD     R3, SP, #0x28 \n" 
"    ADD     R2, SP, #0x2C \n" 
"    ADD     R1, SP, #0x30 \n" 
"    ADD     R0, SP, #0x34 \n" 
"    BL      sub_FFA96840 \n" 
"    CMP     R0, #0 \n" 
"    MOV     R5, #1 \n" 
"    BNE     loc_FF94A918 \n" 
"    LDR     R1, [R6, #0x28] \n" 
"    CMP     R1, #1 \n" 
"    BNE     loc_FF94AA14 \n" 
"    LDR     R1, [R6, #0x4C] \n" 
"    LDR     R2, [R6, #0x3C] \n" 
"    CMP     R1, R2 \n" 
"    BCC     loc_FF94AA14 \n" 
"loc_FF94A918:\n"
"    CMP     R0, #0x80000001 \n" 
"    STREQ   R8, [R6, #0x50] \n" 
"    BEQ     loc_FF94A950 \n" 
"    CMP     R0, #0x80000003 \n" 
"    STREQ   R5, [R6, #0x50] \n" 
"    BEQ     loc_FF94A950 \n" 
"    CMP     R0, #0x80000005 \n" 
"    MOVEQ   R0, #2 \n" 
"    BEQ     loc_FF94A94C \n" 
"    CMP     R0, #0x80000007 \n" 
"    STRNE   R7, [R6, #0x50] \n" 
"    BNE     loc_FF94A950 \n" 
"    MOV     R0, #3 \n" 
"loc_FF94A94C:\n"
"    STR     R0, [R6, #0x50] \n" 
"loc_FF94A950:\n"
"    LDR     R0, =0x7B204 \n" 
"    LDR     R0, [R0, #8] \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF94A968 \n" 
"    BL      sub_FF85CDE0 \n" 
"    B       loc_FF94A96C \n" 
"loc_FF94A968:\n"
"    BL      sub_FF94A0DC \n" 
"loc_FF94A96C:\n"
"    LDR     R0, [R4, #0x1C] \n" 
"    ADD     R4, SP, #0x18 \n" 
"    ADD     R3, SP, #0x38 \n" 
"    MVN     R2, #1 \n" 
"    MOV     R1, #0 \n" 
"    STMIA   R4, {R0-R3} \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    LDR     R3, [R6, #0x68] \n" 
"    ADD     R1, SP, #0x3C \n" 
"    ADD     R4, SP, #8 \n" 
"    MOV     R0, #0 \n" 
"    STMIA   R4, {R0-R3} \n" 
"    MOV     R3, #0 \n" 
"    MOV     R2, #0x40 \n" 
"    STRD    R2, [SP] \n" 
"    LDR     R3, =0x7B21C \n" 
"    MOV     R2, #0 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA53528 \n" 
"    LDR     R0, [R6, #0x10] \n" 
"    MOV     R1, #0x3E8 \n" 
"    BL      sub_FF838324 \n" 
"    CMP     R0, #9 \n" 
"    BNE     loc_FF94A9DC \n" 
"loc_FF94A9CC:\n"
"    BL      sub_FFA96D14 \n" 
"    MOV     R0, #1 \n" 
"    STR     R5, [R6, #0x38] \n" 
"    B       loc_FF94AB3C \n" 
"loc_FF94A9DC:\n"
"    LDR     R0, [SP, #0x38] \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF94A9F8 \n" 
"loc_FF94A9E8:\n"
"    BL      sub_FFA96D14 \n" 
"    MOV     R0, #1 \n" 
"    STR     R5, [R6, #0x38] \n" 
"    B       loc_FF94AB68 \n" 
"loc_FF94A9F8:\n"
"    MOV     R0, #1 \n" 
"    BL      sub_FFA535D0 \n" 
"    BL      sub_FFA5360C \n" 
"    MOV     R0, #5 \n" 
"    STR     R0, [R6, #0x38] \n" 
"loc_FF94AA0C:\n"
"    ADD     SP, SP, #0x40 \n" 
"    LDMFD   SP!, {R4-R8,PC} \n" 
"loc_FF94AA14:\n"
"    LDR     R12, [SP, #0x30] \n" 
"    CMP     R12, #0 \n" 
"    BEQ     loc_FF94ABC4 \n" 
"    STR     R5, [R6, #0x2C] \n" 
"    LDR     R0, [R6, #0x4C] \n" 
"    LDR     R8, [R4, #0xC] \n" 
"    CMP     R0, #0 \n" 
"    LDRNE   LR, [SP, #0x34] \n" 
"    BNE     loc_FF94AAC0 \n" 
"    LDR     R0, [R4, #0x1C] \n" 
"    LDR     R1, [R4, #0x20] \n" 
"    ADD     R3, SP, #0x38 \n" 
"    MVN     R2, #0 \n" 
"    ADD     LR, SP, #0x18 \n" 
"    STMIA   LR, {R0-R3} \n" 
"    LDR     R0, [SP, #0x28] \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    LDR     R3, [R6, #0x68] \n" 
"    ADD     R1, SP, #0x3C \n" 
"    ADD     LR, SP, #8 \n" 
"    STMIA   LR, {R0-R3} \n" 
"    LDR     R3, [SP, #0x2C] \n" 
"    STR     R12, [SP] \n" 
"    STR     R3, [SP, #4] \n" 
"    LDMIB   R4, {R0,R1} \n" 
"    LDR     R3, [SP, #0x34] \n" 
"    MOV     R2, R8 \n" 
"    BL      sub_FFA53528 \n" 
"    LDR     R0, [R6, #0x10] \n" 
"    MOV     R1, #0x3E8 \n" 
"    BL      sub_FF838324 \n" 
"    CMP     R0, #9 \n" 
"    BEQ     loc_FF94A9CC \n" 
"    LDR     R0, [SP, #0x38] \n" 
"    CMP     R0, #0 \n" 
"    BNE     loc_FF94A9E8 \n" 
"    MOV     R0, #1 \n" 
"    BL      sub_FFA535D0 \n" 
"    LDR     R0, [SP, #0x3C] \n" 
"    LDR     R1, [SP, #0x34] \n" 
"    ADD     LR, R1, R0 \n" 
"    LDR     R1, [SP, #0x30] \n" 
"    SUB     R12, R1, R0 \n" 
"loc_FF94AAC0:\n"
"    LDR     R2, [R6, #0x48] \n" 
"    LDR     R0, [R4, #0x1C] \n" 
"    LDR     R1, [R4, #0x20] \n" 
"    ADD     R3, SP, #0x38 \n" 
"    STR     R0, [SP, #0x18] \n" 
"    STR     R1, [SP, #0x1C] \n" 
"    STR     R3, [SP, #0x24] \n" 
"    STR     R2, [SP, #0x20] \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    LDR     R3, [R6, #0x68] \n" 
"    LDR     R0, [SP, #0x28] \n" 
"    STR     R3, [SP, #0x14] \n" 
"    LDR     R3, [SP, #0x2C] \n" 
"    ADD     R1, SP, #0x3C \n" 
"    STR     R2, [SP, #0x10] \n" 
"    STR     R3, [SP, #4] \n" 
"    STR     R1, [SP, #0xC] \n" 
"    STR     R12, [SP] \n" 
"    STR     R0, [SP, #8] \n" 
"    LDMIB   R4, {R0,R1} \n" 
"    MOV     R3, LR \n" 
"    MOV     R2, R8 \n" 
"    BL      sub_FFA53528 \n" 
"    LDR     R0, [R6, #0x10] \n" 
"    MOV     R1, #0x3E8 \n" 
"    BL      sub_FF838324 \n" 
"    CMP     R0, #9 \n" 
"    BNE     loc_FF94AB50 \n" 
"    BL      sub_FFA96D14 \n" 
"    MOV     R0, #0 \n" 
"    STR     R5, [R6, #0x38] \n" 
"loc_FF94AB3C:\n"
"    BL      sub_FFA535D0 \n" 
"    MOV     R0, #0xC \n" 
"    BL      sub_FF8835B4 \n" 
"    MOV     R0, #0x90000 \n" 
"    B       loc_FF94AB78 \n" 
"loc_FF94AB50:\n"
"    LDR     R0, [SP, #0x38] \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF94AB8C \n" 
"    BL      sub_FFA96D14 \n" 
"    MOV     R0, #0 \n" 
"    STR     R5, [R6, #0x38] \n" 
"loc_FF94AB68:\n"
"    BL      sub_FFA535D0 \n" 
"    MOV     R0, #0xC \n" 
"    BL      sub_FF8835B4 \n" 
"    MOV     R0, #0xA0000 \n" 
"loc_FF94AB78:\n"
"    BL      sub_FF890C4C \n" 
"    LDR     R1, [R6, #0x8C]! \n" 
"    LDR     R0, [R6, #0xC] \n" 
"    BLX     R1 \n" 
"    B       loc_FF94AA0C \n" 
"loc_FF94AB8C:\n"
"    MOV     R0, #0 \n" 
"    BL      sub_FFA535D0 \n" 
"    LDR     R0, [SP, #0x34] \n" 
"    LDR     R1, [SP, #0x3C] \n" 
"    BL      sub_FFA96A6C \n" 
"    LDR     R0, [R6, #0x48] \n" 
"    LDR     R3, =0x6810 \n" 
"    ADD     R1, R0, #1 \n" 
"    STR     R1, [R6, #0x48] \n" 
"    STR     R3, [SP] \n" 
"    LDR     R0, [SP, #0x3C] \n" 
"    SUB     R3, R3, #4 \n" 
"    MOV     R2, #0xF \n" 
"    BL      sub_FFA94BF0 \n" 
              
"	LDR     R0, =0x6810-4\n"  // -<----   -4 //+
"	BL      set_quality\n"                  // +
"loc_FF94ABC4:\n"
"    LDR     R0, [R6, #0x4C] \n" 
"    ADD     R0, R0, #1 \n" 
"    STR     R0, [R6, #0x4C] \n" 
"    LDR     R1, [R6, #0x74] \n" 
"    MUL     R0, R1, R0 \n" 
"    LDR     R1, [R6, #0x70] \n" 
"    BL      sub_FFB3C89C \n" 
"    MOV     R4, R0 \n" 
"    BL      sub_FFA96D4C \n" 
"    LDR     R1, [R6, #0x6C] \n" 
"    CMP     R1, R4 \n" 
"    BNE     loc_FF94AC00 \n" 
"    LDR     R0, [R6, #0x30] \n" 
"    CMP     R0, #1 \n" 
"    BNE     loc_FF94AC14 \n" 
"loc_FF94AC00:\n"
"    LDR     R1, [R6, #0x80] \n" 
"    MOV     R0, R4 \n" 
"    BLX     R1 \n" 
"    STR     R4, [R6, #0x6C] \n" 
"    STR     R7, [R6, #0x30] \n" 
"loc_FF94AC14:\n"
"    STR     R7, [R6, #0x2C] \n" 
"    B       loc_FF94AA0C \n" 
"    BX      LR \n"     
 );
}


