#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0x85C0;

#include "../../../generic/capt_seq.c"

void __attribute__((naked,noinline)) sub_FFD18614_my(){ 
 asm volatile(
                 "STMFD   SP!, {R0-R10,LR}\n"
                 "MOV     R6, #0\n"
                 "MOV     R4, R0\n"
                 "BL      sub_FFD19114\n"
                 "MVN     R1, #0\n"
                 "BL      sub_FFC178B8\n"
                 "MOV     R2, #4\n"
                 "ADD     R1, SP, #8\n"
                 "MOV     R0, #0x8A\n"
                 "BL      sub_FFC5DAB4\n"
                 "TST     R0, #1\n"
                 "LDRNE   R1, =0x218\n"
                 "LDRNE   R0, =0xFFD18828\n"
                 "BLNE    sub_FFC0BDB8\n"
                 "LDR     R8, =0x18980\n"
                 "LDR     R5, =0x188d4\n"
                 "LDRSH   R1, [R8,#0xE]\n"
                 "LDR     R0, [R5,#0x74]\n"
                 "BL      sub_FFCD399C\n"
                 "BL      sub_FFC37744\n"
                 "LDR     R2, =0x85C4\n"
                 "ADD     R3, R4, #0x8C\n"
                 "STRH    R0, [R4,#0x88]\n"
                 "STR     R2, [SP]\n"
                 "STR     R3, [SP,#4]\n"
                 "MOV     R1, R0\n"
                 "LDRH    R0, [R5,#0x4C]\n"
                 "LDRSH   R2, [R8,#0xC]\n"
                 "LDR     R3, =0x85C0\n"
				 "BL      sub_FFD19600\n"
                 //"BL      wait_until_remote_button_is_released\n"
                 "BL      capt_seq_hook_set_nr\n"
                 "B       sub_FFD18688\n"
 );
}
void __attribute__((naked,noinline)) task_CaptSeqTask_my() //#fs
{

	asm volatile (
"       STMFD	SP!, {R3-R7,LR}\n"
"		LDR	R6, =0x54C0\n"
"loc_FFC4F100:\n"
		
"		LDR	R0, [R6,#8]\n"
"		MOV	R2, #0\n"
"		MOV	R1, SP\n"
"		BL	sub_FFC17B08\n"
"		TST	R0, #1\n"
"		BEQ	loc_FFC4F12C\n"
"		LDR	R1, =0x48E\n"
"		LDR	R0, =0xFFC4EDF8\n" 
"		BL	sub_FFC0BDB8\n" //debug assert
"		BL	sub_FFC0BB70\n" //exit task
"		LDMFD	SP!, {R3-R7,PC}\n"
"loc_FFC4F12C:\n"	
"       LDR R0, [SP]\n"
"		LDR	R1, [R0]\n"
"		CMP	R1, #0x1A\n"
		"ADDLS	PC, PC,	R1,LSL#2\n"
		"B	loc_FFC4F354\n"
"loc_FFC4F140:\n"				
"		B	loc_FFC4F1AC\n"
"loc_FFC4F144:\n"				
"		B	loc_FFC4F1B4\n"
"loc_FFC4F148:\n"				
"		B	loc_FFC4F23C\n"
"loc_FFC4F14C:\n"				
"		B	loc_FFC4F250\n"
"loc_FFC4F150:\n"				
"		B	loc_FFC4F248\n"
"loc_FFC4F154:\n"				
"		B	loc_FFC4F258\n"
"loc_FFC4F158:\n"				
"		B	loc_FFC4F260\n"
"loc_FFC4F15C:\n"				
		"B	loc_FFC4F26C\n"
"loc_FFC4F160:\n"				
"		B	loc_FFC4F2C4\n"
"loc_FFC4F164:\n"				
		"B	loc_FFC4F250\n"
"loc_FFC4F168:\n"				
		"B	loc_FFC4F2CC\n"
"loc_FFC4F16C:\n"				
		"B	loc_FFC4F2D4\n"
"loc_FFC4F170:\n"				
		"B	loc_FFC4F2DC\n"
"loc_FFC4F174:\n"				
		"B	loc_FFC4F2E4\n"
"loc_FFC4F178:\n"				
"		B	loc_FFC4F2EC\n"
"loc_FFC4F17C:\n"				
"		B	loc_FFC4F2F4\n"
"loc_FFC4F180:\n"				
"		B	loc_FFC4F2FC\n"
"loc_FFC4F184:\n"				
		"B	loc_FFC4F304\n"
"loc_FFC4F188:\n"				
		"B	loc_FFC4F30C\n"
"loc_FFC4F18C:\n"				
		"B	loc_FFC4F318\n"
"loc_FFC4F190:\n"				
		"B	loc_FFC4F324\n"
"loc_FFC4F194:\n"				
		"B	loc_FFC4F32C\n"
"loc_FFC4F198:\n"				
		"B	loc_FFC4F334\n"
"loc_FFC4F19C:\n"				
		"B	loc_FFC4F33C\n"
"loc_FFC4F1A0:\n"				
		"B	loc_FFC4F344\n"
"loc_FFC4F1A4:\n"				
		"B	loc_FFC4F34C\n"
"loc_FFC4F1A8:\n"				
		"B	loc_FFC4F360\n"
"loc_FFC4F1AC:\n"			//jumptable entry 0
		"BL	sub_FFD1717C\n"
		"BL shooting_expo_param_override\n"
		"B	loc_FFC4F264\n"
"loc_FFC4F1B4:\n"			//jumptable entry 1
"		LDR	R4, [R0,#0xC]\n"
"		LDR	R0, [R4,#8]\n"
"		ORR	R0, R0,	#1\n"
"		STR	R0, [R4,#8]\n"
"		MOV	R0, #2\n"
"		BL	sub_FFC4A04C\n"
"		BL	sub_FFD1716C\n"
"		MOV	R0, R4\n"
"		BL	sub_FFD17554\n"
"		TST	R0, #1\n"
"		MOVNE	R2, R4\n"
"		MOVNE	R1, #1\n"
"		BNE	loc_FFC4F2BC\n"
"		BL	sub_FFD35780\n"
"		BL	sub_FFC5DC44\n"
"		STR	R0, [R4,#0x14]\n"
"		MOV	R0, R4\n"
"		BL	sub_FFD1854C\n"
"		BL	sub_FFD18FB0\n"
"		MOV	R0, R4\n"
"		BL	sub_FFD18614_my\n" //sub_ffd0a3cc on a720 get propety
		"BL capt_seq_hook_raw_here\n"
"		MOV	R5, R0\n"
"		BL	sub_FFD19F90\n"
"		BL	sub_FFD19FCC\n"
"		MOV	R2, R4\n"
"		MOV	R1, #1\n"
"		MOV	R0, R5\n"
"		BL	sub_FFC4D860\n"
"		BL	sub_FFD189C4\n"
"		CMP	R0, #0\n"
"		LDRNE	R0, [R4,#8]\n"
"		ORRNE	R0, R0,	#0x2000\n"
"		STRNE	R0, [R4,#8]\n"
"		B	loc_FFC4F360\n"

"loc_FFC4F23C:\n"		//jumptable entry 2		
"		MOV	R0, #1\n"
"		BL	sub_FFD17310\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F248:\n"				
"		BL	sub_FFD16DD0\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F250:\n"				
"		BL	sub_FFD1715C\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F258:\n"
"		BL	sub_FFD17164\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F260:\n"				
"		BL	sub_FFD17230\n"
"loc_FFC4F264:\n"				
"		BL	sub_FFC4D4E0\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F26C:\n"			
"		LDR	R4, [R0,#0xC]\n"
"		BL	sub_FFD1716C\n"
"		MOV	R0, R4\n"
"		BL	sub_FFD178D4\n"
"		TST	R0, #1\n"
"		MOV	R5, R0\n"
"		BNE	loc_FFC4F2AC\n"
"		BL	sub_FFC5DC44\n"
"		STR	R0, [R4,#0x14]\n"
"		MOV	R0, R4\n"
"		BL	sub_FFD1854C\n"
"		MOV	R0, R4\n"
"		BL	sub_FFD18A24\n"
"		MOV	R5, R0\n"
"		LDR	R0, [R4,#0x14]\n"
"		BL	sub_FFC5DE50\n"
"loc_FFC4F2AC:\n"				
"		BL	sub_FFD1715C\n"
"		MOV	R2, R4\n"
"		MOV	R1, #9\n"
"		MOV	R0, R5\n"
"loc_FFC4F2BC:\n"				
"		BL	sub_FFC4D860\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F2C4:\n"				
"		BL	sub_FFD17290\n"
"		B	loc_FFC4F264\n"
"loc_FFC4F2CC:\n"				
"		BL	sub_FFD17B50\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F2D4:\n"				
"		BL	sub_FFD17D38\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F2DC:\n"				
"		BL	sub_FFD17DC8\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F2E4:\n"				
"		BL	sub_FFD17E7C\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F2EC:\n"				
"		MOV	R0, #0\n"
"		B	loc_FFC4F310\n"
"loc_FFC4F2F4:\n"				
"		BL	sub_FFD18170\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F2FC:\n"				
"		BL	sub_FFD18204\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F304:\n"				
"		BL	sub_FFD182CC\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F30C:\n"				
"		MOV	R0, #1\n"
"loc_FFC4F310:\n"		
"		BL	sub_FFD18020\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F318:\n"
"		BL	sub_FFD1742C\n"
"		BL	sub_FFC14A34\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F324:\n"				
"		BL	sub_FFD17F38\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F32C:\n"				
"		BL	sub_FFD17F7C\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F334:\n"				
"		BL	sub_FFD19F74\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F33C:\n"				
"		BL	sub_FFD19F90\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F344:\n"				
"		BL	sub_FFD19FA0\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F34C:\n"				
		"BL	sub_FFD19FCC\n"
"		B	loc_FFC4F360\n"
"loc_FFC4F354:\n"
"		LDR	R1, =0x58E\n"
"		LDR	R0, =0xFFC4EDF8\n"		// =aSsshoottask_c
"		BL	sub_FFC0BDB8\n"			//assert
"loc_FFC4F360:\n"
		//"LDR	R0, [SP,#0x18+var_18]\n"
		"LDR     R0, [SP]\n"
"		LDR	R1, [R0,#4]\n"
"		LDR	R0, [R6,#4]\n"
"		BL	sub_FFC17884\n"
		//"LDR	R4, [SP,#0x18+var_18]\n"
		"LDR    R4, [SP]\n"
"		LDR	R0, [R4,#8]\n"
"		CMP	R0, #0\n"
"		LDREQ	R1, =0x10D\n"
"		LDREQ	R0, =0xFFC4EDF8\n"  //"SsShootTask.c"
"		BLEQ	sub_FFC0BDB8\n" //debug assert
"		MOV	R0, #0\n"
"		STR	R0, [R4,#8]\n"
"		B	loc_FFC4F100\n"
);
}

/*************************************************************/
void __attribute__((naked,noinline)) exp_drv_task(){
 asm volatile(
"                STMFD   SP!, {R4-R8,LR}\n"
"                SUB     SP, SP, #0x20\n"
"                LDR     R8, =0xBB8\n"
"                LDR     R7, =0x66F8\n"
"                LDR     R5, =0x3C63C\n"
"                MOV     R0, #0\n"
"                ADD     R6, SP, #0x10\n"
"                STR     R0, [SP,#0xC]\n"
"loc_FFC97404:\n"
"                LDR     R0, [R7,#0x20]\n"
"                MOV     R2, #0\n"
"                ADD     R1, SP, #0x1C\n"
"                BL      sub_FFC17B08\n" // KerQueue.c:0
"                LDR     R0, [SP,#0xC]\n"
"                CMP     R0, #1\n"
"                BNE     loc_FFC9744C\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R0, [R0]\n"
"                CMP     R0, #0x13\n"
"                CMPNE   R0, #0x14\n"
"                CMPNE   R0, #0x15\n"
"                BEQ     loc_FFC97568\n"
"                CMP     R0, #0x27\n"
"                BEQ     loc_FFC97540\n"
"                ADD     R1, SP, #0xC\n"
"                MOV     R0, #0\n"
"                BL      sub_FFC97394\n" // ExpDrv.c:512
"loc_FFC9744C:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x2C\n"
"                BNE     loc_FFC9747C\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FFC98648\n" // ExpDrv.c:268
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #1\n"
"                BL      sub_FFC17884\n"
"                BL      _ExitTask\n"
"                ADD     SP, SP, #0x20\n"
"                LDMFD   SP!, {R4-R8,PC}\n"
"loc_FFC9747C:\n"
"                CMP     R1, #0x2B\n"
"                BNE     loc_FFC97498\n"
"                LDR     R2, [R0,#0x88]!\n"
"                LDR     R1, [R0,#4]\n"
"                MOV     R0, R1\n"
"                BLX     R2\n"
"                B       loc_FFC979CC\n"
"loc_FFC97498:\n"
"                CMP     R1, #0x25\n"
"                BNE     loc_FFC974E8\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FFC178B8\n"
"                LDR     R0, =0xFFC93E54\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FFD0C000\n" // IrisController.c:95
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R8\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FFC177BC\n" // KerFlag.c:0
"                TST     R0, #1\n"
"                LDRNE   R1, =0xD1B\n"
"                BNE     loc_FFC9752C\n"
"loc_FFC974D4:\n"
"                LDR     R1, [SP,#0x1C]\n"
"                LDR     R0, [R1,#0x8C]\n"
"                LDR     R1, [R1,#0x88]\n"
"                BLX     R1\n"
"                B       loc_FFC979CC\n"
"loc_FFC974E8:\n"
"                CMP     R1, #0x26\n"
"                BNE     loc_FFC97538\n"
"                ADD     R1, SP, #0xC\n"
"                BL      sub_FFC97394\n" // ExpDrv.c:512
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x100\n"
"                BL      sub_FFC178B8\n"
"                LDR     R0, =0xFFC93E64\n"
"                MOV     R1, #0x100\n"
"                BL      sub_FFD0C96C\n" // IrisController.c:0
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R8\n"
"                MOV     R1, #0x100\n"
"                BL      sub_FFC177BC\n" // KerFlag.c:0
"                TST     R0, #1\n"
"                BEQ     loc_FFC974D4\n"
"                LDR     R1, =0xD25\n"
"loc_FFC9752C:\n"
"                LDR     R0, =0xFFC94554\n"
"                BL      sub_FFC0BDB8\n" // DebugAssert
"                B       loc_FFC974D4\n"
"loc_FFC97538:\n"
"                CMP     R1, #0x27\n"
"                BNE     loc_FFC97550\n"
"loc_FFC97540:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                ADD     R1, SP, #0xC\n"
"                BL      sub_FFC97394\n" // ExpDrv.c:512
"                B       loc_FFC974D4\n"
"loc_FFC97550:\n"
"                CMP     R1, #0x2A\n"
"                BNE     loc_FFC97568\n"
"                BL      sub_FFC76800\n" // Shutter.c:2
"                BL      sub_FFC775CC\n" // ImgPixel.c:0
"                BL      sub_FFC77050\n" // ImgGain.c:0
"                B       loc_FFC974D4\n"
"loc_FFC97568:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R4, #1\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x11\n"
"                CMPNE   R1, #0x12\n"
"                BNE     loc_FFC975D8\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R1, R0, R1,LSL#2\n"
"                SUB     R1, R1, #8\n"
"                LDMIA   R1, {R2-R4}\n"
"                STMIA   R6, {R2-R4}\n"
"                BL      sub_FFC95F08\n" // ExpDrv.c:2
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FFC98A20\n" // ExpDrv.c:0
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x90]\n"
"                LDR     R2, [R0,#0x94]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                B       loc_FFC9790C\n"
"loc_FFC975D8:\n"
"                CMP     R1, #0x13\n"
"                CMPNE   R1, #0x14\n"
"                CMPNE   R1, #0x15\n"
"                BNE     loc_FFC9768C\n"
"                ADD     R3, SP, #0xC\n"
"                MOV     R2, SP\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFC96150\n" // ExpDrv.c:0
"                CMP     R0, #1\n"
"                MOV     R4, R0\n"
"                CMPNE   R4, #5\n"
"                BNE     loc_FFC97628\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, R4\n"
"                LDR     R1, [R0,#0x7C]!\n"
"                LDR     R12, [R0,#0xC]!\n"
"                LDR     R3, [R0,#4]\n"
"                MOV     R0, SP\n"
"                BLX     R12\n"
"                B       loc_FFC97660\n"
"loc_FFC97628:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                CMP     R4, #2\n"
"                LDR     R3, [R0,#0x8C]\n"
"                CMPNE   R4, #6\n"
"                BNE     loc_FFC97674\n"
"                LDR     R12, [R0,#0x88]\n"
"                MOV     R0, SP\n"
"                MOV     R2, R4\n"
"                MOV     R1, #1\n"
"                BLX     R12\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, SP\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFC970E0\n" // ExpDrv.c:0
"loc_FFC97660:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R2, [SP,#0xC]\n"
"                MOV     R1, R4\n"
"                BL      sub_FFC97334\n" // ExpDrv.c:2
"                B       loc_FFC9790C\n"
"loc_FFC97674:\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R12, [R0,#0x88]\n"
"                ADD     R0, R0, #4\n"
"                MOV     R2, R4\n"
"                BLX     R12\n"
"                B       loc_FFC9790C\n"
"loc_FFC9768C:\n"
"                CMP     R1, #0x21\n"
"                CMPNE   R1, #0x22\n"
"                BNE     loc_FFC976D8\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R1, R0, R1,LSL#2\n"
"                SUB     R1, R1, #8\n"
"                LDMIA   R1, {R2-R4}\n"
"                STMIA   R6, {R2-R4}\n"
"                BL      sub_FFC95488\n" // ExpDrv.c:0
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FFC95784\n" // ExpDrv.c:0
"                B       loc_FFC9790C\n"
"loc_FFC976D8:\n"
"                ADD     R1, R0, #4\n"
"                LDMIA   R1, {R2,R3,R12}\n"
"                STMIA   R6, {R2,R3,R12}\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x24\n"
"                ADDLS   PC, PC, R1,LSL#2\n"
"                B       loc_FFC978EC\n"
"                B       loc_FFC97788\n"
"                B       loc_FFC97788\n"
"                B       loc_FFC97790\n"
"                B       loc_FFC97798\n"
"                B       loc_FFC97798\n"
"                B       loc_FFC97798\n"
"                B       loc_FFC97788\n"
"                B       loc_FFC97790\n"
"                B       loc_FFC97798\n"
"                B       loc_FFC97798\n"
"                B       loc_FFC977F4\n"
"                B       loc_FFC977F4\n"
"                B       loc_FFC978E0\n"
"                B       loc_FFC978E8\n"
"                B       loc_FFC978E8\n"
"                B       loc_FFC978E8\n"
"                B       loc_FFC978E8\n"
"                B       loc_FFC978EC\n"
"                B       loc_FFC978EC\n"
"                B       loc_FFC978EC\n"
"                B       loc_FFC978EC\n"
"                B       loc_FFC978EC\n"
"                B       loc_FFC977A0\n"
"                B       loc_FFC977A8\n"
"                B       loc_FFC977A8\n"
"                B       loc_FFC97800\n"
"                B       loc_FFC97800\n"
"                B       loc_FFC97808\n"
"                B       loc_FFC97838\n"
"                B       loc_FFC97868\n"
"                B       loc_FFC97898\n"
"                B       loc_FFC978C8\n"
"                B       loc_FFC978C8\n"
"                B       loc_FFC978EC\n"
"                B       loc_FFC978EC\n"
"                B       loc_FFC978D0\n"
"                B       loc_FFC978D8\n"
"loc_FFC97788:\n"
// jumptable FFC976EC entries 0,1,6
"                BL      sub_FFC9433C\n" // __ExpDrv_c__800
"                B       loc_FFC978EC\n"
"loc_FFC97790:\n"
// jumptable FFC976EC entries 2,7
"                BL      sub_FFC945CC\n" // __ExpDrv_c__0
"                B       loc_FFC978EC\n"
"loc_FFC97798:\n"
// jumptable FFC976EC entries 3-5,8,9
"                BL      sub_FFC947D0\n" // __ExpDrv_c__0
"                B       loc_FFC978EC\n"
"loc_FFC977A0:\n"
// jumptable FFC976EC entry 22
"                BL      sub_FFC94A38\n" // __ExpDrv_c__2
"                B       loc_FFC978EC\n"
"loc_FFC977A8:\n"
// jumptable FFC976EC entries 23,24
"                BL      sub_FFC94C2C\n" // __ExpDrv_c__11
"                B       loc_FFC978EC\n"
/*
"dword_FFC977B0  DCD 0xB1D\n"
"dword_FFC977B4  DCD 0xBAD\n"
"dword_FFC977B8  DCD 0xC24\n"
"dword_FFC977BC  DCD 0xC32\n"
"dword_FFC977C0  DCD 0xC7B\n"
"dword_FFC977C4  DCD 0x808\n"
"dword_FFC977C8  DCD 0xC8E\n"
"dword_FFC977CC  DCD 0xC94\n"
"dword_FFC977D0  DCD 0xCE8\n"
"dword_FFC977D4  DCD 0xD0E\n"
"dword_FFC977D8  DCD 0xD11\n"
"off_FFC977DC    DCD loc_FFC93E74\n"
"dword_FFC977E0  DCD 0xD42\n"
"dword_FFC977E4  DCD 0x3C63C\n"
"dword_FFC977E8  DCD 0xD1B\n"
"off_FFC977EC    DCD loc_FFC93E64\n"
"dword_FFC977F0  DCD 0xD25\n"
*/
"loc_FFC977F4:\n"
// jumptable FFC976EC entries 10,11
"                BL      sub_FFC94E94_my\n" // __ExpDrv_c__2
"                MOV     R4, #0\n"
"                B       loc_FFC978EC\n"
"loc_FFC97800:\n"
// jumptable FFC976EC entries 25,26
"                BL      sub_FFC94FD0\n" //__ExpDrv_c__11\n"
"                B       loc_FFC978EC\n"
"loc_FFC97808:\n"
// jumptable FFC976EC entry 27
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
"                BL      sub_FFC986BC\n" // ExpDrv.c:2
"                B       loc_FFC978EC\n"
"loc_FFC97838:\n"
// jumptable FFC976EC entry 28
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
"                BL      sub_FFC9883C\n" // ExpDrv.c:2
"                B       loc_FFC978EC\n"
"loc_FFC97868:\n"
// jumptable FFC976EC entry 29
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
"                BL      sub_FFC988E8\n" // ExpDrv.c:0
"                B       loc_FFC978EC\n"
"loc_FFC97898:\n"
// jumptable FFC976EC entry 30
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
"                BL      sub_FFC98988\n" // ExpDrv.c:32
"                B       loc_FFC978EC\n"
"loc_FFC978C8:\n"
// jumptable FFC976EC entries 31,32
"                BL      sub_FFC95244\n" // ExpDrv_c__0
"                B       loc_FFC978EC\n"
"loc_FFC978D0:\n"
// jumptable FFC976EC entry 35
"                BL      sub_FFC95888\n" // ExpDrv_c__10
"                B       loc_FFC978EC\n"
"loc_FFC978D8:\n"
// jumptable FFC976EC entry 36
"                BL      sub_FFC95AC0\n" // ExpDrv_c__0
"                B       loc_FFC978EC\n"
"loc_FFC978E0:\n"
// jumptable FFC976EC entry 12
"                BL      sub_FFC95C38\n" // ExpDrv_c__2
"                B       loc_FFC978EC\n"
"loc_FFC978E8:\n"
// jumptable FFC976EC entries 13-16
"                BL      sub_FFC95DD0\n" // ExpDrv_c__128
"loc_FFC978EC:\n"
// jumptable FFC976EC default entry
// jumptable FFC976EC entries 17-21,33,34
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                CMP     R4, #1\n"
"                BNE     loc_FFC97954\n"
"loc_FFC9790C:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, #0xC\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R0, R0, R1,LSL#2\n"
"                SUB     R4, R0, #8\n"
"                LDR     R0, =0x3C63C\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFE668C4\n"
"                LDR     R0, =0x3C648\n"
"                MOV     R2, #0xC\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFE668C4\n"
"                LDR     R0, =0x3C654\n"
"                MOV     R2, #0xC\n"
"                MOV     R1, R4\n"
"                BL      sub_FFE668C4\n"
"                B       loc_FFC979CC\n"
"loc_FFC97954:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R0, [R0]\n"
"                CMP     R0, #0xB\n"
"                BNE     loc_FFC9799C\n"
"                MOV     R3, #0\n"
"                STR     R3, [SP]\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #0\n"
"                BL      sub_FFC94144\n"
"                MOV     R3, #0\n"
"                STR     R3, [SP]\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #0\n"
"                B       loc_FFC979C8\n"
"loc_FFC9799C:\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #1\n"
"                STR     R3, [SP]\n"
"                BL      sub_FFC94144\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #1\n"
"                STR     R3, [SP]\n"
"loc_FFC979C8:\n"
"                BL      sub_FFC94284\n"
"loc_FFC979CC:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FFC98648\n" // ExpDrv.c:268
"                B       loc_FFC97404\n"
// End of function task_ExpDrvTask
 );
}

void __attribute__((naked,noinline)) sub_FFC94E94_my() { // ExpDrv_c__2
 asm volatile(
"                STMFD   SP!, {R4-R8,LR}\n"
"                LDR     R7, =0x66F8\n"
"                MOV     R4, R0\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x3E\n"
"                BL      sub_FFC178B8\n"
"                LDRSH   R0, [R4,#4]\n"
"                MOV     R2, #0\n"
"                MOV     R1, #0\n"
"                BL      sub_FFC93ED8\n"
"                MOV     R6, R0\n"
"                LDRSH   R0, [R4,#6]\n"
"                BL      sub_FFC93FE4\n"
"                LDRSH   R0, [R4,#8]\n"
"                BL      sub_FFC9403C\n"
"                LDRSH   R0, [R4,#0xA]\n"
"                BL      sub_FFC94094\n"
"                LDRSH   R0, [R4,#0xC]\n"
"                BL      sub_FFC940EC\n"
"                MOV     R5, R0\n"
"                LDR     R0, [R4]\n"
"                LDR     R8, =0x3C654\n"
"                CMP     R0, #0xB\n"
"                MOVEQ   R6, #0\n"
"                MOVEQ   R5, #0\n"
"                BEQ     loc_FFC94F24\n"
"                CMP     R6, #1\n"
"                BNE     loc_FFC94F24\n"
"                LDRSH   R0, [R4,#4]\n"
"                LDR     R1, =0xFFC93E44\n"
"                MOV     R2, #2\n"
"                BL      sub_FFD0C328\n" // IrisController.c:169
"                STRH    R0, [R4,#4]\n"
"                MOV     R0, #0\n"
"                STR     R0, [R7,#0x28]\n"
"                B       loc_FFC94F2C\n"
"loc_FFC94F24:\n"
"                LDRH    R0, [R8]\n"
"                STRH    R0, [R4,#4]\n"
"loc_FFC94F2C:\n"
"                CMP     R5, #1\n"
"                LDRNEH  R0, [R8,#8]\n"
"                BNE     loc_FFC94F48\n"
"                LDRSH   R0, [R4,#0xC]\n"
"                MOV     R2, #0x20\n"
"                LDR     R1, =0xFFC93EC8\n"
"                BL      sub_FFC98678\n"
"loc_FFC94F48:\n"
"                STRH    R0, [R4,#0xC]\n"
"                LDRSH   R0, [R4,#6]\n"
"                BL      sub_FFC7654C_my\n" // Shutter.c:0
"                LDRSH   R0, [R4,#8]\n"
"                MOV     R1, #1\n"
"                BL      sub_FFC76D48\n" // ImgGain.c:0
"                MOV     R1, #0\n"
"                ADD     R0, R4, #8\n"
"                BL      sub_FFC76DD0\n" // ImgGain.c:0
"                LDRSH   R0, [R4,#0xE]\n"
"                BL      sub_FFC8AE14\n" // BrtCrct.c:552
"                LDR     R4, =0xBB8\n"
"                CMP     R6, #1\n"
"                BNE     loc_FFC94FA0\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R4\n"
"                MOV     R1, #2\n"
"                BL      sub_FFC177BC\n" // KerFlag.c:0
"                TST     R0, #1\n"
"                LDRNE   R1, =0x532\n"
"                LDRNE   R0, =0xFFC94554\n" // "ExpDrv.c"
"                BLNE    sub_FFC0BDB8\n" // DebugAssert
"loc_FFC94FA0:\n"
"                CMP     R5, #1\n"
"                LDMNEFD SP!, {R4-R8,PC}\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R4\n"
"                MOV     R1, #0x20\n"
"                BL      sub_FFC177BC\n" // KerFlag.c:0
"                TST     R0, #1\n"
"                LDRNE   R1, =0x537\n"
"                LDRNE   R0, =0xFFC94554\n" // "ExpDrv.c"
"                LDMNEFD SP!, {R4-R8,LR}\n"
"                BNE     sub_FFC0BDB8\n" // DebugAssert
"                LDMFD   SP!, {R4-R8,PC}\n"
 );
}

void __attribute__((naked,noinline)) sub_FFC7654C_my() { // Shutter_c
 asm volatile(
"                STMFD   SP!, {R4-R6,LR}\n"
"                LDR     R5, =0x619C\n"
"                MOV     R4, R0\n"
"                LDR     R0, [R5,#4]\n"
"                CMP     R0, #1\n"
"                LDRNE   R1, =0x16D\n"
"                LDRNE   R0, =0xFFC762E4\n" // "Shutter.c"
"                BLNE    sub_FFC0BDB8\n" // DebugAssert
"                CMN     R4, #0xC00\n"
"                LDREQSH R4, [R5,#2]\n"
"                CMN     R4, #0xC00\n"
"                LDREQ   R1, =0x173\n"
"                LDREQ   R0, =0xFFC762E4\n" // "Shutter.c"
"                STRH    R4, [R5,#2]\n"
"                BLEQ    sub_FFC0BDB8\n" // DebugAssert
"                MOV     R0, R4\n"
//"                BL      sub_FFD7DD6C\n" // -
"                BL      apex2us\n" // +
"                MOV     R4, R0\n"
//"                BL      nullsub_187\n"
"                MOV     R0, R4\n"
"                BL      sub_FFCAA6BC\n"
"                TST     R0, #1\n"
"                LDMNEFD SP!, {R4-R6,LR}\n"
"                MOVNE   R1, #0x178\n"
"                LDRNE   R0, =0xFFC762E4\n" // "Shutter.c"
"                BNE     sub_FFC0BDB8\n" // DebugAssert
"                LDMFD   SP!, {R4-R6,PC}\n"
 );
}
