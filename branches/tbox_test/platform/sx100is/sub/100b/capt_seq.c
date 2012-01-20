#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0xA5FC;

#include "../../../generic/capt_seq.c"

void __attribute__((naked,noinline)) sub_FFD15B24_my(){ 
 asm volatile(
                "STMFD   SP!, {R0-R10,LR}\n"
                "MOV     R6, #0\n"
                "MOV     R4, R0\n"
                "BL      sub_FFD16678\n"
                "MVN     R1, #0\n"
                "BL      sub_FFC19408\n"
                "MOV     R2, #4\n"
                "ADD     R1, SP, #8\n"
                "MOV     R0, #0x8A\n"
                "BL      sub_FFC5BC8C\n"
                "TST     R0, #1\n"
                "LDRNE   R1, =0x20A\n"
                "LDRNE   R0, =0xFFD15D2C\n"
                "BLNE    sub_FFC0C090\n"
                "LDR     R8, =0x1993C\n"
                "LDR     R5, =0x19890\n"
                "LDRSH   R1, [R8,#0xE]\n"
                "LDR     R0, [R5,#0x74]\n"
                "BL      sub_FFCDAF44\n"
                "BL      sub_FFC3A2AC\n"
                "LDR     R2, =0xA600\n"
                "ADD     R3, R4, #0x8C\n"
                "STRH    R0, [R4,#0x88]\n"
            //  "STRD    R2, [SP]\n"
                ".long	 0xE1CD20F0\n"
                "MOV     R1, R0\n"
                "LDRH    R0, [R5,#0x4C]\n"
                "LDRSH   R2, [R8,#0xC]\n"
                "LDR     R3, =0xA5FC\n"
                "BL      sub_FFD16B64\n"
                "BL      capt_seq_hook_set_nr\n"
                "B	 sub_FFD15B98\n"
 );
}

void __attribute__((naked,noinline)) sub_FFC4DE14_my(){ 
 asm volatile(
                "STMFD   SP!, {R3-R7,LR}\n"
                "LDR     R4, [R0,#0xC]\n"
                "LDR     R5, =0x19890\n"
                "LDR     R0, [R4,#8]\n"
                "LDR     R6, =0x820A\n"
                "ORR     R0, R0, #1\n"
                "STR     R0, [R4,#8]\n"
                "LDRH    R0, [R5]\n"
                "CMP     R0, R6\n"
                "BEQ     loc_FFC4DEB0\n"
                "LDRH    R0, [R5,#0x7E]\n"
                "CMP     R0, #3\n"
                "BEQ     loc_FFC4DF14\n"
                "LDR     R0, [R4,#0xC]\n"
                "CMP     R0, #1\n"
                "BLS     loc_FFC4DEBC\n"
                "LDRH    R0, [R5,#0x7C]\n"
                "CMP     R0, #0\n"
                "BNE     loc_FFC4DF14\n"
                "LDRH    R0, [R5,#0x78]\n"
                "CMP     R0, #2\n"
                "BNE     loc_FFC4DEC8\n"
                "BL      sub_FFD14538\n"
                "LDRH    R0, [R5]\n"
                "CMP     R0, R6\n"
                "BEQ     loc_FFC4DEB0\n"
                "LDRH    R0, [R5,#0x7E]\n"
                "CMP     R0, #3\n"
                "BEQ     loc_FFC4DF14\n"
                "LDR     R0, [R4,#0xC]\n"
                "CMP     R0, #1\n"
                "BLS     loc_FFC4DEBC\n"
                "LDRH    R0, [R5,#0x7C]\n"
                "CMP     R0, #0\n"
                "BNE     loc_FFC4DF14\n"
                "LDRH    R0, [R5,#0x78]\n"
                "CMP     R0, #2\n"
                "BEQ     loc_FFC4DEF4\n"
                "B       loc_FFC4DEC8\n"
"loc_FFC4DEB0:\n"
                "LDRH    R0, [R5,#0x7E]\n"
                "CMP     R0, #3\n"
                "BEQ     loc_FFC4DF14\n"
"loc_FFC4DEBC:\n"
                "LDRH    R0, [R5,#0x7C]\n"
                "CMP     R0, #0\n"
                "BNE     loc_FFC4DF14\n"
"loc_FFC4DEC8:\n"
                "LDRH    R0, [R5,#0x78]\n"
                "CMP     R0, #1\n"
                "BNE     loc_FFC4DF14\n"
                "LDRH    R0, [R5]\n"
                "CMP     R0, R6\n"
                "LDRNE   R0, [R4,#0xC]\n"
                "CMPNE   R0, #1\n"
                "BLS     loc_FFC4DF14\n"
                "LDR     R0, [R4,#0x10]\n"
                "CMP     R0, #1\n"
                "BNE     loc_FFC4DF14\n"
"loc_FFC4DEF4:\n"
                "LDR     R3, =0x20D\n"
                "LDR     R0, =0x5698\n"
                "STR     R3, [SP]\n"
                "LDR     R0, [R0,#0xC]\n"
                "LDR     R2, =0xEA60\n"
                "LDR     R3, =0xFFC4DD94\n"
                "MOV     R1, #0x40000000\n"
                "BL      sub_FFC518F4\n"
"loc_FFC4DF14:\n"
                "BL      sub_FFC4DCF8\n"
                "MOV     R0, #2\n"
                "BL      sub_FFC494FC\n"
                "BL      sub_FFD14154\n"
                "MOV     R0, R4\n"
                "BL      sub_FFD147BC\n"
                "TST     R0, #1\n"
                "MOVNE   R2, R4\n"
                "LDMNEFD SP!, {R3-R7,LR}\n"
                "MOVNE   R1, #1\n"
                "BNE     sub_FFC4C740\n"
                "BL      sub_FFD27B0C\n"
                "BL      sub_FFC5BE1C\n"
                "STR     R0, [R4,#0x14]\n"
                "MOV     R0, R4\n"
                "BL      sub_FFD15A3C\n"
                "BL      sub_FFD1650C\n"
                "MOV     R0, R4\n"
                "BL      sub_FFD15B24_my\n"         //----------->
                "BL      capt_seq_hook_raw_here\n"  //+
                "MOV     R2, R4\n"
                "MOV     R1, #1\n"
                "BL      sub_FFC4C740\n"
                "BL      sub_FFD15F60\n"
                "CMP     R0, #0\n"
                "LDRNE   R0, [R4,#8]\n"
                "ORRNE   R0, R0, #0x2000\n"
                "STRNE   R0, [R4,#8]\n"
                "LDRH    R0, [R5,#0x7E]\n"
                "CMP     R0, #3\n"
                "BEQ     loc_FFC4DFA8\n"
                "LDRH    R0, [R5,#0x7C]\n"
                "CMP     R0, #0\n"
                "LDREQH  R0, [R5,#0x78]\n"
                "CMPEQ   R0, #2\n"
                "MOVEQ   R0, R4\n"
                "LDMEQFD SP!, {R3-R7,LR}\n"
                "BEQ     sub_FFD1458C\n"
"loc_FFC4DFA8:\n"
                "LDMFD   SP!, {R3-R7,PC}\n"
 );
}


void __attribute__((naked,noinline)) CaptSeqTask() //#fs
{
	asm volatile (
                "STMFD   SP!, {R3-R7,LR}\n"
                "LDR     R6, =0x5698\n"
"loc_FFC4E2B4:\n"
                "LDR     R0, [R6,#0x10]\n"
                "MOV     R2, #0\n"
                "MOV     R1, SP\n"
                "BL      sub_FFC19658\n"
                "TST     R0, #1\n"
                "BEQ     loc_FFC4E2E0\n"
                "LDR     R1, =0x43F\n"
                "LDR     R0, =0xFFC4DD94\n"
                "BL      sub_FFC0C090\n"
                "BL      sub_FFC0BE48\n"
                "LDMFD   SP!, {R3-R7,PC}\n"
"loc_FFC4E2E0:\n"
                "LDR     R0, [SP]\n"
                "LDR     R1, [R0]\n"
                "CMP     R1, #0x1A\n"
                "ADDLS   PC, PC, R1,LSL#2\n"
                "B       loc_FFC4E488\n"
"loc_FFC4E2F4:\n"
                "B       loc_FFC4E360\n"
"loc_FFC4E2F8:\n"
                "B       loc_FFC4E368\n"
"loc_FFC4E2FC:\n"
                "B       loc_FFC4E370\n"
"loc_FFC4E300:\n"
                "B       loc_FFC4E384\n"
"loc_FFC4E304:\n"
                "B       loc_FFC4E37C\n"
"loc_FFC4E308:\n"
                "B       loc_FFC4E38C\n"
"loc_FFC4E30C:\n"
                "B       loc_FFC4E394\n"
"loc_FFC4E310:\n"
                "B       loc_FFC4E3A0\n"
"loc_FFC4E314:\n"
                "B       loc_FFC4E3F8\n"
"loc_FFC4E318:\n"
                "B       loc_FFC4E384\n"
"loc_FFC4E31C:\n"
                "B       loc_FFC4E400\n"
"loc_FFC4E320:\n"
                "B       loc_FFC4E408\n"
"loc_FFC4E324:\n"
                "B       loc_FFC4E410\n"
"loc_FFC4E328:\n"
                "B       loc_FFC4E418\n"
"loc_FFC4E32C:\n"
                "B       loc_FFC4E420\n"
"loc_FFC4E330:\n"
                "B       loc_FFC4E428\n"
"loc_FFC4E334:\n"
                "B       loc_FFC4E430\n"
"loc_FFC4E338:\n"
                "B       loc_FFC4E438\n"
"loc_FFC4E33C:\n"
                "B       loc_FFC4E440\n"
"loc_FFC4E340:\n"
                "B       loc_FFC4E448\n"
"loc_FFC4E344:\n"
                "B       loc_FFC4E450\n"
"loc_FFC4E348:\n"
                "B       loc_FFC4E45C\n"
"loc_FFC4E34C:\n"
                "B       loc_FFC4E468\n"
"loc_FFC4E350:\n"
                "B       loc_FFC4E470\n"
"loc_FFC4E354:\n"
                "B       loc_FFC4E478\n"
"loc_FFC4E358:\n"
                "B       loc_FFC4E480\n"
"loc_FFC4E35C:\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E360:\n"
                "BL      sub_FFD1419C\n"
                "BL      shooting_expo_param_override\n"  // +
                "B       loc_FFC4E398\n"
"loc_FFC4E368:\n"
                "BL      sub_FFC4DE14_my\n"     //---------------->
                "B       loc_FFC4E494\n"
"loc_FFC4E370:\n"
                "MOV     R0, #1\n"
                "BL      sub_FFD1432C\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E37C:\n"
                "BL      sub_FFD13E30\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E384:\n"
                "BL      sub_FFD14144\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E38C:\n"
                "BL      sub_FFD1414C\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E394:\n"
                "BL      sub_FFD1424C\n"
"loc_FFC4E398:\n"
                "BL      sub_FFC4C3A8\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E3A0:\n"
                "LDR     R4, [R0,#0xC]\n"
                "BL      sub_FFD14154\n"
                "MOV     R0, R4\n"
                "BL      sub_FFD14BAC\n"
                "TST     R0, #1\n"
                "MOV     R5, R0\n"
                "BNE     loc_FFC4E3E0\n"
                "BL      sub_FFC5BE1C\n"
                "STR     R0, [R4,#0x14]\n"
                "MOV     R0, R4\n"
                "BL      sub_FFD15A3C\n"
                "MOV     R0, R4\n"
                "BL      sub_FFD15FC0\n"
                "MOV     R5, R0\n"
                "LDR     R0, [R4,#0x14]\n"
                "BL      sub_FFC5C030\n"
"loc_FFC4E3E0:\n"
                "BL      sub_FFD14144\n"
                "MOV     R2, R4\n"
                "MOV     R1, #8\n"
                "MOV     R0, R5\n"
                "BL      sub_FFC4C740\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E3F8:\n"
                "BL      sub_FFD142A8\n"
                "B       loc_FFC4E398\n"
"loc_FFC4E400:\n"
                "BL      sub_FFD14E18\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E408:\n"
                "BL      sub_FFD14FD0\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E410:\n"
                "BL      sub_FFD15060\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E418:\n"
                "BL      sub_FFD15114\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E420:\n"
                "BL      sub_FFD153A0\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E428:\n"
                "BL      sub_FFD153F0\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E430:\n"
                "MOV     R0, #0\n"
                "B       loc_FFC4E454\n"
"loc_FFC4E438:\n"
                "BL      sub_FFD155B4\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E440:\n"
                "BL      sub_FFD15648\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E448:\n"
                "BL      sub_FFD15708\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E450:\n"
                "MOV     R0, #1\n"
"loc_FFC4E454:\n"
                "BL      sub_FFD15474\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E45C:\n"
                "BL      sub_FFD14478\n"
                "BL      sub_FFC4E5B0\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E468:\n"
                "BL      sub_FFD15230\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E470:\n"
                "BL      sub_FFD15308\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E478:\n"
                "BL      sub_FFC4DCF8\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E480:\n"
                "BL      sub_FFC15C28\n"
                "B       loc_FFC4E494\n"
"loc_FFC4E488:\n"
                "LDR     R1, =0x523\n"
                "LDR     R0, =0xFFC4DD94\n"
                "BL      sub_FFC0C090\n"
"loc_FFC4E494:\n"
                "LDR     R0, [SP]\n"
                "LDR     R1, [R0,#4]\n"
                "LDR     R0, [R6,#0xC]\n"
                "BL      sub_FFC193D4\n"
                "LDR     R4, [SP]\n"
                "LDR     R0, [R4,#8]\n"
                "CMP     R0, #0\n"
                "LDREQ   R0, =0xFFC4DD94\n"
                "MOVEQ   R1, #0xFC\n"
                "BLEQ    sub_FFC0C090\n"
                "MOV     R0, #0\n"
                "STR     R0, [R4,#8]\n"
                "B       loc_FFC4E2B4\n"
    );
} //#fe


void __attribute__((naked,noinline)) exp_drv_task(){
 asm volatile(
"                STMFD   SP!, {R4-R8,LR}\n"
"                SUB     SP, SP, #0x20\n"
"                LDR     R8, =0xBB8\n"
"                LDR     R7, =0x6D70\n"
"                LDR     R5, =0x41350\n"
"                MOV     R0, #0\n"
"                ADD     R6, SP, #0x10\n"
"                STR     R0, [SP,#0xC]\n"
"loc_FFC98F04:\n"
"                LDR     R0, [R7,#0x20]\n"
"                MOV     R2, #0\n"
"                ADD     R1, SP, #0x1C\n"
"                BL      sub_FFC19658\n"
"                LDR     R0, [SP,#0xC]\n"
"                CMP     R0, #1\n"
"                BNE     loc_FFC98F4C\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R0, [R0]\n"
"                CMP     R0, #0x13\n"
"                CMPNE   R0, #0x14\n"
"                CMPNE   R0, #0x15\n"
"                BEQ     loc_FFC990CC\n"
"                CMP     R0, #0x26\n"
"                BEQ     loc_FFC99038\n"
"                ADD     R1, SP, #0xC\n"
"                MOV     R0, #0\n"
"                BL      sub_FFC98E94\n"
"loc_FFC98F4C:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x2B\n"
"                BNE     loc_FFC98F7C\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FFC9A1C4\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #1\n"
"                BL      sub_FFC193D4\n"
"                BL      sub_FFC0BE48\n"
"                ADD     SP, SP, #0x20\n"
"                LDMFD   SP!, {R4-R8,PC}\n"
"loc_FFC98F7C:\n"
"                CMP     R1, #0x2A\n"
"                BNE     loc_FFC98F98\n"
"                LDR     R2, [R0,#0x88]!\n"
"                LDR     R1, [R0,#4]\n"
"                MOV     R0, R1\n"
"                BLX     R2\n"
"                B       loc_FFC99530\n"
"loc_FFC98F98:\n"
"                CMP     R1, #0x24\n"
"                BNE     loc_FFC98FE8\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FFC19408\n"
"                LDR     R0, =0xFFC95980\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FFD0A4E8\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R8\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FFC1930C\n"
"                TST     R0, #1\n"
"                LDRNE   R1, =0xD07\n"
"                BNE     loc_FFC990A8\n"
"loc_FFC98FD4:\n"
"                LDR     R1, [SP,#0x1C]\n"
"                LDR     R0, [R1,#0x8C]\n"
"                LDR     R1, [R1,#0x88]\n"
"                BLX     R1\n"
"                B       loc_FFC99530\n"
"loc_FFC98FE8:\n"
"                CMP     R1, #0x25\n"
"                BNE     loc_FFC99030\n"
"                ADD     R1, SP, #0xC\n"
"                BL      sub_FFC98E94\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x100\n"
"                BL      sub_FFC19408\n"
"                MOV     R1, #0x100\n"
"                LDR     R0, =0xFFC95990\n"
"                BL      sub_FFD0ACA8\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R8\n"
"                MOV     R1, #0x100\n"
"                BL      sub_FFC1930C\n"
"                TST     R0, #1\n"
"                BEQ     loc_FFC98FD4\n"
"                LDR     R1, =0xD11\n"
"                B       loc_FFC990A8\n"
"loc_FFC99030:\n"
"                CMP     R1, #0x26\n"
"                BNE     loc_FFC99048\n"
"loc_FFC99038:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                ADD     R1, SP, #0xC\n"
"                BL      sub_FFC98E94\n"
"                B       loc_FFC98FD4\n"
"loc_FFC99048:\n"
"                CMP     R1, #0x27\n"
"                CMPNE   R1, #0x28\n"
"                BNE     loc_FFC990B4\n"
"                ADD     R1, SP, #0xC\n"
"                BL      sub_FFC98E94\n"
"                LDR     R4, [SP,#0x1C]\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x40\n"
"                BL      sub_FFC19408\n"
"                LDR     R0, [R4]\n"
"                MOV     R1, #0x40\n"
"                CMP     R0, #0x27\n"
"                LDR     R0, =0xFFC959F4\n"
"                BNE     loc_FFC99088\n"
"                BL      sub_FFD0A588\n"
"                B       loc_FFC9908C\n"
"loc_FFC99088:\n"
"                BL      sub_FFD0A614\n"
"loc_FFC9908C:\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R8\n"
"                MOV     R1, #0x40\n"
"                BL      sub_FFC1930C\n"
"                TST     R0, #1\n"
"                BEQ     loc_FFC98FD4\n"
"                LDR     R1, =0xD1F\n"
"loc_FFC990A8:\n"
"                LDR     R0, =0xFFC96090\n"
"                BL      sub_FFC0C090\n"
"                B       loc_FFC98FD4\n"
"loc_FFC990B4:\n"
"                CMP     R1, #0x29\n"
"                BNE     loc_FFC990CC\n"
"                BL      sub_FFC77FB8\n"
"                BL      sub_FFC78D38\n"
"                BL      sub_FFC787F8\n"
"                B       loc_FFC98FD4\n"
"loc_FFC990CC:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R4, #1\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x11\n"
"                CMPNE   R1, #0x12\n"
"                BNE     loc_FFC9913C\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R1, R0, R1,LSL#2\n"
"                SUB     R1, R1, #8\n"
"                LDMIA   R1, {R2-R4}\n"
"                STMIA   R6, {R2-R4}\n"
"                BL      sub_FFC97A10\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FFC9A598\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x90]\n"
"                LDR     R2, [R0,#0x94]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                B       loc_FFC99470\n"
"loc_FFC9913C:\n"
"                CMP     R1, #0x13\n"
"                CMPNE   R1, #0x14\n"
"                CMPNE   R1, #0x15\n"
"                BNE     loc_FFC991F0\n"
"                ADD     R3, SP, #0xC\n"
"                MOV     R2, SP\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFC97C58\n"
"                CMP     R0, #1\n"
"                MOV     R4, R0\n"
"                CMPNE   R4, #5\n"
"                BNE     loc_FFC9918C\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, R4\n"
"                LDR     R1, [R0,#0x7C]!\n"
"                LDR     R12, [R0,#0xC]!\n"
"                LDR     R3, [R0,#4]\n"
"                MOV     R0, SP\n"
"                BLX     R12\n"
"                B       loc_FFC991C4\n"
"loc_FFC9918C:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                CMP     R4, #2\n"
"                LDR     R3, [R0,#0x8C]\n"
"                CMPNE   R4, #6\n"
"                BNE     loc_FFC991D8\n"
"                LDR     R12, [R0,#0x88]\n"
"                MOV     R0, SP\n"
"                MOV     R2, R4\n"
"                MOV     R1, #1\n"
"                BLX     R12\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, SP\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFC98BE0\n"
"loc_FFC991C4:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R2, [SP,#0xC]\n"
"                MOV     R1, R4\n"
"                BL      sub_FFC98E34\n"
"                B       loc_FFC99470\n"
"loc_FFC991D8:\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R12, [R0,#0x88]\n"
"                ADD     R0, R0, #4\n"
"                MOV     R2, R4\n"
"                BLX     R12\n"
"                B       loc_FFC99470\n"
"loc_FFC991F0:\n"
"                CMP     R1, #0x20\n"
"                CMPNE   R1, #0x21\n"
"                BNE     loc_FFC9923C\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R1, R0, R1,LSL#2\n"
"                SUB     R1, R1, #8\n"
"                LDMIA   R1, {R2-R4}\n"
"                STMIA   R6, {R2-R4}\n"
"                BL      sub_FFC96F94\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FFC97290\n"
"                B       loc_FFC99470\n"
"loc_FFC9923C:\n"
"                ADD     R1, R0, #4\n"
"                LDMIA   R1, {R2,R3,R12}\n"
"                STMIA   R6, {R2,R3,R12}\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x23\n"
"                ADDLS   PC, PC, R1,LSL#2\n"
"                B       loc_FFC99450\n"
"loc_FFC99258:\n"
"                B       loc_FFC992E8\n"
"loc_FFC9925C:\n"
"                B       loc_FFC992E8\n"
"loc_FFC99260:\n"
"                B       loc_FFC99338\n"
"loc_FFC99264:\n"
"                B       loc_FFC99340\n"
"loc_FFC99268:\n"
"                B       loc_FFC99340\n"
"loc_FFC9926C:\n"
"                B       loc_FFC99340\n"
"loc_FFC99270:\n"
"                B       loc_FFC992E8\n"
"loc_FFC99274:\n"
"                B       loc_FFC99338\n"
"loc_FFC99278:\n"
"                B       loc_FFC99340\n"
"loc_FFC9927C:\n"
"                B       loc_FFC99340\n"
"loc_FFC99280:\n"
"                B       loc_FFC99358\n"
"loc_FFC99284:\n"
"                B       loc_FFC99358\n"
"loc_FFC99288:\n"
"                B       loc_FFC99444\n"
"loc_FFC9928C:\n"
"                B       loc_FFC9944C\n"
"loc_FFC99290:\n"
"                B       loc_FFC9944C\n"
"loc_FFC99294:\n"
"                B       loc_FFC9944C\n"
"loc_FFC99298:\n"
"                B       loc_FFC9944C\n"
"loc_FFC9929C:\n"
"                B       loc_FFC99450\n"
"loc_FFC992A0:\n"
"                B       loc_FFC99450\n"
"loc_FFC992A4:\n"
"                B       loc_FFC99450\n"
"loc_FFC992A8:\n"
"                B       loc_FFC99450\n"
"loc_FFC992AC:\n"
"                B       loc_FFC99450\n"
"loc_FFC992B0:\n"
"                B       loc_FFC99348\n"
"loc_FFC992B4:\n"
"                B       loc_FFC99350\n"
"loc_FFC992B8:\n"
"                B       loc_FFC99350\n"
"loc_FFC992BC:\n"
"                B       loc_FFC99364\n"
"loc_FFC992C0:\n"
"                B       loc_FFC9936C\n"
"loc_FFC992C4:\n"
"                B       loc_FFC9939C\n"
"loc_FFC992C8:\n"
"                B       loc_FFC993CC\n"
"loc_FFC992CC:\n"
"                B       loc_FFC993FC\n"
"loc_FFC992D0:\n"
"                B       loc_FFC9942C\n"
"loc_FFC992D4:\n"
"                B       loc_FFC9942C\n"
"loc_FFC992D8:\n"
"                B       loc_FFC99450\n"
"loc_FFC992DC:\n"
"                B       loc_FFC99450\n"
"loc_FFC992E0:\n"
"                B       loc_FFC99434\n"
"loc_FFC992E4:\n"
"                B       loc_FFC9943C\n"
"loc_FFC992E8:\n"
"                BL      sub_FFC95E78\n"
"                B       loc_FFC99450\n"
"loc_FFC99338:\n"
"                BL      sub_FFC96100\n"
"                B       loc_FFC99450\n"
"loc_FFC99340:\n"
"                BL      sub_FFC96304\n"
"                B       loc_FFC99450\n"
"loc_FFC99348:\n"
"                BL      sub_FFC9656C\n"
"                B       loc_FFC99450\n"
"loc_FFC99350:\n"
"                BL      sub_FFC96760\n"
"                B       loc_FFC99450\n"
"loc_FFC99358:\n"
"                BL      sub_FFC969C4_my\n" //->
"                MOV     R4, #0\n"
"                B       loc_FFC99450\n"
"loc_FFC99364:\n"
"                BL      sub_FFC96B00\n"
"                B       loc_FFC99450\n"
"loc_FFC9936C:\n"
"                LDRH    R1, [R0,#4]\n"
"                STRH    R1, [SP,#0x10]\n"
"                LDRH    R1, [R5,#2]\n"
"                STRH    R1, [SP,#0x12]\n"
"                LDRH    R1, [R5,#4]\n"
"                STRH    R1, [SP,#0x14]\n"
"                LDRH    R1, [R5,#6]\n"
"                STRH    R1, [SP,#0x16]\n"
"                LDRH    R1, [R0,#0xC]\n"
"                STRH    R1, [SP,#0x18]\n"
"                BL      sub_FFC9A238\n"
"                B       loc_FFC99450\n"
"loc_FFC9939C:\n"
"                LDRH    R1, [R0,#4]\n"
"                STRH    R1, [SP,#0x10]\n"
"                LDRH    R1, [R5,#2]\n"
"                STRH    R1, [SP,#0x12]\n"
"                LDRH    R1, [R5,#4]\n"
"                STRH    R1, [SP,#0x14]\n"
"                LDRH    R1, [R5,#6]\n"
"                STRH    R1, [SP,#0x16]\n"
"                LDRH    R1, [R5,#8]\n"
"                STRH    R1, [SP,#0x18]\n"
"                BL      sub_FFC9A3B4\n"
"                B       loc_FFC99450\n"
"loc_FFC993CC:\n"
"                LDRH    R1, [R5]\n"
"                STRH    R1, [SP,#0x10]\n"
"                LDRH    R1, [R0,#6]\n"
"                STRH    R1, [SP,#0x12]\n"
"                LDRH    R1, [R5,#4]\n"
"                STRH    R1, [SP,#0x14]\n"
"                LDRH    R1, [R5,#6]\n"
"                STRH    R1, [SP,#0x16]\n"
"                LDRH    R1, [R5,#8]\n"
"                STRH    R1, [SP,#0x18]\n"
"                BL      sub_FFC9A460\n"
"                B       loc_FFC99450\n"
"loc_FFC993FC:\n"
"                LDRH    R1, [R5]\n"
"                STRH    R1, [SP,#0x10]\n"
"                LDRH    R1, [R5,#2]\n"
"                STRH    R1, [SP,#0x12]\n"
"                LDRH    R1, [R5,#4]\n"
"                STRH    R1, [SP,#0x14]\n"
"                LDRH    R1, [R5,#6]\n"
"                STRH    R1, [SP,#0x16]\n"
"                LDRH    R1, [R0,#0xC]\n"
"                STRH    R1, [SP,#0x18]\n"
"                BL      sub_FFC9A500\n"
"                B       loc_FFC99450\n"
"loc_FFC9942C:\n"
"                BL      sub_FFC96D58\n"
"                B       loc_FFC99450\n"
"loc_FFC99434:\n"
"                BL      sub_FFC97394\n"
"                B       loc_FFC99450\n"
"loc_FFC9943C:\n"
"                BL      sub_FFC975C8\n"
"                B       loc_FFC99450\n"
"loc_FFC99444:\n"
"                BL      sub_FFC97740\n"
"                B       loc_FFC99450\n"
"loc_FFC9944C:\n"
"                BL      sub_FFC978D8\n"
"loc_FFC99450:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                CMP     R4, #1\n"
"                BNE     loc_FFC994B8\n"
"loc_FFC99470:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, #0xC\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R0, R0, R1,LSL#2\n"
"                SUB     R4, R0, #8\n"
"                LDR     R0, =0x41350\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFE56AD8\n"
"                LDR     R0, =0x4135C\n"
"                MOV     R2, #0xC\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFE56AD8\n"
"                LDR     R0, =0x41368\n"
"                MOV     R2, #0xC\n"
"                MOV     R1, R4\n"
"                BL      sub_FFE56AD8\n"
"                B       loc_FFC99530\n"
"loc_FFC994B8:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R0, [R0]\n"
"                CMP     R0, #0xB\n"
"                BNE     loc_FFC99500\n"
"                MOV     R3, #0\n"
"                STR     R3, [SP]\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #0\n"
"                BL      sub_FFC95C80\n"
"                MOV     R3, #0\n"
"                STR     R3, [SP]\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #0\n"
"                B       loc_FFC9952C\n"
"loc_FFC99500:\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #1\n"
"                STR     R3, [SP]\n"
"                BL      sub_FFC95C80\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #1\n"
"                STR     R3, [SP]\n"
"loc_FFC9952C:\n"
"                BL      sub_FFC95DC0\n"
"loc_FFC99530:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FFC9A1C4\n"
"                B       loc_FFC98F04\n"
 );
}



void __attribute__((naked,noinline)) sub_FFC969C4_my(){
 asm volatile(
"                STMFD   SP!, {R4-R8,LR}\n"
"                LDR     R7, =0x6D70\n"
"                MOV     R4, R0\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x3E\n"
"                BL      sub_FFC19408\n"
"                LDRSH   R0, [R4,#4]\n"
"                MOV     R2, #0\n"
"                MOV     R1, #0\n"
"                BL      sub_FFC95A14\n"
"                MOV     R6, R0\n"
"                LDRSH   R0, [R4,#6]\n"
"                BL      sub_FFC95B20\n"
"                LDRSH   R0, [R4,#8]\n"
"                BL      sub_FFC95B78\n"
"                LDRSH   R0, [R4,#0xA]\n"
"                BL      sub_FFC95BD0\n"
"                LDRSH   R0, [R4,#0xC]\n"
"                BL      sub_FFC95C28\n"
"                MOV     R5, R0\n"
"                LDR     R0, [R4]\n"
"                LDR     R8, =0x41368\n"
"                CMP     R0, #0xB\n"
"                MOVEQ   R6, #0\n"
"                MOVEQ   R5, #0\n"
"                BEQ     loc_FFC96A54\n"
"                CMP     R6, #1\n"
"                BNE     loc_FFC96A54\n"
"                LDRSH   R0, [R4,#4]\n"
"                LDR     R1, =0xFFC95970\n"
"                MOV     R2, #2\n"
"                BL      sub_FFD0A75C\n"
"                STRH    R0, [R4,#4]\n"
"                MOV     R0, #0\n"
"                STR     R0, [R7,#0x28]\n"
"                B       loc_FFC96A5C\n"
"loc_FFC96A54:\n"
"                LDRH    R0, [R8]\n"
"                STRH    R0, [R4,#4]\n"
"loc_FFC96A5C:\n"
"                CMP     R5, #1\n"
"                LDRNEH  R0, [R8,#8]\n"
"                BNE     loc_FFC96A78\n"
"                LDRSH   R0, [R4,#0xC]\n"
"                LDR     R1, =0xFFC95A04\n"
"                MOV     R2, #0x20\n"
"                BL      sub_FFC9A1F4\n"
"loc_FFC96A78:\n"
"                STRH    R0, [R4,#0xC]\n"
"                LDRSH   R0, [R4,#6]\n"
"                BL      sub_FFC77D5C_my\n" //->
"                LDRSH   R0, [R4,#8]\n"
"                MOV     R1, #1\n"
"                BL      sub_FFC784F0\n"
"                MOV     R1, #0\n"
"                ADD     R0, R4, #8\n"
"                BL      sub_FFC78578\n"
"                LDRSH   R0, [R4,#0xE]\n"
"                BL      sub_FFC8CD94\n"
"                LDR     R4, =0xBB8\n"
"                CMP     R6, #1\n"
"                BNE     loc_FFC96AD0\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R4\n"
"                MOV     R1, #2\n"
"                BL      sub_FFC1930C\n"
"                TST     R0, #1\n"
"                LDRNE   R1, =0x527\n"
"                LDRNE   R0, =0xFFC96090\n"
"                BLNE    sub_FFC0C090\n"
"loc_FFC96AD0:\n"
"                CMP     R5, #1\n"
"                LDMNEFD SP!, {R4-R8,PC}\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R4\n"
"                MOV     R1, #0x20\n"
"                BL      sub_FFC1930C\n"
"                TST     R0, #1\n"
"                LDRNE   R1, =0x52C\n"
"                LDRNE   R0, =0xFFC96090\n"
"                LDMNEFD SP!, {R4-R8,LR}\n"
"                BNE     sub_FFC0C090\n"
"                LDMFD   SP!, {R4-R8,PC}\n"
 );
}

void __attribute__((naked,noinline)) sub_FFC77D5C_my(){
 asm volatile(
"                STMFD   SP!, {R4-R6,LR}\n"
"                LDR     R5, =0x66FC\n"
"                MOV     R4, R0\n"
"                LDR     R0, [R5,#4]\n"
"                CMP     R0, #1\n"
"                MOVNE   R1, #0x16C\n"
"                LDRNE   R0, =0xFFC77AF4\n"
"                BLNE    sub_FFC0C090\n"
"                CMN     R4, #0xC00\n"
"                LDREQSH R4, [R5,#2]\n"
"                CMN     R4, #0xC00\n"
"                LDREQ   R1, =0x172\n"
"                LDREQ   R0, =0xFFC77AF4\n"
"                STRH    R4, [R5,#2]\n"
"                BLEQ    sub_FFC0C090\n"
"                MOV     R0, R4\n"
//"                BL      sub_FFD7B458\n" //-
"                BL      apex2us\n" //+
"                MOV     R4, R0\n"
//"                BL      nullsub\n"
//"                MOV     R0, R4\n"
"                BL      sub_FFCAC394\n"
"                TST     R0, #1\n"
"                LDRNE   R1, =0x177\n"
"                LDMNEFD SP!, {R4-R6,LR}\n"
"                LDRNE   R0, =0xFFC77AF4\n"
"                BNE     sub_FFC0C090\n"
"                LDMFD   SP!, {R4-R6,PC}\n"
 );
}
