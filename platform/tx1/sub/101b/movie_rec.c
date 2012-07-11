#include "conf.h"

int *video_quality = &conf.video_quality;
int *video_mode    = &conf.video_mode;

long def_table1[112]={
0x2000,0x38D,0x788,0xBE1,0x10CB,0x1642,0x1C48,0x22F9,0x2A79,0x32AA,0x3C01,0x4637,0x5190,0x5E0E,0x5800,0x9C5, 
0x14B8,0x20C9,0x2E31,0x3D39,0x4DC9,0x6030,0x74D1,0x8B8D,0xA509,0xC160,0xE054,0x102AF,0x10000,0x1C6A,0x3C45, 
0x5F60,0x8661,0xB21A,0xE249,0x117D2,0x153D5,0x195F8,0x1E01C,0x2328E,0x28C99,0x2F08B,0x20000,0x387A,0x7813,  
0xBEC0,0x10CC2,0x16434,0x1C492,0x22FA4,0x2A7AA,0x32BF0,0x3C038,0x4651C,0x51932,0x5E116,0x25800,0x422F,0x8CB6,
0xDF89,0x13AF3,0x1A16D,0x2125B,0x28FD4,0x31C7B,0x3B77D,0x46542,0x5267D,0x5F987,0x6E3C6,0x8000,0xE35,0x1E23,0x2FB0, 
0x4331,0x590D,0x7125,0x8BE9,0xA9EB,0xCAFC,0xF00E,0x11947,0x1464D,0x17846,0x10000,0x1C6A,0x3C45,0x5F60,0x8661, 
0xB21A,0xE249,0x117D2,0x153D5,0x195F8,0x1E01C,0x2328E,0x28C99,0x2F08B,0x12C00,0x2118,0x465B,0x6FC5,0x9D7A,0xD0B7, 
0x1092E,0x147EA,0x18E3E,0x1DBBF,0x232A1,0x2933F,0x2FCC4,0x371E3};




long def_table2[24]={0x1CCD, -0x2E1, -0x579, 0x4F33, -0x7EB, -0xF0C, 0xE666, -0x170A, -0x2BC6, 0x1CC39, -0x2F5B,
 -0x59F0, 0x21B53, -0x377F, -0x6965, 0x7333, -0xB85, -0x15E3, 0xE666, -0x170A, -0x2BC6, 0x10DAA, -0x1BC0, -0x34B3 };

long table1[112], table2[24];

void change_video_tables(int a, int b){
 int i;
 for (i=0;i<112;i++) table1[i]=(def_table1[i]*a)/b;
 for (i=0;i<24;i++) table2[i]=(def_table2[i]*a)/b;
}

long CompressionRateTable[]={0x60, 0x5D, 0x5A, 0x57, 0x54, 0x51, 0x4D, 0x48, 0x42, 0x3B, 0x32, 0x29, 0x22, 0x1D, 0x17, 0x14, 0x10, 0xE, 0xB, 9, 7, 6, 5, 4, 3, 2, 1};


void __attribute__((naked,noinline)) movie_record_task(){
 asm volatile(
                "STMFD   SP!, {R4,R5,LR}\n"
                "SUB     SP, SP, #4\n"
                "MOV     R5, SP\n"
                "MOV     R4, #0\n"
"loc_FFBAD37C:\n"
                "LDR     R3, =0xB3E30\n"
                "MOV     R2, #0\n"
                "LDR     R0, [R3]\n"
                "MOV     R1, R5\n"
                "BL      sub_FFB40944\n"
                "LDR     R3, =0xB4060\n"
                "MOV     R1, #0\n"
                "LDR     R0, [R3]\n"
                "BL      sub_FFB4150C\n"
                "LDR     R3, =0xB3F50\n"
                "LDR     R2, [R3]\n"
                "CMP     R2, #0\n"
                "BNE     loc_FFBAD438\n"
                "LDR     R1, [SP]\n"
                "LDR     R3, [R1]\n"
                "SUB     R3, R3, #2\n"
                "MOV     R0, R1\n"
                "CMP     R3, #9\n"
                "LDRLS   PC, [PC,R3,LSL#2]\n"
                "B       loc_FFBAD43C\n"
                ".long loc_FFBAD3FC\n"
                ".long loc_FFBAD414\n"
                ".long loc_FFBAD41C\n"
                ".long loc_FFBAD424\n"
                ".long loc_FFBAD404\n"
                ".long loc_FFBAD42C\n"
                ".long loc_FFBAD40C\n"
                ".long loc_FFBAD43C\n"
                ".long loc_FFBAD434\n"
                ".long loc_FFBAD3F4\n"
"loc_FFBAD3F4:\n"
                "BL      sub_FFBAD4D0\n"
                "B       loc_FFBAD438\n"
"loc_FFBAD3FC:\n"
                "BL      sub_FFBAD734\n"
                "B       loc_FFBAD438\n"
"loc_FFBAD404:\n"
                "BL      sub_FFBADB60_my\n" //---------------->
                "B       loc_FFBAD438\n"
"loc_FFBAD40C:\n"
                "BL      sub_FFBAE3D8\n"
                "B       loc_FFBAD438\n"
"loc_FFBAD414:\n"
                "BL      sub_FFBADE8C\n"
                "B       loc_FFBAD438\n"
"loc_FFBAD41C:\n"
                "BL      sub_FFBAE67C\n"
                "B       loc_FFBAD438\n"
"loc_FFBAD424:\n"
                "BL      sub_FFBAE92C\n"
                "B       loc_FFBAD438\n"
"loc_FFBAD42C:\n"
                "BL      sub_FFBAE568\n"
                "B       loc_FFBAD438\n"
"loc_FFBAD434:\n"
                "BL      sub_FFBADEDC\n"
"loc_FFBAD438:\n"
                "LDR     R1, [SP]\n"
"loc_FFBAD43C:\n"
                "LDR     R3, [R1]\n"
                "CMP     R3, #9\n"
                "BNE     loc_FFBAD454\n"
                "MOV     R0, R1\n"
                "BL      sub_FFBAEB80\n"
                "LDR     R1, [SP]\n"
"loc_FFBAD454:\n"
                "LDR     R3, =0xB3E34\n"
                "STR     R4, [R1]\n"
                "LDR     R0, [R3]\n"
                "MOV     R2, R4\n"
                "BL      sub_FFB40D5C\n"
                "LDR     R3, =0xB4060\n"
                "LDR     R0, [R3]\n"
                "BL      sub_FFB41714\n"
                "B       loc_FFBAD37C\n"
 );
}


void __attribute__((naked,noinline)) sub_FFBADB60_my(){
 asm volatile(
                "STMFD   SP!, {R4-R11,LR}\n"
                "LDR     R5, =0xB3F68\n"
                "SUB     SP, SP, #0x3C\n"
                "LDR     R3, [R5]\n"
                "MOV     R2, #0\n"
                "CMP     R3, #3\n"
                "STR     R2, [SP,#0x2C]\n"
                "MOV     R4, R0\n"
                "STR     R2, [SP,#0x34]\n"
                "MOVEQ   R3, #4\n"
                "STREQ   R3, [R5]\n"
                "LDR     R3, =0xB4014\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R3]\n"
                "LDR     R2, [R5]\n"
                "CMP     R2, #4\n"
                "BNE     loc_FFBADDB0\n"
                "ADD     R0, SP, #0x38\n"
                "ADD     R1, SP, #0x34\n"
                "ADD     R2, SP, #0x30\n"
                "ADD     R3, SP, #0x2C\n"
                "BL      sub_FFBAFD54\n"
                "CMP     R0, #0\n"
                "BNE     loc_FFBADBE8\n"
                "LDR     R3, =0xB3F58\n"
                "LDR     R2, [R3]\n"
                "CMP     R2, #1\n"
                "BNE     loc_FFBADBFC\n"
                "LDR     R2, =0xB3F94\n"
                "LDR     R1, =0xB3F6C\n"
                "LDR     R12, [R2]\n"
                "LDR     R3, [R1]\n"
                "CMP     R12, R3\n"
                "BCC     loc_FFBADBFC\n"
"loc_FFBADBE8:\n"
                "BL      sub_FFBADE04\n"
                "BL      sub_FFBAE398\n"
                "MOV     R3, #5\n"
                "STR     R3, [R5]\n"
                "B       loc_FFBADDB0\n"
"loc_FFBADBFC:\n"
                "LDR     R11, [SP,#0x34]\n"
                "CMP     R11, #0\n"
                "BEQ     loc_FFBADD30\n"
                "LDR     R3, =0xB3F74\n"
                "LDR     R2, [R3]\n"
                "CMP     R2, #4\n"
                "LDR     R2, =0xB3F5C\n"
                "MOV     R3, #1\n"
                "STR     R3, [R2]\n"
                "BNE     loc_FFBADC48\n"
                "LDR     R1, [R4,#0xC]\n"
                "LDR     R12, [R4,#8]\n"
                "MOV     R2, R1,LSR#3\n"
                "MUL     R0, R2, R12\n"
                "LDR     R3, [R4,#4]\n"
                "ADD     R3, R3, R0,LSL#1\n"
                "STR     R3, [R4,#4]\n"
                "SUB     R9, R1, R1,LSR#2\n"
                "B       loc_FFBADC50\n"
"loc_FFBADC48:\n"
                "LDR     R9, [R4,#0xC]\n"
                "LDR     R12, [R4,#8]\n"
"loc_FFBADC50:\n"
                "LDR     R2, =0xB3F9C\n"
                "LDR     R8, [R2]\n"
                "LDR     R2, =0xB3FB0\n"
                "LDR     R10, [R4,#0x18]\n"
                "LDR     R6, [R2]\n"
                "LDR     R7, [R4,#0x14]\n"
                "ADD     R5, SP, #0x2C\n"
                "LDMIA   R5, {R5,LR}\n"
                "LDR     R0, [R4,#4]\n"
                "LDR     R3, [SP,#0x38]\n"
                "MOV     R1, R12\n"
                "ADD     R4, SP, #0x24\n"
                "ADD     R12, SP, #0x28\n"
                "MOV     R2, R9\n"
                "STMEA   SP, {R11,LR}\n"
                "STR     R5, [SP,#8]\n"
                "STR     R12, [SP,#0xC]\n"
                "STR     R8, [SP,#0x10]\n"
                "STR     R6, [SP,#0x14]\n"
                "STR     R7, [SP,#0x18]\n"
                "STR     R10, [SP,#0x1C]\n"
                "STR     R4, [SP,#0x20]\n"
                "BL      sub_FFBBBFF4\n"
                "LDR     R3, =0xB3E28\n"
                "MOV     R1, #0x3E8\n"
                "LDR     R0, [R3]\n"
                "BL      sub_FFB4150C\n"
                "CMP     R0, #9\n"
                "BNE     loc_FFBADCD8\n"
                "BL      sub_FFBB0618\n"
                "LDR     R2, =0xB3F68\n"
                "MOV     R3, #1\n"
                "LDR     R0, =0xFFBADB48\n"
                "B       loc_FFBADCF4\n"
"loc_FFBADCD8:\n"
                "LDR     R4, [SP,#0x24]\n"
                "CMP     R4, #0\n"
                "BEQ     loc_FFBADD00\n"
                "BL      sub_FFBB0618\n"
                "LDR     R2, =0xB3F68\n"
                "MOV     R3, #1\n"
                "LDR     R0, =0xFFBADB54\n"
"loc_FFBADCF4:\n"
                "STR     R3, [R2]\n"
                "BL      sub_FFB63C94\n"
                "B       loc_FFBADDB0\n"
"loc_FFBADD00:\n"
                "BL      sub_FFBBC170\n"
                "LDR     R0, [SP,#0x38]\n"
                "LDR     R1, [SP,#0x28]\n"
                "BL      sub_FFBB025C\n"
                "LDR     R12, =0xB3F90\n"
                "LDR     R3, [R12]\n"
                "ADD     R3, R3, #1\n"
                "LDR     R0, [SP,#0x28]\n"
                "LDR     R1, =0xB3FB0\n"
                "MOV     R2, R4\n"
                "STR     R3, [R12]\n"
                "BL      sub_FFB1CF90_my\n"  //------------->
"loc_FFBADD30:\n"
                "LDR     R4, =0xB3F94\n"
                "LDR     R2, =0xB3FBC\n"
                "LDR     R3, [R4]\n"
                "LDR     R1, [R2]\n"
                "LDR     R12, =0xB3FB8\n"
                "ADD     R3, R3, #1\n"
                "MUL     R0, R1, R3\n"
                "LDR     R1, [R12]\n"
                "STR     R3, [R4]\n"
                "BL      sub_FF91F884\n"
                "LDR     R6, =0xB3FB4\n"
                "MOV     R4, R0\n"
                "BL      sub_FFBB0654\n"
                "LDR     R3, [R6]\n"
                "CMP     R3, R4\n"
                "BNE     loc_FFBADD84\n"
                "LDR     R5, =0xB3F60\n"
                "LDR     R3, [R5]\n"
                "CMP     R3, #1\n"
                "BNE     loc_FFBADDA4\n"
                "B       loc_FFBADD88\n"
"loc_FFBADD84:\n"
                "LDR     R5, =0xB3F60\n"
"loc_FFBADD88:\n"
                "LDR     R2, =0xB3FF8\n"
                "MOV     R0, R4\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R2]\n"
                "MOV     R3, #0\n"
                "STR     R3, [R5]\n"
                "STR     R4, [R6]\n"
"loc_FFBADDA4:\n"
                "LDR     R2, =0xB3F5C\n"
                "MOV     R3, #0\n"
                "STR     R3, [R2]\n"
"loc_FFBADDB0:\n"
                "ADD     SP, SP, #0x3C\n"
                "LDMFD   SP!, {R4-R11,PC}\n"
 );
}


void __attribute__((naked,noinline)) sub_FFB1CF90_my(){
 asm volatile(
                "STMFD   SP!, {R4-R8,R10,LR}\n"
                "LDR     R12, =0x91C5C\n"
                "LDR     R5, [R12]\n"
                "LDR     R3, =0x91C64\n"
                "CMP     R5, #0\n"
                "MOV     R8, R0\n"
                "MOV     R10, R1\n"
                "LDR     R0, [R3]\n"
                "BEQ     loc_FFB1CFC8\n"
                "LDR     R2, =0x91C68\n"
                "LDR     R3, [R2]\n"
                "CMP     R3, #1\n"
                "BNE     loc_FFB1CFDC\n"
                "B       loc_FFB1CFCC\n"
"loc_FFB1CFC8:\n"
                "LDR     R2, =0x91C68\n"
"loc_FFB1CFCC:\n"
                "MOV     R3, #0\n"
                "STR     R3, [R2]\n"
                "STR     R8, [R12]\n"
                "B       loc_FFB1D09C\n"
"loc_FFB1CFDC:\n"
                "LDR     R3, =0x91C60\n"
                "LDR     R2, [R3]\n"
                "LDR     R7, =table1\n"        // *
                "RSB     R3, R2, R2,LSL#3\n"
                "MOV     R4, R3,LSL#3\n"
                "LDR     R1, [R7,R4]\n"
                "ADD     R2, R2, R2,LSL#1\n"
                "LDR     R6, =table2\n"        // *
                "MOV     LR, R2,LSL#2\n"
                "RSB     R12, R1, R5\n"
                "LDR     R3, [R6,LR]\n"
                "CMP     R12, #0\n"
                "RSB     R1, R3, R5\n"
                "BLE     loc_FFB1D048\n"
                "ADD     R3, R7, #4\n"
                "LDR     R2, [R3,R4]\n"
                "CMP     R2, R12\n"
                "ADDGE   R0, R0, #1\n"
                "BGE     loc_FFB1D03C\n"
                "ADD     R3, R7, #8\n"
                "LDR     R2, [R3,R4]\n"
                "CMP     R2, R12\n"
                "ADDGE   R0, R0, #2\n"
                "ADDLT   R0, R0, #3\n"
"loc_FFB1D03C:\n"
         //     "CMP     R0, #0x16\n"       // -
         //     "MOVGE   R0, #0x16\n"       // -
                "CMP     R0, #0x1A\n"       //+      
                "MOVGE   R0, #0x1A\n"       //+      
                "B       loc_FFB1D080\n"
"loc_FFB1D048:\n"
                "CMP     R1, #0\n"
                "BGE     loc_FFB1D080\n"
                "ADD     R3, R6, #4\n"
                "LDR     R2, [R3,LR]\n"
                "CMP     R2, R1\n"
                "SUBLE   R0, R0, #1\n"
                "BLE     loc_FFB1D078\n"
                "ADD     R3, R6, #8\n"
                "LDR     R2, [R3,LR]\n"
                "CMP     R2, R1\n"
                "SUBLE   R0, R0, #2\n"
                "SUBGT   R0, R0, #3\n"
"loc_FFB1D078:\n"
                "CMP     R0, #0\n"
                "MOVLT   R0, #0\n"
"loc_FFB1D080:\n"
                "LDR     R1, =0x91C64\n"
                "LDR     R3, [R1]\n"
                "CMP     R0, R3\n"
                "LDRNE   R2, =0x91C68\n"
                "MOVNE   R3, #1\n"
                "STRNE   R0, [R1]\n"
                "STRNE   R3, [R2]\n"
"loc_FFB1D09C:\n"
                "LDR     R3, =0x91C64\n"
                "LDR     R2, =CompressionRateTable\n"
                "LDR     R1, [R3]\n"
                "LDR     R0, =0x91C5C\n"
                "LDR     R3, [R2,R1,LSL#2]\n"

                "LDR     R1, =video_mode\n"      // +
                "LDR     R1, [R1]\n"             // +
                "LDR     R1, [R1]\n"             // +
                "CMP     R1, #1\n"               // +
                "LDREQ   R1, =video_quality\n"   // +     
                "LDREQ   R1, [R1]\n"             // +     
                "LDREQ   R3, [R1]\n"             // +     

                "STR     R8, [R0]\n"
                "STR     R3, [R10]\n"
                "LDMFD   SP!, {R4-R8,R10,PC}\n"
 );
}
