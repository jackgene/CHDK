#include "conf.h"

void change_video_tables(int a, int b){
}


void  set_quality(int *x){ // -17 highest; +12 lowest
 if (conf.video_mode) *x=12-((conf.video_quality-1)*(12+17)/(99-1));
}


void __attribute__((naked,noinline)) movie_record_task(){   //ROM:FF867D90
 asm volatile(
                 "STMFD   SP!, {R2-R10,LR}\n"
                 "LDR     R8, =0x423\n"
                 "LDR     R7, =0x2710\n"
                 "LDR     R4, =0x5570\n"
                 "MOV     R6, #0\n"
                 "MOV     R5, #1\n"
				 "ADD     R9, R8, #0x3B\n"
 "loc_FF867DAC:\n"
                 "LDR     R0, [R4,#0x18]\n"
                 "MOV     R2, #0\n"
                 "ADD     R1, SP, #4\n"
                 "BL      sub_FF82759C\n"
                 "LDR     R2, =0xFF866330\n"
                 "LDR     R0, [R4,#0xB4]\n"
                 "MOV     R3, R8\n"
                 "MOV     R1, R7\n"
                 "BL      sub_FF827E98\n"
                 "LDR     R0, [R4,#0x20]\n"
                 "CMP     R0, #0\n"
                 "BNE     loc_FF867EAC\n"
                 "LDR     R0, [SP,#4]\n"
                 "LDR     R1, [R0]\n"
                 "SUB     R1, R1, #2\n"
                 "CMP     R1, #0xB\n"
                 "ADDLS   PC, PC, R1,LSL#2\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867DF4:\n"
                 "B       loc_FF867E54\n"
 "loc_FF867DF8:\n"
                 "B       loc_FF867E6C\n"
 "loc_FF867DFC:\n"
                 "B       loc_FF867E7C\n"
 "loc_FF867E00:\n"
                 "B       loc_FF867E84\n"
 "loc_FF867E04:\n"
                 "B       loc_FF867E5C\n"
 "loc_FF867E08:\n"
                 "B       loc_FF867E8C\n"
 "loc_FF867E0C:\n"
                 "B       loc_FF867E64\n"
 "loc_FF867E10:\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E14:\n"
                 "B       loc_FF867E9C\n"
 "loc_FF867E18:\n"
                 "B       loc_FF867EA4\n"
 "loc_FF867E1C:\n"
                 "B       loc_FF867E94\n"
 "loc_FF867E20:\n"
                 "B       loc_FF867E24\n"
 "loc_FF867E24:\n"
                 "LDR     R0, =0xFF867A40\n"
                 "STR     R6, [R4,#0x34]\n"
                 "STR     R0, [R4,#0x9C]\n"
                 "LDR     R0, =0xFF866864\n"
                 "LDR     R2, =0xFF866868\n"
                 "STR     R0, [R4,#0xA0]\n"
                 "LDR     R0, =0xFF866978\n"
                 "LDR     R1, =0x1CB38\n"
                 "STR     R6, [R4,#0x24]\n"
                 "BL      sub_FF83C8F4\n"
                 "STR     R5, [R4,#0x38]\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E54:\n"
                 "BL      sub_FF867B68\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E5C:\n"
                 "BL      sub_FF867698_my\n"  //--------------->
                 "B       loc_FF867EAC\n"
 "loc_FF867E64:\n"
                 "BL      sub_FF8680D8\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E6C:\n"
                 "LDR     R0, [R4,#0x38]\n"
                 "CMP     R0, #5\n"
                 "STRNE   R5, [R4,#0x28]\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E7C:\n"
                 "BL      sub_FF867350\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E84:\n"
                 "BL      sub_FF867008\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E8C:\n"
                 "BL      sub_FF8667F0\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E94:\n"
                 "BL      sub_FF868040\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867E9C:\n"
                 "BL      sub_FF866ECC\n"
                 "B       loc_FF867EAC\n"
 "loc_FF867EA4:\n"
                 "BL      sub_FF866DB0\n"
                 "STR     R5, [R4,#0xDC]\n"
 "loc_FF867EAC:\n"
                 "LDR     R1, [SP,#4]\n"
                 "LDR     R3, =0xFF866330\n"
                 "STR     R6, [R1]\n"
                 "STR     R9, [SP]\n"
                 "LDR     R0, [R4,#0x1C]\n"
                 "MOV     R2, R7\n"
                 "BL      sub_FF827EF0\n"
                 "LDR     R0, [R4,#0xB4]\n"
                 "BL      sub_FF827A88\n"
                 "B       loc_FF867DAC\n"
 );
}


void __attribute__((naked,noinline)) sub_FF867698_my(){ 
 asm volatile(
                 "STMFD   SP!, {R4-R8,LR}\n"
                 "SUB     SP, SP, #0x48\n"
                 "MOV     R7, #0\n"
                 "LDR     R6, =0x5570\n"
                 "MOV     R4, R0\n"
                 "STR     R7, [SP,#0x38]\n"
                 "STR     R7, [SP,#0x30]\n"
                 "LDR     R0, [R6,#0x38]\n"
                 "CMP     R0, #3\n"
                 "MOVEQ   R0, #4\n"
                 "STREQ   R0, [R6,#0x38]\n"
                 "LDR     R0, [R6,#0x9C]\n"
                 "BLX     R0\n"
                 "LDR     R0, [R6,#0x38]\n"
                 "CMP     R0, #4\n"
                 "BNE     loc_FF86779C\n"
                 "ADD     R3, SP, #0x30\n"
                 "ADD     R2, SP, #0x34\n"
                 "ADD     R1, SP, #0x38\n"
                 "ADD     R0, SP, #0x3C\n"
                 "BL      sub_FF959B98\n"
                 "CMP     R0, #0\n"
                 "MOV     R5, #1\n"
                 "BNE     loc_FF867714\n"
                 "LDR     R1, [R6,#0x28]\n"
                 "CMP     R1, #1\n"
                 "BNE     loc_FF8677B0\n"
                 "LDR     R1, [R6,#0x4C]\n"
                 "LDR     R2, [R6,#0x3C]\n"
                 "CMP     R1, R2\n"
                 "BCC     loc_FF8677B0\n"
 "loc_FF867714:\n"
                 "BL      sub_FF8669B8\n"
                 "BL      sub_FF86802C\n"
                 "LDR     R0, [R4,#0x1C]\n"
                 "LDR     R1, [R4,#0x20]\n"
                 "ADD     R3, SP, #0x40\n"
                 "MVN     R2, #1\n"
                 "ADD     R7, SP, #0x18\n"
                 "STMIA   R7, {R0-R3}\n"
                 "LDR     R2, [R6,#0x64]\n"
                 "LDR     R3, [R6,#0x68]\n"
                 "MOV     R0, #0\n"
                 "ADD     R1, SP, #0x44\n"
                 "ADD     R7, SP, #8\n"
                 "STMIA   R7, {R0-R3}\n"
                 "MOV     R3, #0\n"
                 "MOV     R2, #0x40\n"
                 "STRD    R2, [SP]\n"
                 "LDMIB   R4, {R0,R1}\n"
                 "LDR     R3, =0x1CBC4\n"
                 "MOV     R2, R8\n"
                 "BL      sub_FF91071C\n"
                 "LDR     R0, [R6,#0x10]\n"
                 "MOV     R1, #0x3E8\n"
                 "BL      sub_FF8279B8\n"
                 "CMP     R0, #9\n"
                 "BEQ     loc_FF867834\n"
                 "LDR     R0, [SP,#0x40]\n"
                 "CMP     R0, #0\n"
                 "BNE     loc_FF867850\n"
                 "MOV     R0, #1\n"
                 "BL      sub_FF9107C4\n"
                 "BL      sub_FF910800\n"
                 "MOV     R0, #5\n"
                 "STR     R0, [R6,#0x38]\n"
 "loc_FF86779C:\n"
                 "ADD     SP, SP, #0x48\n"
                 "LDMFD   SP!, {R4-R8,PC}\n"
 "loc_FF8677A4:\n"
                 "BL      sub_FF88581C\n"
                 "MOV     R0, #1\n"
                 "B       loc_FF867900\n"
 "loc_FF8677B0:\n"
                 "LDR     R12, [SP,#0x38]\n"
                 "CMP     R12, #0\n"
                 "BEQ     loc_FF8679E8\n"
                 "STR     R5, [R6,#0x2C]\n"
                 "LDR     R0, [R6,#0x4C]\n"
                 "LDR     R8, [R4,#0xC]\n"
                 "CMP     R0, #0\n"
                 "LDRNE   LR, [SP,#0x3C]\n"
                 "BNE     loc_FF86787C\n"
                 "LDR     R0, [R4,#0x1C]\n"
                 "LDR     R1, [R4,#0x20]\n"
                 "ADD     R3, SP, #0x40\n"
                 "MVN     R2, #0\n"
                 "ADD     LR, SP, #0x18\n"
                 "STMIA   LR, {R0-R3}\n"
                 "LDR     R0, [SP,#0x30]\n"
                 "LDR     R2, [R6,#0x64]\n"
                 "LDR     R3, [R6,#0x68]\n"
                 "ADD     R1, SP, #0x44\n"
                 "ADD     LR, SP, #8\n"
                 "STMIA   LR, {R0-R3}\n"
                 "LDR     R3, [SP,#0x34]\n"
                 "STR     R12, [SP]\n"
                 "STR     R3, [SP,#4]\n"
                 "LDMIB   R4, {R0,R1}\n"
                 "LDR     R3, [SP,#0x3C]\n"
                 "MOV     R2, R8\n"
                 "BL      sub_FF91071C\n"
                 "LDR     R0, [R6,#0x10]\n"
                 "MOV     R1, #0x3E8\n"
                 "BL      sub_FF8279B8\n"
                 "CMP     R0, #9\n"
                 "BNE     loc_FF867844\n"
 "loc_FF867834:\n"
                 "BL      sub_FF95A064\n"
                 "MOV     R0, #0x90000\n"
                 "STR     R5, [R6,#0x38]\n"
                 "B       loc_FF8677A4\n"
 "loc_FF867844:\n"
                 "LDR     R0, [SP,#0x40]\n"
                 "CMP     R0, #0\n"
                 "BEQ     loc_FF867860\n"
 "loc_FF867850:\n"
                 "BL      sub_FF95A064\n"
                 "MOV     R0, #0xA0000\n"
                 "STR     R5, [R6,#0x38]\n"
                 "B       loc_FF8677A4\n"
 "loc_FF867860:\n"
                 "MOV     R0, #1\n"
                 "BL      sub_FF9107C4\n"
                 "LDR     R0, [SP,#0x44]\n"
                 "LDR     R1, [SP,#0x3C]\n"
                 "ADD     LR, R1, R0\n"
                 "LDR     R1, [SP,#0x38]\n"
                 "SUB     R12, R1, R0\n"
 "loc_FF86787C:\n"
                 "LDR     R2, [R6,#0x48]\n"
                 "LDR     R0, [R4,#0x1C]\n"
                 "LDR     R1, [R4,#0x20]\n"
                 "ADD     R3, SP, #0x40\n"
                 "STR     R1, [SP,#0x1C]\n"
                 "STR     R0, [SP,#0x18]\n"
                 "STR     R3, [SP,#0x24]\n"
                 "STR     R2, [SP,#0x20]\n"
                 "LDR     R2, [R6,#0x64]\n"
                 "LDR     R3, [R6,#0x68]\n"
                 "ADD     R1, SP, #0x44\n"
                 "STR     R1, [SP,#0xC]\n"
                 "STR     R3, [SP,#0x14]\n"
                 "LDR     R3, [SP,#0x34]\n"
                 "LDR     R0, [SP,#0x30]\n"
                 "STR     R2, [SP,#0x10]\n"
                 "STR     R3, [SP,#4]\n"
                 "STR     R12, [SP]\n"
                 "STR     R0, [SP,#8]\n"
                 "LDMIB   R4, {R0,R1}\n"
                 "MOV     R3, LR\n"
                 "MOV     R2, R8\n"
                 "BL      sub_FF91071C\n"
                 "LDR     R0, [R6,#0x10]\n"
                 "MOV     R1, #0x3E8\n"
                 "BL      sub_FF8279B8\n"
                 "CMP     R0, #9\n"
                 "BNE     loc_FF867908\n"
                 "BL      sub_FF95A064\n"
                 "MOV     R0, #0x90000\n"
                 "STR     R5, [R6,#0x38]\n"
                 "BL      sub_FF88581C\n"
                 "MOV     R0, #0\n"
 "loc_FF867900:\n"
                 "BL      sub_FF9107C4\n"
                 "B       loc_FF86779C\n"
 "loc_FF867908:\n"
                 "LDR     R0, [SP,#0x40]\n"
                 "CMP     R0, #0\n"
                 "BEQ     loc_FF867928\n"
                 "BL      sub_FF95A064\n"
                 "MOV     R0, #0xA0000\n"
                 "STR     R5, [R6,#0x38]\n"
                 "BL      sub_FF88581C\n"
                 "B       loc_FF86779C\n"
 "loc_FF867928:\n"
                 "MOV     R0, #0\n"
                 "BL      sub_FF9107C4\n"
                 "LDR     R0, [R6,#0xDC]\n"
                 "CMP     R0, #1\n"
                 "BNE     loc_FF8679B8\n"
                 "LDR     R0, [R6,#0x48]\n"
                 "MOV     R1, #0xF\n"
                 "BL      sub_FFB28F84\n"
                 "MOVS    R4, R1\n"
                 "STREQ   R7, [R6,#0xDC]\n"
                 "BEQ     loc_FF8679B8\n"
                 "LDR     R5, [SP,#0x3C]\n"
                 "MOV     R2, #4\n"
                 "ADD     R0, SP, #0x2C\n"
                 "ADD     R1, R5, #4\n"
                 "BL      sub_FFB26A64\n"
                 "LDR     R0, [SP,#0x2C]\n"
                 "MOV     R1, R0,LSR#24\n"
                 "AND     R2, R0, #0xFF0000\n"
                 "ORR     R1, R1, R2,LSR#8\n"
                 "AND     R2, R0, #0xFF00\n"
                 "ORR     R1, R1, R2,LSL#8\n"
                 "ORR     R0, R1, R0,LSL#24\n"
                 "BIC     R0, R0, #0x1E000\n"
                 "ORR     R0, R0, R4,LSL#13\n"
                 "MOV     R1, R0,LSR#24\n"
                 "AND     R2, R0, #0xFF0000\n"
                 "ORR     R1, R1, R2,LSR#8\n"
                 "AND     R2, R0, #0xFF00\n"
                 "ORR     R1, R1, R2,LSL#8\n"
                 "ORR     R0, R1, R0,LSL#24\n"
                 "STR     R0, [SP,#0x2C]\n"
                 "ADD     R0, R5, #4\n"
                 "ADD     R1, SP, #0x2C\n"
                 "MOV     R2, #4\n"
                 "BL      sub_FFB26A64\n"
 "loc_FF8679B8:\n"
                 "LDR     R0, [SP,#0x3C]\n"
                 "LDR     R1, [SP,#0x44]\n"
                 "BL      sub_FF959DC0\n"
                 "LDR     R0, [R6,#0x48]\n"
                 "LDR     R3, =0x55D8\n"    // ->----
                 "ADD     R1, R0, #1\n"     //       |
                 "STR     R1, [R6,#0x48]\n" //       |
                 "STR     R3, [SP]\n"       //       |
                 "LDR     R0, [SP,#0x44]\n" //       |
                 "SUB     R3, R3, #4\n"     // ->----|
                 "MOV     R2, #0xF\n"       //       |
                 "BL      sub_FF957E98\n"   //       |
                                            //       |
                 "LDR     R0, =0x55D8-4\n"  // -<----     // +
                 "BL      set_quality\n"                  // +


 "loc_FF8679E8:\n"
                 "LDR     R0, [R6,#0x4C]\n"
                 "ADD     R0, R0, #1\n"
                 "STR     R0, [R6,#0x4C]\n"
                 "LDR     R1, [R6,#0x74]\n"
                 "MUL     R0, R1, R0\n"
                 "LDR     R1, [R6,#0x70]\n"
                 "BL      sub_FFB28F84\n"
                 "MOV     R4, R0\n"
                 "BL      sub_FF95A09C\n"
                 "LDR     R1, [R6,#0x6C]\n"
                 "CMP     R1, R4\n"
                 "BNE     loc_FF867A24\n"
                 "LDR     R0, [R6,#0x30]\n"
                 "CMP     R0, #1\n"
                 "BNE     loc_FF867A38\n"
 "loc_FF867A24:\n"
                 "LDR     R1, [R6,#0x80]\n"
                 "MOV     R0, R4\n"
                 "BLX     R1\n"
                 "STR     R4, [R6,#0x6C]\n"
                 "STR     R7, [R6,#0x30]\n"
 "loc_FF867A38:\n"
                 "STR     R7, [R6,#0x2C]\n"
                 "B       loc_FF86779C\n"

 );
}

