/*
 * movie_rec.c - auto-generated by CHDK code_gen.
 */
#include "conf.h"

void change_video_tables(int a, int b){
}

void  set_quality(int *x){ // -17 highest; +12 lowest
 if (conf.video_mode) *x=12-((conf.video_quality-1)*(12+17)/(99-1));
}

/*************************************************************/
//** movie_record_task @ 0xFF987088 - 0xFF9871D8, length=85
void __attribute__((naked,noinline)) movie_record_task() {
asm volatile (
"    STMFD   SP!, {R2-R10,LR} \n"
"    LDR     R9, =0x5EE \n"
"    LDR     R8, =0x2710 \n"
"    LDR     R4, =0x7290 \n"
"    MOV     R7, #1 \n"
"    LDR     R6, =0xFF986D90 \n"
"    MOV     R5, #0 \n"

"loc_FF9870A4:\n"
"    LDR     R0, [R4, #0x24] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #4 \n"
"    BL      sub_FF83A460 /*_ReceiveMessageQueue*/ \n"
"    LDR     R0, [R4, #0x2C] \n"
"    CMP     R0, #0 \n"
"    LDRNE   R0, [R4, #0xC] \n"
"    CMPNE   R0, #2 \n"
"    LDRNE   R0, [R4, #0x44] \n"
"    CMPNE   R0, #6 \n"
"    BNE     loc_FF9871BC \n"
"    LDR     R0, [SP, #4] \n"
"    LDR     R1, [R0] \n"
"    SUB     R1, R1, #2 \n"
"    CMP     R1, #0xA \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FF9871BC \n"
"    B       loc_FF987170 \n"
"    B       loc_FF987190 \n"
"    B       loc_FF9871A0 \n"
"    B       loc_FF9871A8 \n"
"    B       loc_FF987178 \n"
"    B       loc_FF9871B0 \n"
"    B       loc_FF987180 \n"
"    B       loc_FF9871BC \n"
"    B       loc_FF9871B8 \n"
"    B       loc_FF987140 \n"
"    B       loc_FF987114 \n"

"loc_FF987114:\n"
"    STR     R5, [R4, #0x40] \n"
"    STR     R5, [R4, #0x30] \n"
"    STR     R5, [R4, #0x34] \n"
"    STRH    R5, [R4, #6] \n"
"    STR     R6, [R4, #0xB4] \n"
"    LDR     R0, [R4, #0xC] \n"
"    ADD     R0, R0, #1 \n"
"    STR     R0, [R4, #0xC] \n"
"    MOV     R0, #6 \n"
"    STR     R0, [R4, #0x44] \n"
"    B       loc_FF98715C \n"

"loc_FF987140:\n"
"    STR     R5, [R4, #0x40] \n"
"    STR     R5, [R4, #0x30] \n"
"    STR     R6, [R4, #0xB4] \n"
"    LDR     R0, [R4, #0xC] \n"
"    ADD     R0, R0, #1 \n"
"    STR     R0, [R4, #0xC] \n"
"    STR     R7, [R4, #0x44] \n"

"loc_FF98715C:\n"
"    LDR     R2, =0xFF985FA4 \n"
"    LDR     R1, =0xB3E0C \n"
"    LDR     R0, =0xFF9860A0 \n"
"    BL      sub_FF8532D0 \n"
"    B       loc_FF9871BC \n"

"loc_FF987170:\n"

"    BL      unlock_optical_zoom\n"     // added to unlock the zoom

"    BL      sub_FF986EA0 \n"
"    B       loc_FF9871BC \n"

"loc_FF987178:\n"
"    BL      sub_FF9867F8 \n"

"    LDR     R0, =video_compression_rate\n" //added
"    BL      set_quality\n"                 //added

"    B       loc_FF9871BC \n"

"loc_FF987180:\n"
"    LDR     R1, [R0, #0x18] \n"
"    LDR     R0, [R0, #4] \n"
"    BL      sub_FFAFFF84 \n"
"    B       loc_FF9871BC \n"

"loc_FF987190:\n"
"    LDR     R0, [R4, #0x44] \n"
"    CMP     R0, #5 \n"
"    STRNE   R7, [R4, #0x34] \n"
"    B       loc_FF9871BC \n"

"loc_FF9871A0:\n"
"    BL      sub_FF986440 \n"
"    B       loc_FF9871BC \n"

"loc_FF9871A8:\n"
"    BL      sub_FF9860EC \n"
"    B       loc_FF9871BC \n"

"loc_FF9871B0:\n"
"    BL      sub_FF985F30 \n"
"    B       loc_FF9871BC \n"

"loc_FF9871B8:\n"
"    BL      sub_FF9875E4 \n"

"loc_FF9871BC:\n"
"    LDR     R1, [SP, #4] \n"
"    STR     R5, [R1] \n"
"    LDR     R3, =0xFF985D8C \n"
"    MOV     R2, R8 \n"
"    STR     R9, [SP] \n"
"    LDR     R0, [R4, #0x28] \n"
"    BL      sub_FF83ADB4 /*_PostMessageQueueStrictly*/ \n"
"    B       loc_FF9870A4 \n"
);
}
