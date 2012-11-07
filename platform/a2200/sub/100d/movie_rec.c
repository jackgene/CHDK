#include "conf.h"

void change_video_tables(int a, int b) {}

// Not sure if the values are right
void  set_quality(int *x) { // -17 highest; +12 lowest
	if (conf.video_mode) 
		*x=12-((conf.video_quality-1)*(12+17)/(99-1));
}

//** movie_record_task  @ 0xFF964148 

void __attribute__((naked,noinline)) movie_record_task(  ) { 
asm volatile (
"    STMFD   SP!, {R2-R10,LR} \n" 
"    LDR     R6, =0xFF963678 \n" 
//"	 LDR	 R7, =0xFF963B70 \n"
"	 LDR	 R7, =sub_FF963B70_my \n"	// patched
"    LDR     R4, =0x65A8 \n" 
"    LDR     R9, =0x67F \n" 
"    LDR     R10, =0x2710 \n" 
"    MOV     R8, #1 \n" 
"    MOV     R5, #0 \n" 
"loc_FF964168:\n"
"    LDR     R0, [R4, #0x24] \n" 
"    MOV     R2, #0 \n" 
"    ADD     R1, SP, #4 \n" 
"    BL      sub_FF839B6C \n" 
"    LDR     R0, [R4, #0x2C] \n" 
"    CMP     R0, #0 \n" 
"    LDRNE   R0, [R4, #0xC] \n" 
"    CMPNE   R0, #2 \n" 
"    LDRNE   R0, [R4, #0x44] \n" 
"    CMPNE   R0, #6 \n" 
"    BNE     loc_FF96428C \n" 
"    LDR     R0, [SP, #4] \n" 
"    LDR     R1, [R0] \n" 
"    SUB     R1, R1, #2 \n" 
"    CMP     R1, #0xB \n" 
"    ADDCC   PC, PC, R1, LSL #2 \n" 
"    B       loc_FF96428C \n" //Jump Table
"    B       loc_FF96423C \n" //(01)
"    B       loc_FF964260 \n" //(02)
"    B       loc_FF964270 \n" //(03)
"    B       loc_FF964278 \n" //(04)
"    B       loc_FF964244 \n" //(05)
"    B       loc_FF964280 \n" //(06)
"    B       loc_FF964250 \n" //(07)
"    B       loc_FF96428C \n" //(08)
"    B       loc_FF964288 \n" //(09)
"    B       loc_FF964208 \n" //(10)
"    B       loc_FF9641D8 \n" //(11)
"loc_FF9641D8:\n" //Jump Table entry 11
"    STR     R5, [R4, #0x40] \n" 
"    STR     R5, [R4, #0x30] \n" 
"    STR     R5, [R4, #0x34] \n" 
"    STRH    R5, [R4, #6] \n" 
"    STR     R6, [R4, #0xB4] \n"
"    STR     R7, [R4, #0xCC] \n"
"    LDR     R0, [R4, #0xC] \n" 
"    ADD     R0, R0, #1 \n" 
"    STR     R0, [R4, #0xC] \n" 
"    MOV     R0, #6 \n" 
"    STR     R0, [R4, #0x44] \n" 
"    B       loc_FF964228 \n"
"loc_FF964208:\n" //Jump Table entry 10
"    STR     R5, [R4, #0x40] \n" 
"    STR     R5, [R4, #0x30] \n" 
"    STR     R6, [R4, #0xB4] \n" 
"    STR     R7, [R4, #0xCC] \n" 
"    LDR     R0, [R4, #0xC] \n" 
"    ADD     R0, R0, #1 \n" 
"    STR     R0, [R4, #0xC] \n" 
"    STR     R8, [R4, #0x44] \n" 
"loc_FF964228:\n"
"    LDR     R2, =0xFF962E94 \n" 
"    LDR     R1, =0xAC448 \n" 
"    LDR     R0, =0xFF962FA8 \n" 
"    BL      sub_FF852C0C \n" 
"    B       loc_FF96428C \n" 
"loc_FF96423C:\n" //Jump Table entry 01
"	 BL		 unlock_optical_zoom \n"		// added
"    BL      sub_FF9637D0 \n" 
"    B       loc_FF96428C \n" 
"loc_FF964244:\n" //Jump Table entry 05
"    LDR     R1, [R4, #0xCC] \n" 
"    BLX     R1 \n" 
"    B       loc_FF96428C \n" 
"loc_FF964250:\n" //Jump Table entry 07
"    LDR     R1, [R0, #0x18] \n" 
"    LDR     R0, [R0, #4] \n" 
"    BL      sub_FFAA6D1C \n" 
"    B       loc_FF96428C \n" 
"loc_FF964260:\n" //Jump Table entry 02
"    LDR     R0, [R4, #0x44] \n" 
"    CMP     R0, #5 \n" 
"    STRNE   R8, [R4, #0x34] \n" 
"    B       loc_FF96428C \n" 
"loc_FF964270:\n" //Jump Table entry 03
"    BL      sub_FF963338 \n" 
"    B       loc_FF96428C \n" 
"loc_FF964278:\n" //Jump Table entry 04
"    BL      sub_FF962FF4 \n" 
"    B       loc_FF96428C \n" 
"loc_FF964280:\n" //Jump Table entry 06
"    BL      sub_FF962E20 \n" 
"    B       loc_FF96428C \n" 
"loc_FF964288:\n" //Jump Table entry 09
"    BL      sub_FF9646CC \n" 
"loc_FF96428C:\n"
"    LDR     R1, [SP, #4] \n" 
"    LDR     R3, =0xFF962C68 \n"
"    STR     R5, [R1] \n" 
"    STR     R9, [SP] \n" 
"    LDR     R0, [R4, #0x28] \n" 
"    MOV     R2, R10 \n" 
"    BL      sub_FF83A4E4 \n" 
"    B       loc_FF964168 \n"
	);
}


//** sub_FF963B70_my  @ 0xFF963B70 

void __attribute__((naked,noinline)) sub_FF963B70_my(  ) { 
asm volatile (
"    STMFD   SP!, {R4-R11,LR} \n" 
"    SUB     SP, SP, #0x64 \n" 
"    MOV     R9, #0 \n" 
"    LDR     R6, =0x65A8 \n" 
"    STR     R9, [SP, #0x54] \n" 
"    STR     R9, [SP, #0x4C] \n" 
"    STR     R9, [R6, #0xB8] \n" 
"    STR     R9, [R6, #0xBC] \n" 
"    STR     R9, [R6, #0xC0] \n" 
"    MOV     R4, R0 \n" 
"    STR     R9, [R6, #0xC4] \n" 
"    LDR     R0, [R6, #0x44] \n" 
"    MOV     R11, #4 \n" 
"    CMP     R0, #3 \n" 
"    STREQ   R11, [R6, #0x44] \n" 
"    LDR     R0, [R6, #0xB4] \n" 
"    MOV     R8, R9 \n" 
"    MOV     R5, #1 \n" 
"    MOV     R7, R9 \n" 
"    BLX     R0 \n" 
"    LDR     R0, [R6, #0x44] \n" 
"    CMP     R0, #6 \n" 
"    BEQ     loc_FF963BE0 \n" 
"    LDR     R1, [R6, #0xC] \n" 
"    CMP     R1, #2 \n" 
"    BNE     loc_FF963C08 \n" 
"    CMP     R0, #5 \n" 
"    BEQ     loc_FF963C18 \n" 
"loc_FF963BE0:\n"
"    LDR     R2, =0xFF963A44 \n" 
"    LDR     R1, =0xFF963AA8 \n" 
"    LDR     R0, =0xFF963B0C \n" 
"    MOV     R7, #1 \n" 
"    ADD     R3, SP, #0x34 \n" 
"    BL      sub_FF853A2C \n" 
"    LDR     R0, [R6, #0x44] \n" 
"    CMP     R0, #4 \n" 
"    MOVNE   R5, #0 \n" 
"    B       loc_FF963C28 \n" 
"loc_FF963C08:\n"
"    CMP     R0, #4 \n" 
"    BEQ     loc_FF963C28 \n" 
"    CMP     R1, #2 \n" 
"    BNE     loc_FF963C20 \n" 
"loc_FF963C18:\n"
"    MOV     R0, #0 \n" 
"    BL      sub_FF853A38 \n" 
"loc_FF963C20:\n"
"    ADD     SP, SP, #0x64 \n" 
"    LDMFD   SP!, {R4-R11,PC} \n" 
"loc_FF963C28:\n"
"    LDRH    R0, [R6, #6] \n" 
"    CMP     R0, #3 \n" 
"    BNE     loc_FF963C48 \n" 
"    LDR     R0, [R6, #0x6C] \n" 
"    LDR     R1, [R6, #0xC8] \n" 
"    BL      sub_FFB512D0 \n" 
"    CMP     R1, #0 \n" 
"    MOVNE   R5, #0 \n" 
"loc_FF963C48:\n"
"    LDR     R0, [R6, #0x44] \n" 
"    CMP     R0, #6 \n" 
"    CMPNE   R0, #1 \n" 
"    CMPNE   R0, #3 \n" 
"    BNE     loc_FF963C8C \n" 
"    CMP     R7, #1 \n" 
"    CMPEQ   R5, #0 \n" 
"    BNE     loc_FF963C8C \n" 
"    BL      sub_FF853A30 \n" 
"    LDR     R0, [R6, #0x18] \n" 
"    MOV     R1, #0x3E8 \n" 
"    BL      sub_FF839F88 \n" 
"    CMP     R0, #9 \n" 
"    BNE     loc_FF9640C4 \n" 
"    MOV     R0, #0x90000 \n" 
"    BL      sub_FF88FC8C \n" 
"    B       loc_FF963C20 \n" 
"loc_FF963C8C:\n"
"    CMP     R5, #1 \n" 
"    MOV     R10, #1 \n" 
"    BNE     loc_FF963CB4 \n" 
"    ADD     R3, SP, #0x4C \n" 
"    ADD     R2, SP, #0x50 \n" 
"    ADD     R1, SP, #0x54 \n" 
"    ADD     R0, SP, #0x58 \n" 
"    BL      sub_FFAA6DDC \n" 
"    MOVS    R9, R0 \n" 
"    BNE     loc_FF963CD0 \n" 
"loc_FF963CB4:\n"
"    LDR     R0, [R6, #0x34] \n" 
"    CMP     R0, #1 \n" 
"    BNE     loc_FF963E40 \n" 
"    LDR     R0, [R6, #0x6C] \n" 
"    LDR     R1, [R6, #0x48] \n" 
"    CMP     R0, R1 \n" 
"    BCC     loc_FF963E40 \n" 
"loc_FF963CD0:\n"
"    CMP     R9, #0x80000001 \n" 
"    STREQ   R11, [R6, #0x70] \n" 
"    BEQ     loc_FF963D08 \n" 
"    CMP     R9, #0x80000003 \n" 
"    STREQ   R10, [R6, #0x70] \n" 
"    BEQ     loc_FF963D08 \n" 
"    CMP     R9, #0x80000005 \n" 
"    MOVEQ   R0, #2 \n" 
"    BEQ     loc_FF963D04 \n" 
"    CMP     R9, #0x80000007 \n" 
"    STRNE   R8, [R6, #0x70] \n" 
"    BNE     loc_FF963D08 \n" 
"    MOV     R0, #3 \n" 
"loc_FF963D04:\n"
"    STR     R0, [R6, #0x70] \n" 
"loc_FF963D08:\n"
"    LDR     R0, [R6, #0xC] \n" 
"    CMP     R0, #2 \n" 
"    BNE     loc_FF963D70 \n" 
"    LDR     R0, =0xFF963A38 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA62E00 \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    ADD     R3, SP, #0x5C \n" 
"    STRD    R2, [SP, #0x28] \n" 
"    MOV     R2, #0x18 \n" 
"    ADD     R1, SP, #0x34 \n" 
"    ADD     R0, SP, #0x10 \n" 
"    BL      sub_FFB50FB4 \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    MVN     R3, #1 \n" 
"    ADD     R0, SP, #0x60 \n" 
"    STMEA   SP, {R0-R3} \n" 
"    MOV     R3, #0 \n" 
"    LDR     R0, =0xAC494 \n" 
"    MOV     R2, R3 \n" 
"    MOV     R1, #0x40 \n" 
"    BL      sub_FFA62D4C \n" 
"    B       loc_FF963DC8 \n" 
"loc_FF963D68:\n"
"    MOV     R1, #1 \n" 
"    B       loc_FF964054 \n" 
"loc_FF963D70:\n"
"    BL      sub_FF96479C \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    ADD     R3, SP, #0x5C \n" 
"    MVN     R1, #1 \n" 
"    MOV     R0, #0 \n" 
"    ADD     R5, SP, #0x1C \n" 
"    STMIA   R5, {R0-R3} \n" 
"    LDR     R3, [R4, #0x1C] \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    ADD     R0, SP, #0x60 \n" 
"    ADD     R4, SP, #0xC \n" 
"    STMIA   R4, {R0-R3} \n" 
"    MOV     R3, #0 \n" 
"    MOV     R1, #0x40 \n" 
"    STMEA   SP, {R1,R3} \n" 
"    MOV     R2, #0 \n" 
"    STR     R3, [SP, #8] \n" 
"    LDR     R3, =0xAC494 \n" 
"    MOV     R1, R2 \n" 
"    MOV     R0, R2 \n" 
"    BL      sub_FFA61A58 \n" 
"loc_FF963DC8:\n"
"    LDR     R0, [R6, #0x18] \n" 
"    LDR     R1, [R6, #0x60] \n" 
"    BL      sub_FF839F88 \n" 
"    CMP     R0, #9 \n" 
"    BEQ     loc_FF963D68 \n" 
"    LDR     R0, [SP, #0x5C] \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF963DF0 \n" 
"loc_FF963DE8:\n"
"    MOV     R1, #1 \n" 
"    B       loc_FF96406C \n" 
"loc_FF963DF0:\n"
"    LDR     R0, [R6, #0xC] \n" 
"    MOV     R4, #5 \n" 
"    CMP     R0, #2 \n" 
"    MOV     R0, #1 \n" 
"    BNE     loc_FF963E2C \n" 
"    BL      sub_FFA62DC0 \n" 
"    BL      sub_FFA62DE8 \n" 
"    MOV     R0, #0 \n" 
"    BL      sub_FF853A38 \n" 
"    BL      sub_FF853A48 \n" 
"    STR     R4, [R6, #0x44] \n" 
"    BL      sub_FF96479C \n" 
"    BL      sub_FF853AA4 \n" 
"    STR     R10, [R6, #0x44] \n" 
"    B       loc_FF963E38 \n" 
"loc_FF963E2C:\n"
"    BL      sub_FFA61B08 \n" 
"    BL      sub_FFA61B54 \n" 
"    STR     R4, [R6, #0x44] \n" 
"loc_FF963E38:\n"
"    STR     R8, [R6, #0x34] \n" 
"    B       loc_FF963C20 \n" 
"loc_FF963E40:\n"
"    CMP     R5, #1 \n" 
"    BNE     loc_FF9640BC \n" 
"    STR     R10, [R6, #0x38] \n" 
"    LDR     R0, [R6, #0x6C] \n" 
"    LDR     R11, [R4, #0xC] \n" 
"    CMP     R0, #0 \n" 
"    LDRNE   R9, [SP, #0x58] \n" 
"    LDRNE   R10, [SP, #0x54] \n" 
"    BNE     loc_FF963F8C \n" 
"    LDR     R0, [R6, #0xC] \n" 
"    CMP     R0, #2 \n" 
"    BNE     loc_FF963EE4 \n" 
"    LDR     R0, =0xFF963A38 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA62E00 \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    ADD     R3, SP, #0x5C \n" 
"    STRD    R2, [SP, #0x28] \n" 
"    MOV     R2, #0x18 \n" 
"    ADD     R1, SP, #0x34 \n" 
"    ADD     R0, SP, #0x10 \n" 
"    BL      sub_FFB50FB4 \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    MVN     R3, #0 \n" 
"    ADD     R0, SP, #0x60 \n" 
"    STMEA   SP, {R0-R3} \n" 
"    LDR     R0, [SP, #0x58] \n" 
"    LDR     R1, [SP, #0x54] \n" 
"    LDR     R2, [SP, #0x50] \n" 
"    LDR     R3, [SP, #0x4C] \n" 
"    BL      sub_FFA62D4C \n" 
"    LDR     R0, [R6, #0x18] \n" 
"    LDR     R1, [R6, #0x60] \n" 
"    BL      sub_FF839F88 \n" 
"    CMP     R0, #9 \n" 
"    BEQ     loc_FF963D68 \n" 
"    LDR     R0, =0xFF963754 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA62E00 \n" 
"    B       loc_FF963F4C \n" 
"loc_FF963EE4:\n"
"    LDR     R0, [R4, #0x20] \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    ADD     R3, SP, #0x5C \n" 
"    MVN     R1, #0 \n" 
"    ADD     R9, SP, #0x1C \n" 
"    STMIA   R9, {R0-R3} \n" 
"    LDR     R3, [R4, #0x1C] \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    ADD     R0, SP, #0x60 \n" 
"    ADD     R9, SP, #0xC \n" 
"    STMIA   R9, {R0-R3} \n" 
"    LDR     R1, [SP, #0x50] \n" 
"    LDR     R2, [SP, #0x54] \n" 
"    LDR     R3, [SP, #0x4C] \n" 
"    STMFA   SP, {R1,R3} \n" 
"    STR     R2, [SP] \n" 
"    LDMIB   R4, {R0,R1} \n" 
"    LDR     R3, [SP, #0x58] \n" 
"    MOV     R2, R11 \n" 
"    BL      sub_FFA61A58 \n" 
"    LDR     R0, [R6, #0x18] \n" 
"    LDR     R1, [R6, #0x60] \n" 
"    BL      sub_FF839F88 \n" 
"    CMP     R0, #9 \n" 
"    BEQ     loc_FF963D68 \n" 
"loc_FF963F4C:\n"
"    LDR     R0, [SP, #0x5C] \n" 
"    CMP     R0, #0 \n" 
"    BNE     loc_FF963DE8 \n" 
"    LDR     R0, [R6, #0xC] \n" 
"    CMP     R0, #2 \n" 
"    MOV     R0, #1 \n" 
"    BNE     loc_FF963F70 \n" 
"    BL      sub_FFA62DC0 \n" 
"    B       loc_FF963F74 \n" 
"loc_FF963F70:\n"
"    BL      sub_FFA61B08 \n" 
"loc_FF963F74:\n"
"    STR     R8, [R6, #0xC4] \n" 
"    LDR     R0, [SP, #0x60] \n" 
"    LDR     R1, [SP, #0x58] \n" 
"    ADD     R9, R1, R0 \n" 
"    LDR     R1, [SP, #0x54] \n" 
"    SUB     R10, R1, R0 \n" 
"loc_FF963F8C:\n"
"    LDR     R0, [R6, #0xC] \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    CMP     R0, #2 \n" 
"    ADD     R3, SP, #0x5C \n" 
"    BNE     loc_FF963FE4 \n" 
"    STRD    R2, [SP, #0x28] \n" 
"    MOV     R2, #0x18 \n" 
"    ADD     R1, SP, #0x34 \n" 
"    ADD     R0, SP, #0x10 \n" 
"    BL      sub_FFB50FB4 \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    LDR     R3, [R6, #0x68] \n" 
"    ADD     R0, SP, #0x60 \n" 
"    STMEA   SP, {R0-R3} \n" 
"    LDR     R2, [SP, #0x50] \n" 
"    LDR     R3, [SP, #0x4C] \n" 
"    MOV     R1, R10 \n" 
"    MOV     R0, R9 \n" 
"    BL      sub_FFA62D4C \n" 
"    BL      sub_FF853A30 \n" 
"    B       loc_FF96403C \n" 
"loc_FF963FE4:\n"
"    LDR     R1, [R6, #0x68] \n" 
"    LDR     R0, [R4, #0x20] \n" 
"    STR     R1, [SP, #0x20] \n" 
"    STR     R0, [SP, #0x1C] \n" 
"    STR     R2, [SP, #0x24] \n" 
"    STR     R3, [SP, #0x28] \n" 
"    LDR     R3, [R4, #0x1C] \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    ADD     R0, SP, #0x60 \n" 
"    STR     R2, [SP, #0x14] \n" 
"    LDR     R2, [SP, #0x50] \n" 
"    STR     R1, [SP, #0x10] \n" 
"    STR     R3, [SP, #0x18] \n" 
"    LDR     R3, [SP, #0x4C] \n" 
"    STR     R0, [SP, #0xC] \n" 
"    STMFA   SP, {R2,R3} \n" 
"    STR     R10, [SP] \n" 
"    LDMIB   R4, {R0,R1} \n" 
"    MOV     R3, R9 \n" 
"    MOV     R2, R11 \n" 
"    BL      sub_FFA61A58 \n" 
"loc_FF96403C:\n"
"    LDR     R0, [R6, #0x18] \n" 
"    LDR     R1, [R6, #0x60] \n" 
"    BL      sub_FF839F88 \n" 
"    CMP     R0, #9 \n" 
"    BNE     loc_FF96405C \n" 
"    MOV     R1, #0 \n" 
"loc_FF964054:\n"
"    MOV     R0, #0x90000 \n" 
"    B       loc_FF964070 \n" 
"loc_FF96405C:\n"
"    LDR     R0, [SP, #0x5C] \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF964078 \n" 
"    MOV     R1, #0 \n" 
"loc_FF96406C:\n"
"    MOV     R0, #0xA0000 \n" 
"loc_FF964070:\n"
"    BL      sub_FF9639D8 \n" 
"    B       loc_FF963C20 \n" 
"loc_FF964078:\n"
"    LDR     R0, [R6, #0xC] \n" 
"    CMP     R0, #2 \n" 
"    MOV     R0, #0 \n" 
"    BNE     loc_FF964090 \n" 
"    BL      sub_FFA62DC0 \n" 
"    B       loc_FF964094 \n" 
"loc_FF964090:\n"
"    BL      sub_FFA61B08 \n" 
"loc_FF964094:\n"
"    LDR     R0, [SP, #0x58] \n" 
"    LDR     R1, [SP, #0x60] \n" 
"    BL      sub_FFAA7000 \n" 
"    LDR     R0, [R6, #0x68] \n" 
"    LDR     R3, =0x6630 \n"        // <-0x6630
"    ADD     R1, R0, #1 \n" 
"    STR     R1, [R6, #0x68] \n" 
"    LDR     R0, [SP, #0x60] \n" 
"    SUB     R2, R3, #4 \n"         // <- -4
"    BL      sub_FFAA4DD4 \n" 
"	 LDR	 R0, =0x662C \n"				// added, 6630 - 4
"	 BL		 set_quality \n"				// added
"loc_FF9640BC:\n"
"    CMP     R7, #1 \n" 
"    BNE     loc_FF9640D0 \n" 
"loc_FF9640C4:\n"
"    BL      sub_FF853A34 \n" 
"    MOV     R0, #1 \n" 
"    BL      sub_FF853A38 \n" 
"loc_FF9640D0:\n"
"    CMP     R5, #1 \n" 
"    LDRNEH  R0, [R6, #6] \n" 
"    CMPNE   R0, #3 \n" 
"    BNE     loc_FF963C20 \n" 
"    LDR     R0, [R6, #0x6C] \n" 
"    ADD     R0, R0, #1 \n" 
"    STR     R0, [R6, #0x6C] \n" 
"    LDRH    R1, [R6, #6] \n" 
"    CMP     R1, #3 \n" 
"    LDRNE   R1, [R6, #0x54] \n" 
"    LDREQ   R1, =0x3E9 \n" 
"    MUL     R0, R1, R0 \n" 
"    LDRNE   R1, [R6, #0x50] \n" 
"    LDREQ   R1, =0x1770 \n" 
"    BL      sub_FFB512D0 \n" 
"    MOV     R4, R0 \n" 
"    BL      sub_FFAA7384 \n" 
"    LDR     R0, [R6, #0x8C] \n" 
"    CMP     R0, R4 \n" 
"    BNE     loc_FF96412C \n" 
"    LDR     R0, [R6, #0x3C] \n" 
"    CMP     R0, #1 \n" 
"    BNE     loc_FF964140 \n" 
"loc_FF96412C:\n"
"    LDR     R1, [R6, #0x98] \n" 
"    MOV     R0, R4 \n" 
"    BLX     R1 \n" 
"    STR     R4, [R6, #0x8C] \n" 
"    STR     R8, [R6, #0x3C] \n" 
"loc_FF964140:\n"
"    STR     R8, [R6, #0x38] \n" 
"    B       loc_FF963C20 \n" 
	);
}
