#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0xE618;

#include "../../../generic/capt_seq.c"




//ok
void __attribute__((naked,noinline)) task_CaptSeqTask_my() //#fs  //FF861210
{
	asm volatile (
                "STMFD   SP!, {R3-R9,LR}\n"
                "LDR     R6, =0x1E454\n"
                "LDR     R5, =0x583C\n"
                "MOV     R9, #1\n"
                "MOV     R7, #0\n"
"loc_FF861224:\n"
                "LDR     R0, [R5,#0x14]\n"
                "MOV     R2, #0\n"
                "MOV     R1, SP\n"
                "BL      sub_FF829FB0\n"
                "TST     R0, #1\n"
                "BEQ     loc_FF861250\n"
                "LDR     R1, =0x43F\n"
                "LDR     R0, =0xFF860C6C\n" 	// aSsshoottask_c 
                "BL      sub_FF81BFC8\n"    	// DebugAssert
                "BL      sub_FF81BD80\n"    	// ExitTask 
                "LDMFD   SP!, {R3-R9,PC}\n"
"loc_FF861250:\n"
                "LDR     R0, [SP]\n"
                "LDR     R1, [R0]\n"

                "LDR     R2, =0x1850\n"         //NOT  IN  G9...!!! Save jumptable-target ...
                "STR     R1, [R2]\n"            //NOT  IN  G9...!!! ...to some unused space. Read and displayed in GUI in core/gui.c

                "CMP     R1, #0x1C\n"
                "ADDLS   PC, PC, R1,LSL#2\n"
                "B       loc_FF8614AC\n"        // 0: error handler (invalid jump offset) (also when shutter half-pressed?) was FFC4CD80
                "B       loc_FF8612D8\n"        // 1: immediately after shutter release, !modify this one!
                "B       loc_FF861348\n"		// 2:
                "B       loc_FF861350\n"        // 3: default if shutter not pressed
                "B       loc_FF861368\n"        // 4: after shutter release, when timed image preview active
                "B       loc_FF86135C\n"        // 5: after shutter release, in detailed image review
                "B       loc_FF861370\n"		// 6:
                "B       loc_FF861378\n"		// 7:
                "B       loc_FF861380\n"		// 8:
                "B       loc_FF8613D8\n"        // 9: also ends with continuation of #1
                "B       loc_FF8613E4\n"        // 10:
                "B       loc_FF8613EC\n"        // 11:
                "B       loc_FF8613F4\n"        // 12:
                "B       loc_FF8613FC\n"        // 13:
                "B       loc_FF861404\n"        // 14:
                "B       loc_FF86140C\n"        // 15: in image-viewer
                "B       loc_FF861414\n"        // 16:
                "B       loc_FF86141C\n"        // 17:
                "B       loc_FF861424\n"        // 18:
                "B       loc_FF86142C\n"        // 19:
                "B       loc_FF861434\n"        // 20:
                "B       loc_FF86143C\n"        // 21:
                "B       loc_FF861444\n"        // 22:               
				"B       loc_FF861450\n"        // 23:
				"B       loc_FF86145C\n"        // 24:
				"B       loc_FF861464\n"        // 25:
				"B       loc_FF861494\n"        // 26:
				"B       loc_FF86149C\n"        // 27:
				"B       loc_FF8614A4\n"        // 28:
				"B       loc_FF8614B8\n"        // 29:				
"loc_FF8612D8:\n"
                "BL      sub_FF942414\n"
                "BL      shooting_expo_param_override\n"  // chdk  + add NEW str   !!!  ------------------
                "BL      sub_FF85F050\n"
                "LDR     R0, [R6,#0x24]\n"
                "CMP     R0, #0\n"
                "BEQ     loc_FF8614B8\n"
                "BL      sub_FF860938\n"
                "MOV     R4, R0\n"
                "LDR     R0, [R6,#0x24]\n"
                "CMP     R0, #0\n"
                "BEQ     loc_FF861320\n"
                "MOV     R0, #0xC\n"
                "BL      sub_FF86499C\n"
                "TST     R0, #1\n"
                "STRNE   R9, [R5,#4]\n"
                "LDRNE   R0, [R4,#8]\n"
                "ORRNE   R0, R0, #0x40000000\n"
                "STRNE   R0, [R4,#8]\n"
                "BNE     loc_FF8614B8\n"
"loc_FF861320:\n"
                "MOV     R0, R4\n"
                "BL      sub_FF943EB0\n"
                "BL      sub_FF957BD8\n"
                "BL      sub_FF86F8F8\n"
                "STR     R0, [R4,#0x14]\n"
                "MOV     R0, R4\n"
                //"BL      sub_FF944478\n"
                "BL      sub_FF944408_my\n"		// ----------->
                "BL      capt_seq_hook_raw_here\n"      // ++
                "TST     R0, #1\n"
                "STRNE   R9, [R5,#4]\n"
                "B       loc_FF8614B8\n"
				
				
				
"loc_FF861348:\n"
                //"BL      sub_FF860CEC\n"
                "BL      sub_FF860CEC_my\n"
                "B       loc_FF861360\n"
				
				
"loc_FF861350:\n"
                "MOV     R0, #1\n"
                "BL      sub_FF942614\n" 	  //"BL      sub_FF942614_my\n" ????????	//---------->
                "B       loc_FF8614B8\n"
				
				
"loc_FF86135C:\n"
                "BL      sub_FF942110\n"
"loc_FF861360:\n"
                "STR     R7, [R6,#0x24]\n"
                "B       loc_FF8614B8\n"
				
				
"loc_FF861368:\n"
                "BL      sub_FF9423A8\n"
                "B       loc_FF861360\n"
				
"loc_FF861370:\n"
                "BL      sub_FF9423B0\n"
                "B       loc_FF8614B8\n"
				
				
"loc_FF861378:\n"
                "BL      sub_FF942504\n"
                "B       loc_FF8613DC\n"
"loc_FF861380:\n"
                "LDR     R4, [R0,#0xC]\n"
                "BL      sub_FF9423B8\n" 	//UiEvnt_StartDisguiseCradleStatus_4
                "MOV     R0, R4\n"
                "BL      sub_FF942F48\n"
                "TST     R0, #1\n"
                "MOV     R8, R0\n"
                "BNE     loc_FF8613C0\n"
                "BL      sub_FF86F8F8\n"
                "STR     R0, [R4,#0x14]\n"
                "MOV     R0, R4\n"
                "BL      sub_FF944320\n"
                "MOV     R0, R4\n"
                "BL      sub_FF944914\n"
                "MOV     R8, R0\n"
                "LDR     R0, [R4,#0x14]\n"
                "BL      sub_FF86FB0C\n"
"loc_FF8613C0:\n"
                "BL      sub_FF9423A8\n"
                "MOV     R2, R4\n"
                "MOV     R1, #8\n"
                "MOV     R0, R8\n"
                "BL      sub_FF85F620\n"
                "B       loc_FF8614B8\n"
"loc_FF8613D8:\n"
                "BL      sub_FF942590\n"
"loc_FF8613DC:\n"
                "BL      sub_FF85F050\n"
                "B       loc_FF8614B8\n"
"loc_FF8613E4:\n"
                "BL      sub_FF9423A8\n"
                "B       loc_FF8614B8\n"
"loc_FF8613EC:\n"
                "BL      sub_FF9431C0\n"
                "B       loc_FF8614B8\n"
"loc_FF8613F4:\n"
                "BL      sub_FF9433BC\n"
                "B       loc_FF8614B8\n"
"loc_FF8613FC:\n"
                "BL      sub_FF943450\n"
                "B       loc_FF8614B8\n"
"loc_FF861404:\n"
                "BL      sub_FF943578\n"
                "B       loc_FF8614B8\n"
"loc_FF86140C:\n"
                "BL      sub_FF94362C\n"
                "B       loc_FF8614B8\n"
"loc_FF861414:\n"
                "BL      sub_FF943A00\n"
                "B       loc_FF8614B8\n"
"loc_FF86141C:\n"
                "BL      sub_FF943A50\n"
                "B       loc_FF8614B8\n"
"loc_FF861424:\n"
                "MOV     R0, #0\n"
                "B       loc_FF861448\n"
"loc_FF86142C:\n"
                "BL      sub_FF943BF4\n"
                "B       loc_FF8614B8\n"
"loc_FF861434:\n"
                "BL      sub_FF943C88\n"
                "B       loc_FF8614B8\n"
"loc_FF86143C:\n"
                "BL      sub_FF943D48\n"
                "B       loc_FF8614B8\n"
"loc_FF861444:\n"
                "MOV     R0, #1\n"
"loc_FF861448:\n"
                "BL      sub_FF943AB4\n"
                "B       loc_FF8614B8\n"
"loc_FF861450:\n"
                "BL      sub_FF9427B0\n"
                "BL      sub_FF8615D0\n"
                "B       loc_FF8614B8\n"
"loc_FF86145C:\n"
                "BL      sub_FF9438A4\n"
                "B       loc_FF8614B8\n"
"loc_FF861464:\n"
                "MOV     R2, #2\n"
                "ADD     R1, R6, #0x58\n"
                "MOV     R0, #0x6F\n"
                "BL      sub_FF86F768\n" 	//PT_GetPropertyCaseString
                "TST     R0, #1\n"
                "LDRNE   R1, =0x502\n"
                "LDRNE   R0, =0xFF860C6C\n" 	// aSsshoottask_c
                "BLNE    sub_FF81BFC8\n" 		// DebugAssert
                "LDRH    R0, [R6,#0x58]\n"
                "CMP     R0, #1\n"
                "BLEQ    sub_FF943898\n"
                "B       loc_FF8614B8\n"
"loc_FF861494:\n"
                "BL      sub_FF943968\n"
                "B       loc_FF8614B8\n"
"loc_FF86149C:\n"
                "BL      sub_FF860BD0\n"
                "B       loc_FF8614B8\n"
"loc_FF8614A4:\n"
                "BL      sub_FF826210\n"
                "B       loc_FF8614B8\n"
"loc_FF8614AC:\n"
                "LDR     R1, =0x523\n"
                "LDR     R0, =0xFF860C6C\n" 	// aSsshoottask_c
                "BL      sub_FF81BFC8\n" 		// DebugAssert       
"loc_FF8614B8:\n"
                "LDR     R0, [SP]\n"
                "LDR     R1, [R0,#4]\n"
                "LDR     R0, [R5,#0x10]\n"
                "BL      sub_FF829D2C\n"
                "LDR     R4, [SP]\n"
                "LDR     R0, [R4,#8]\n"
                "CMP     R0, #0\n"
                "LDREQ   R0, =0xFF860C6C\n" 	// aSsshoottask
                "MOVEQ   R1, #0xFC\n"
                "BLEQ    sub_FF81BFC8\n" 		// DebugAssert
                "STR     R7, [R4,#8]\n"
                "B       loc_FF861224\n"
    );
} //#fe


//ok
void __attribute__((naked,noinline)) sub_FF860CEC_my(){ // 
 asm volatile(
                "STMFD   SP!, {R3-R9,LR}\n"
                "LDR     R4, [R0,#0xC]\n"
                "LDR     R5, =0x1E454\n"
                "LDR     R0, [R4,#8]\n"
                "LDR     R6, =0x820A\n"
                "ORR     R0, R0, #1\n"
                "STR     R0, [R4,#8]\n"
                "LDRH    R0, [R5]\n"
                "LDR     R8, =0x583C\n"
                "MOV     R7, #0\n"
                "CMP     R0, R6\n"
                "BEQ     loc_FF860D90\n"
                "LDRH    R0, [R5,#0x86]\n"
                "CMP     R0, #3\n"
                "BEQ     loc_FF860DF0\n"
                "LDR     R0, [R4,#0xC]\n"
                "CMP     R0, #1\n"
                "BLS     loc_FF860D9C\n"
                "LDRH    R0, [R5,#0x84]\n"
                "CMP     R0, #0\n"
                "BNE     loc_FF860DF0\n"
                "LDRH    R0, [R5,#0x80]\n"
                "CMP     R0, #2\n"
                "BNE     loc_FF860DA8\n"
                "BL      sub_FF942864\n"
                "LDRH    R0, [R5]\n"
                "CMP     R0, R6\n"
                "BEQ     loc_FF860D90\n"
                "LDRH    R0, [R5,#0x86]\n"
                "CMP     R0, #3\n"
                "BEQ     loc_FF860DF0\n"
                "LDR     R0, [R4,#0xC]\n"
                "CMP     R0, #1\n"
                "BLS     loc_FF860D9C\n"
                "LDRH    R0, [R5,#0x84]\n"
                "CMP     R0, #0\n"
                "BNE     loc_FF860DF0\n"
                "LDRH    R0, [R5,#0x80]\n"
                "CMP     R0, #2\n"
                "BEQ     loc_FF860DD4\n"
                "B       loc_FF860DA8\n"
"loc_FF860D90:\n"
                "LDRH    R0, [R5,#0x86]\n"
                "CMP     R0, #3\n"
                "BEQ     loc_FF860DF0\n"
"loc_FF860D9C:\n"
                "LDRH    R0, [R5,#0x84]\n"
                "CMP     R0, #0\n"
                "BNE     loc_FF860DF0\n"
"loc_FF860DA8:\n"
                "LDRH    R0, [R5,#0x80]\n"
                "CMP     R0, #1\n"
                "BNE     loc_FF860DF0\n"
                "LDRH    R0, [R5]\n"
                "CMP     R0, R6\n"
                "LDRNE   R0, [R4,#0xC]\n"
                "CMPNE   R0, #1\n"
                "BLS     loc_FF860DF0\n"
                "LDR     R0, [R4,#0x10]\n"
                "CMP     R0, #1\n"
                "BNE     loc_FF860DF0\n"
"loc_FF860DD4:\n"
                "LDR     R3, =0x20D\n"
                "LDR     R2, =0xEA60\n"
                "STR     R3, [SP]\n"
                "LDR     R0, [R8,#0x10]\n"
                "LDR     R3, =0xFF860C6C\n"		//aSsshoottask_c 
                "MOV     R1, #0x40000000\n"
                "BL      sub_FF864D24\n"
"loc_FF860DF0:\n"
                "BL      sub_FF860BD0\n"
                "LDR     R0, [R5,#0x24]\n"
                "CMP     R0, #0\n"
                "MOVEQ   R0, #2\n"
                "BLEQ    sub_FF85B94C\n"
                "BL      sub_FF9423B8\n"		//UiEvnt_StartDisguiseCradleStatus_4
                "LDR     R0, [R5,#0x24]\n"
                "CMP     R0, #0\n"
                "BNE     loc_FF860E60\n"
                "MOV     R0, R4\n"
                "BL      sub_FF943EB0\n"
                "MOV     R0, R4\n"
                "BL      sub_FF942B20\n"
                "TST     R0, #1\n"
                "MOVNE   R2, R4\n"
                "LDMNEFD SP!, {R3-R9,LR}\n"
                "MOVNE   R1, #1\n"
                "BNE     sub_FF85F620\n"
                "BL      sub_FF957BD8\n"

//				"BL      shooting_expo_param_override\n"  // +-----------> Override Canon stuff :)

                "BL      sub_FF86F8F8\n"
                "STR     R0, [R4,#0x14]\n"
                "MOV     R0, R4\n"
                "BL      sub_FF944320\n"
                "BL      sub_FF944E60\n"
                "MOV     R0, R4\n"
                //"BL      sub_FF944478\n"	// This is where shooting AND darkframe sub is done
                "BL      sub_FF944408_my\n"	// so hook it
                "MOV     R7, R0\n"

                "BL      capt_seq_hook_raw_here\n" // +-----------> Capture RAW, camera already did badpixel-sub (always) though some pixels are still there

				"B       loc_FF860E6C\n"
"loc_FF860E60:\n"
                "LDR     R0, [R8,#4]\n"
                "CMP     R0, #0\n"
                "MOVNE   R7, #0x1D\n"
"loc_FF860E6C:\n"
                "MOV     R2, R4\n"
                "MOV     R1, #1\n"
                "MOV     R0, R7\n"
                "BL      sub_FF85F620\n"
                "BL      sub_FF9448B4\n"
                "CMP     R0, #0\n"
                "LDRNE   R0, [R4,#8]\n"
                "ORRNE   R0, R0, #0x2000\n"
                "STRNE   R0, [R4,#8]\n"
                "LDRH    R0, [R5,#0x86]\n"
                "CMP     R0, #3\n"
                "BEQ     locret_FF860EB8\n"
                "LDRH    R0, [R5,#0x84]\n"
                "CMP     R0, #0\n"
                "LDREQH  R0, [R5,#0x80]\n"
                "CMPEQ   R0, #2\n"
                "MOVEQ   R0, R4\n"
                "LDMEQFD SP!, {R3-R9,LR}\n"
                "BEQ     sub_FF9428B8\n"
"locret_FF860EB8:\n"
                "LDMFD   SP!, {R3-R9,PC}\n"

 
 );
}


//ok
void __attribute__((naked,noinline)) sub_FF944408_my(){ // 
 asm volatile(
                "STMFD   SP!, {R0-R10,LR}\n"
                "MOV     R6, #0\n"
                "MOV     R4, R0\n"
                "BL      sub_FF944FCC\n"
                //"MOVL    R1, 0xFFFFFFFF\n"
				"MVN     R1, #0\n"		//chdk
                 "BL      sub_FF829D60\n"
                "MOV     R2, #4\n"
                "ADD     R1, SP, #0x30-0x28\n"
                "MOV     R0, #0x8A\n"
                "BL      sub_FF86F768\n"		//PT_GetPropertyCaseString
                "TST     R0, #1\n"
                "LDRNE   R1, =0x20A\n"
                "LDRNE   R0, =0xFF944610\n"	//aSscaptureseq_c 
                "BLNE    sub_FF81BFC8\n"		//DebugAssert
                "LDR     R8, =0x1E508\n"
                "LDR     R5, =0x1E454\n"
                "LDRSH   R1, [R8,#0xE]\n"
                "LDR     R0, [R5,#0x7C]\n"
                //"BL      nullsub_78\n"
                "BL      sub_FF84BE78\n"		//GetCCDTemperature
                "LDR     R2, =0xE61C\n"
                "ADD     R3, R4, #0x8C\n"
                "STRH    R0, [R4,#0x88]\n"
//          	"STRD    R2, [SP,#0x28-0x28]\n"  // WORKSFORME, configure gcc WITHOUT --with-cpu=arm9
				"STR    R2, [SP,#0x28-0x28]\n"     // Though use the old, 2-line version
				"STR    R3, [SP,#0x28-0x24]\n"     // for the final until everyone uses 'new' gcc
                "MOV     R1, R0\n"
                "LDRH    R0, [R5,#0x54]\n"
                "LDRSH   R2, [R8,#0xC]\n"
                "LDR     R3, =0xE618\n"
                "BL      sub_FF9454C0\n"	// 2 (NR) is set into 0xE618 in this sub! Still before shooting				
               
                "BL      wait_until_remote_button_is_released\n"
                "BL      capt_seq_hook_set_nr\n" // +-----------> so immediately override NR               
				
                "LDR     R0, [R4,#0x18]\n"
                "LDR     R7, =0xE618\n"
                "CMP     R0, #0\n"
                "MOV     R9, #1\n"
                "BEQ     loc_FF94449C\n"
                "LDR     R0, [R7]\n"
                "CMP     R0, #2\n"
                "STREQ   R9, [R7]\n"
               
"loc_FF94449C:\n"
				"B		sub_FF94449C\n"
	
 );
}


void __attribute__((naked,noinline)) exp_drv_task(){
 asm volatile(
"                STMFD   SP!, {R4-R8,LR}\n"
"                SUB     SP, SP, #0x20\n"
"                LDR     R8, =0xBB8\n"
"                LDR     R7, =0x7270\n"
"                LDR     R5, =0x462E8\n"
"                MOV     R0, #0\n"
"                ADD     R6, SP, #0x10\n"
"                STR     R0, [SP,#0xC]\n"
"loc_FF8B8BB0:\n"
"                LDR     R0, [R7,#0x20]\n"
"                MOV     R2, #0\n"
"                ADD     R1, SP, #0x1C\n"
"                BL      sub_FF829FB0\n" // KerQueue.c 0
"                LDR     R0, [SP,#0xC]\n"
"                CMP     R0, #1\n"
"                BNE     loc_FF8B8BF8\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R0, [R0]\n"
"                CMP     R0, #0x13\n"
"                CMPNE   R0, #0x14\n"
"                CMPNE   R0, #0x15\n"
"                BEQ     loc_FF8B8D78\n"
"                CMP     R0, #0x26\n"
"                BEQ     loc_FF8B8CE4\n"
"                ADD     R1, SP, #0xC\n"
"                MOV     R0, #0\n"
"                BL      sub_FF8B8B40\n" // ExpDrv.c 512
"loc_FF8B8BF8:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x2B\n"
"                BNE     loc_FF8B8C28\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FF8B9E70\n" // ExpDrv.c 0
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #1\n"
"                BL      sub_FF829D2C\n"
"                BL      sub_FF81BD80\n"
"                ADD     SP, SP, #0x20\n"
"                LDMFD   SP!, {R4-R8,PC}\n"
"loc_FF8B8C28:\n"
"                CMP     R1, #0x2A\n"
"                BNE     loc_FF8B8C44\n"
"                LDR     R2, [R0,#0x88]!\n"
"                LDR     R1, [R0,#4]\n"
"                MOV     R0, R1\n"
"                BLX     R2\n"
"                B       loc_FF8B91DC\n"
"loc_FF8B8C44:\n"
"                CMP     R1, #0x24\n"
"                BNE     loc_FF8B8C94\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FF829D60\n"
"                LDR     R0, =0xFF8B562C\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FF93626C\n" // IrisController.c 104 done
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R8\n"
"                MOV     R1, #0x80\n"
"                BL      sub_FF829C64\n" // KerFlag.c 0
"                TST     R0, #1\n"
"                LDRNE   R1, =0xD07\n"
"                BNE     loc_FF8B8D54\n"
"loc_FF8B8C80:\n"
"                LDR     R1, [SP,#0x1C]\n"
"                LDR     R0, [R1,#0x8C]\n"
"                LDR     R1, [R1,#0x88]\n"
"                BLX     R1\n"
"                B       loc_FF8B91DC\n"
"loc_FF8B8C94:\n"
"                CMP     R1, #0x25\n"
"                BNE     loc_FF8B8CDC\n"
"                ADD     R1, SP, #0xC\n"
"                BL      sub_FF8B8B40\n" // ExpDrv.c 512
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x100\n"
"                BL      sub_FF829D60\n"
"                MOV     R1, #0x100\n"
"                LDR     R0, =0xFF8B563C\n"
"                BL      sub_FF936A2C\n" // IrisController.c 0 done
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R8\n"
"                MOV     R1, #0x100\n"
"                BL      sub_FF829C64\n" // KerFlag.c 0
"                TST     R0, #1\n"
"                BEQ     loc_FF8B8C80\n"
"                LDR     R1, =0xD11\n"
"                B       loc_FF8B8D54\n"
"loc_FF8B8CDC:\n"
"                CMP     R1, #0x26\n"
"                BNE     loc_FF8B8CF4\n"
"loc_FF8B8CE4:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                ADD     R1, SP, #0xC\n"
"                BL      sub_FF8B8B40\n" // ExpDrv.c 512
"                B       loc_FF8B8C80\n"
"loc_FF8B8CF4:\n"
"                CMP     R1, #0x27\n"
"                CMPNE   R1, #0x28\n"
"                BNE     loc_FF8B8D60\n"
"                ADD     R1, SP, #0xC\n"
"                BL      sub_FF8B8B40\n" // ExpDrv.c 512
"                LDR     R4, [SP,#0x1C]\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x40\n"
"                BL      sub_FF829D60\n"
"                LDR     R0, [R4]\n"
"                MOV     R1, #0x40\n"
"                CMP     R0, #0x27\n"
"                LDR     R0, =0xFF8B56A0\n"
"                BNE     loc_FF8B8D34\n"
"                BL      sub_FF93630C\n" // IrisController.c 125 done
"                B       loc_FF8B8D38\n"
"loc_FF8B8D34:\n"
"                BL      sub_FF936398\n" // IrisController.c 143 done
"loc_FF8B8D38:\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R8\n"
"                MOV     R1, #0x40\n"
"                BL      sub_FF829C64\n" // KerFlag.c 0
"                TST     R0, #1\n"
"                BEQ     loc_FF8B8C80\n"
"                LDR     R1, =0xD1F\n"
"loc_FF8B8D54:\n"
"                LDR     R0, =0xFF8B5D3C\n"
"                BL      sub_FF81BFC8\n"
"                B       loc_FF8B8C80\n"
"loc_FF8B8D60:\n"
"                CMP     R1, #0x29\n"
"                BNE     loc_FF8B8D78\n"
"                BL      sub_FF897664\n" // Shutter.c 2
"                BL      sub_FF8983E4\n" // ImgPixel.c 292
"                BL      sub_FF897EA4\n" // ImgGain.c 0
"                B       loc_FF8B8C80\n"
"loc_FF8B8D78:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R4, #1\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x11\n"
"                CMPNE   R1, #0x12\n"
"                BNE     loc_FF8B8DE8\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R1, R0, R1,LSL#2\n"
"                SUB     R1, R1, #8\n"
"                LDMIA   R1, {R2-R4}\n"
"                STMIA   R6, {R2-R4}\n"
"                BL      sub_FF8B76BC\n" // ExpDrv.c 2
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FF8BA244\n" // ExpDrv.c 4
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x90]\n"
"                LDR     R2, [R0,#0x94]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                B       loc_FF8B911C\n"
"loc_FF8B8DE8:\n"
"                CMP     R1, #0x13\n"
"                CMPNE   R1, #0x14\n"
"                CMPNE   R1, #0x15\n"
"                BNE     loc_FF8B8E9C\n"
"                ADD     R3, SP, #0xC\n"
"                MOV     R2, SP\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FF8B7904\n" // ExpDrv.c 4
"                CMP     R0, #1\n"
"                MOV     R4, R0\n"
"                CMPNE   R4, #5\n"
"                BNE     loc_FF8B8E38\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, R4\n"
"                LDR     R1, [R0,#0x7C]!\n"
"                LDR     R12, [R0,#0xC]!\n"
"                LDR     R3, [R0,#4]\n"
"                MOV     R0, SP\n"
"                BLX     R12\n"
"                B       loc_FF8B8E70\n"
"loc_FF8B8E38:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                CMP     R4, #2\n"
"                LDR     R3, [R0,#0x8C]\n"
"                CMPNE   R4, #6\n"
"                BNE     loc_FF8B8E84\n"
"                LDR     R12, [R0,#0x88]\n"
"                MOV     R0, SP\n"
"                MOV     R2, R4\n"
"                MOV     R1, #1\n"
"                BLX     R12\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, SP\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FF8B888C\n" // ExpDrv.c 4
"loc_FF8B8E70:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R2, [SP,#0xC]\n"
"                MOV     R1, R4\n"
"                BL      sub_FF8B8AE0\n" // ExpDrv.c 2
"                B       loc_FF8B911C\n"
"loc_FF8B8E84:\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R12, [R0,#0x88]\n"
"                ADD     R0, R0, #4\n"
"                MOV     R2, R4\n"
"                BLX     R12\n"
"                B       loc_FF8B911C\n"
"loc_FF8B8E9C:\n"
"                CMP     R1, #0x20\n"
"                CMPNE   R1, #0x21\n"
"                BNE     loc_FF8B8EE8\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R1, R0, R1,LSL#2\n"
"                SUB     R1, R1, #8\n"
"                LDMIA   R1, {R2-R4}\n"
"                STMIA   R6, {R2-R4}\n"
"                BL      sub_FF8B6C40\n" // ExpDrv.c 4
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FF8B6F3C\n" // ExpDrv.c 4
"                B       loc_FF8B911C\n"
"loc_FF8B8EE8:\n"
"                ADD     R1, R0, #4\n"
"                LDMIA   R1, {R2,R3,R12}\n"
"                STMIA   R6, {R2,R3,R12}\n"
"                LDR     R1, [R0]\n"
"                CMP     R1, #0x23\n"
"                ADDLS   PC, PC, R1,LSL#2\n"
"                B       loc_FF8B90FC\n"
"                B       loc_FF8B8F94\n"
"                B       loc_FF8B8F94\n"
"                B       loc_FF8B8FE4\n"
"                B       loc_FF8B8FEC\n"
"                B       loc_FF8B8FEC\n"
"                B       loc_FF8B8FEC\n"
"                B       loc_FF8B8F94\n"
"                B       loc_FF8B8FE4\n"
"                B       loc_FF8B8FEC\n"
"                B       loc_FF8B8FEC\n"
"                B       loc_FF8B9004\n"
"                B       loc_FF8B9004\n"
"                B       loc_FF8B90F0\n"
"                B       loc_FF8B90F8\n"
"                B       loc_FF8B90F8\n"
"                B       loc_FF8B90F8\n"
"                B       loc_FF8B90F8\n"
"                B       loc_FF8B90FC\n"
"                B       loc_FF8B90FC\n"
"                B       loc_FF8B90FC\n"
"                B       loc_FF8B90FC\n"
"                B       loc_FF8B90FC\n"
"                B       loc_FF8B8FF4\n"
"                B       loc_FF8B8FFC\n"
"                B       loc_FF8B8FFC\n"
"                B       loc_FF8B9010\n"
"                B       loc_FF8B9018\n"
"                B       loc_FF8B9048\n"
"                B       loc_FF8B9078\n"
"                B       loc_FF8B90A8\n"
"                B       loc_FF8B90D8\n"
"                B       loc_FF8B90D8\n"
"                B       loc_FF8B90FC\n"
"                B       loc_FF8B90FC\n"
"                B       loc_FF8B90E0\n"
"                B       loc_FF8B90E8\n"
"loc_FF8B8F94:\n"
// jumptable FF8B8EFC entries 0,1,6
"                BL      sub_FF8B5B24\n" // ExpDrv.c 2
"                B       loc_FF8B90FC\n"
"loc_FF8B8FE4:\n"
// jumptable FF8B8EFC entries 2,7
"                BL      sub_FF8B5DAC\n" // ExpDrv.c 4
"                B       loc_FF8B90FC\n"
"loc_FF8B8FEC:\n"
// jumptable FF8B8EFC entries 3-5,8,9
"                BL      sub_FF8B5FB0\n" // ExpDrv.c 940
"                B       loc_FF8B90FC\n"
"loc_FF8B8FF4:\n"
// jumptable FF8B8EFC entry 22
"                BL      sub_FF8B6218\n" // ExpDrv.c 1072
"                B       loc_FF8B90FC\n"
"loc_FF8B8FFC:\n"
// jumptable FF8B8EFC entries 23,24
"                BL      sub_FF8B640C\n" // ExpDrv.c 4
"                B       loc_FF8B90FC\n"
"loc_FF8B9004:\n"
// jumptable FF8B8EFC entries 10,11
"                BL      sub_FF8B6670_my\n" // ExpDrv.c 2 ->
"                MOV     R4, #0\n"
"                B       loc_FF8B90FC\n"
"loc_FF8B9010:\n"
// jumptable FF8B8EFC entry 25
"                BL      sub_FF8B67AC\n" // ExpDrv.c 4
"                B       loc_FF8B90FC\n"
"loc_FF8B9018:\n"
// jumptable FF8B8EFC entry 26
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
"                BL      sub_FF8B9EE4\n" // ExpDrv.c 2
"                B       loc_FF8B90FC\n"
"loc_FF8B9048:\n"
// jumptable FF8B8EFC entry 27
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
"                BL      sub_FF8BA060\n" // ExpDrv.c 2
"                B       loc_FF8B90FC\n"
"loc_FF8B9078:\n"
// jumptable FF8B8EFC entry 28
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
"                BL      sub_FF8BA10C\n" // ExpDrv.c 1552
"                B       loc_FF8B90FC\n"
"loc_FF8B90A8:\n"
// jumptable FF8B8EFC entry 29
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
"                BL      sub_FF8BA1AC\n" // ExpDrv.c 32
"                B       loc_FF8B90FC\n"
"loc_FF8B90D8:\n"
// jumptable FF8B8EFC entries 30,31
"                BL      sub_FF8B6A04\n" // ExpDrv.c 4
"                B       loc_FF8B90FC\n"
"loc_FF8B90E0:\n"
// jumptable FF8B8EFC entry 34
"                BL      sub_FF8B7040\n" // ExpDrv.c 4
"                B       loc_FF8B90FC\n"
"loc_FF8B90E8:\n"
// jumptable FF8B8EFC entry 35
"                BL      sub_FF8B7274\n" // ExpDrv.c 4
"                B       loc_FF8B90FC\n"
"loc_FF8B90F0:\n"
// jumptable FF8B8EFC entry 12
"                BL      sub_FF8B73EC\n" // ExpDrv.c 2
"                B       loc_FF8B90FC\n"
"loc_FF8B90F8:\n"
// jumptable FF8B8EFC entries 13-16
"                BL      sub_FF8B7584\n" // ExpDrv.c 128
"loc_FF8B90FC:\n"
// jumptable FF8B8EFC default entry
// jumptable FF8B8EFC entries 17-21,32,33
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R1, [R0,#0x7C]\n"
"                LDR     R3, [R0,#0x88]\n"
"                LDR     R2, [R0,#0x8C]\n"
"                ADD     R0, R0, #4\n"
"                BLX     R3\n"
"                CMP     R4, #1\n"
"                BNE     loc_FF8B9164\n"
"loc_FF8B911C:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                MOV     R2, #0xC\n"
"                LDR     R1, [R0,#0x7C]\n"
"                ADD     R1, R1, R1,LSL#1\n"
"                ADD     R0, R0, R1,LSL#2\n"
"                SUB     R4, R0, #8\n"
"                LDR     R0, =0x462E8\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFABD12C\n" // done
"                LDR     R0, =0x462F4\n"
"                MOV     R2, #0xC\n"
"                ADD     R1, SP, #0x10\n"
"                BL      sub_FFABD12C\n" // done
"                LDR     R0, =0x46300\n"
"                MOV     R2, #0xC\n"
"                MOV     R1, R4\n"
"                BL      sub_FFABD12C\n" // done
"                B       loc_FF8B91DC\n"
"loc_FF8B9164:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                LDR     R0, [R0]\n"
"                CMP     R0, #0xB\n"
"                BNE     loc_FF8B91AC\n"
"                MOV     R3, #0\n"
"                STR     R3, [SP]\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #0\n"
"                BL      sub_FF8B592C\n"
"                MOV     R3, #0\n"
"                STR     R3, [SP]\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #0\n"
"                B       loc_FF8B91D8\n"
"loc_FF8B91AC:\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #1\n"
"                STR     R3, [SP]\n"
"                BL      sub_FF8B592C\n"
"                MOV     R3, #1\n"
"                MOV     R2, #1\n"
"                MOV     R1, #1\n"
"                MOV     R0, #1\n"
"                STR     R3, [SP]\n"
"loc_FF8B91D8:\n"
"                BL      sub_FF8B5A6C\n"
"loc_FF8B91DC:\n"
"                LDR     R0, [SP,#0x1C]\n"
"                BL      sub_FF8B9E70\n" // ExpDrv.c 0
"                B       loc_FF8B8BB0\n"
 );
}

void __attribute__((naked,noinline)) sub_FF8B6670_my(){ // 
 asm volatile(
"                STMFD   SP!, {R4-R8,LR}\n"
"                LDR     R7, =0x7270\n"
"                MOV     R4, R0\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R1, #0x3E\n"
"                BL      sub_FF829D60\n"
"                LDRSH   R0, [R4,#4]\n"
"                MOV     R2, #0\n"
"                MOV     R1, #0\n"
"                BL      sub_FF8B56C0\n"
"                MOV     R6, R0\n"
"                LDRSH   R0, [R4,#6]\n"
"                BL      sub_FF8B57CC\n"
"                LDRSH   R0, [R4,#8]\n"
"                BL      sub_FF8B5824\n"
"                LDRSH   R0, [R4,#0xA]\n"
"                BL      sub_FF8B587C\n"
"                LDRSH   R0, [R4,#0xC]\n"
"                BL      sub_FF8B58D4\n"
"                MOV     R5, R0\n"
"                LDR     R0, [R4]\n"
"                LDR     R8, =0x46300\n"
"                CMP     R0, #0xB\n"
"                MOVEQ   R6, #0\n"
"                MOVEQ   R5, #0\n"
"                BEQ     loc_FF8B6700\n"
"                CMP     R6, #1\n"
"                BNE     loc_FF8B6700\n"
"                LDRSH   R0, [R4,#4]\n"
"                LDR     R1, =0xFF8B561C\n"
"                MOV     R2, #2\n"
"                BL      sub_FF9364E0\n" // IrisController.c 168 done
"                STRH    R0, [R4,#4]\n"
"                MOV     R0, #0\n"
"                STR     R0, [R7,#0x28]\n"
"                B       loc_FF8B6708\n"
"loc_FF8B6700:\n"
"                LDRH    R0, [R8]\n"
"                STRH    R0, [R4,#4]\n"
"loc_FF8B6708:\n"
"                CMP     R5, #1\n"
"                LDRNEH  R0, [R8,#8]\n"
"                BNE     loc_FF8B6724\n"
"                LDRSH   R0, [R4,#0xC]\n"
"                LDR     R1, =0xFF8B56B0\n"
"                MOV     R2, #0x20\n"
"                BL      sub_FF8B9EA0\n"
"loc_FF8B6724:\n"
"                STRH    R0, [R4,#0xC]\n"
"                LDRSH   R0, [R4,#6]\n"
"                BL      sub_FF897408_my\n" // Shutter.c 364 ->
"                LDRSH   R0, [R4,#8]\n"
"                MOV     R1, #1\n"
"                BL      sub_FF897B9C\n" // ImgGain.c 0
"                MOV     R1, #0\n"
"                ADD     R0, R4, #8\n"
"                BL      sub_FF897C24\n" // ImgGain.c 0
"                LDRSH   R0, [R4,#0xE]\n"
"                BL      sub_FF8ACA40\n" // BrtCrct.c 552
"                LDR     R4, =0xBB8\n"
"                CMP     R6, #1\n"
"                BNE     loc_FF8B677C\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R4\n"
"                MOV     R1, #2\n"
"                BL      sub_FF829C64\n" // KerFlag.c 0
"                TST     R0, #1\n"
"                LDRNE   R1, =0x527\n"
"                LDRNE   R0, =0xFF8B5D3C\n" // "expdrv.c"
"                BLNE    sub_FF81BFC8\n"
"loc_FF8B677C:\n"
"                CMP     R5, #1\n"
"                LDMNEFD SP!, {R4-R8,PC}\n"
"                LDR     R0, [R7,#0x1C]\n"
"                MOV     R2, R4\n"
"                MOV     R1, #0x20\n"
"                BL      sub_FF829C64\n" // KerFlag.c 0
"                TST     R0, #1\n"
"                LDRNE   R1, =0x52C\n"
"                LDRNE   R0, =0xFF8B5D3C\n"
"                LDMNEFD SP!, {R4-R8,LR}\n"
"                BNE     sub_FF81BFC8\n"
"                LDMFD   SP!, {R4-R8,PC}\n"

 );
}

void __attribute__((naked,noinline)) sub_FF897408_my(){ // Shutter.c 364
 asm volatile(
"                STMFD   SP!, {R4-R6,LR}\n"
"                LDR     R5, =0x6C38\n"
"                MOV     R4, R0\n"
"                LDR     R0, [R5,#4]\n"
"                CMP     R0, #1\n"
"                MOVNE   R1, #0x16C\n"
"                LDRNE   R0, =0xFF8971A0\n" // "shutter.c"
"                BLNE    sub_FF81BFC8\n"
"                CMN     R4, #0xC00\n"
"                LDREQSH R4, [R5,#2]\n"
"                CMN     R4, #0xC00\n"
"                LDREQ   R1, =0x172\n"
"                LDREQ   R0, =0xFF8971A0\n" // "shutter.c"
"                STRH    R4, [R5,#2]\n"
"                BLEQ    sub_FF81BFC8\n"
"                MOV     R0, R4\n"
//"                BL      sub_FF9BF02C\n" // -
"                BL      apex2us\n" // +
"                MOV     R4, R0\n"
//"                BL      nullsub_143\n"
"                MOV     R0, R4\n"
"                BL      sub_FF8CF8C0\n"
"                TST     R0, #1\n"
"                LDRNE   R1, =0x177\n"
"                LDMNEFD SP!, {R4-R6,LR}\n"
"                LDRNE   R0, =0xFF8971A0\n" // "shutter.c"
"                BNE     sub_FF81BFC8\n"
"                LDMFD   SP!, {R4-R6,PC}\n"
 );
}
