#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0x6CE0;

#include "../../../generic/capt_seq.c"

void __attribute__((naked,noinline)) sub_FFD399A8_my(long p)
{
    asm volatile (
                "STMFD   SP!, {R4,R5,LR}\n"
                "LDR     R3, =0x73D34\n"
                "LDR     R5, =0x6CDC\n"
                "SUB     SP, SP, #4\n"
                "LDR     R1, =0xFFFFFFFF\n"
                "STR     R0, [R5]\n"
                "LDR     R0, [R3]\n"
                "BL      sub_FFC0FA60\n"
                "BL      sub_FFD3F7C0\n"
                "BL      wait_until_remote_button_is_released\n"
                "LDR     R0, [R0,#0x7C]\n"
                "BL      sub_FFD3991C\n"
	    	"BL      capt_seq_hook_set_nr\n"
                "LDR     R3, =0x6CE4\n"
                "LDR     R0, [R3]\n"
                "BL      sub_FFC8C410\n"

                "B	sub_FFD399E4\n"
    );
}

void __attribute__((naked,noinline)) sub_FFD36838_my(long p)
{
    asm volatile (
                "STMFD   SP!, {R4,R5,LR}\n"
                "LDR     R5, [R0,#0xC]\n"
                "BL      sub_FFD3F564\n"
                "CMP     R0, #0\n"
                "BNE     loc_FFD36850\n"
                "BL      sub_FFD3F570\n"

"loc_FFD36850:\n"
                "MOV     R0, R5\n"
                "BL      sub_FFD387B4\n"
                "TST     R0, #1\n"
                "MOV     R2, R5\n"
                "MOV     R1, #1\n"
                "BEQ     loc_FFD36870\n"
                "LDMFD   SP!, {R4,R5,LR}\n"
                "B       sub_FFD34D90\n"

"loc_FFD36870:\n"
                "BL      sub_FFD7480C\n"
                "BL      sub_FFD3417C\n"
                "MOV     R4, R0\n"
                "BL      sub_FFC143A4\n"
                "ADD     R3, R5, R5,LSL#1\n"
                "ADD     R4, R4, R3,LSL#5\n"
                "STR     R0, [R4,#4]\n"
                "MOV     R0, R5\n"
                "BL      sub_FFD3A1C0\n"
                "BL      sub_FFD38CF8\n"
                "BL      sub_FFD38C98\n"
                "MOV     R0, R5\n"
                "BL      sub_FFD399A8_my\n"
		"BL      capt_seq_hook_raw_here\n"
                "MOV     R2, R5\n"
                "MOV     R1, #1\n"
                "BL      sub_FFD34D90\n"
                "LDMFD   SP!, {R4,R5,LR}\n"
                "B       sub_FFD39BA8\n"
    );
}

void __attribute__((naked,noinline)) capt_seq_task()
{
	asm volatile (
                "STMFD   SP!, {R4,LR}\n"
                "SUB     SP, SP, #4\n"
                "MOV     R4, SP\n"
                "B       loc_FFD36D90\n"

"loc_FFD36C3C:\n"
                "LDR     R2, [SP,#0xC-0xC]\n"
                "LDR     R3, [R2]\n"
                "MOV     R0, R2\n"
                "CMP     R3, #0x15\n"
                "LDRLS   PC, [PC,R3,LSL#2]\n"
                "B       loc_FFD36D68\n"
                ".long loc_FFD36CAC\n"
                ".long loc_FFD36CB8\n"
                ".long loc_FFD36CC0\n"
                ".long loc_FFD36CD0\n"
                ".long loc_FFD36CC8\n"
                ".long loc_FFD36CD8\n"
                ".long loc_FFD36CE0\n"
                ".long loc_FFD36CEC\n"
                ".long loc_FFD36CF4\n"
                ".long loc_FFD36D00\n"
                ".long loc_FFD36D08\n"
                ".long loc_FFD36D10\n"
                ".long loc_FFD36D18\n"
                ".long loc_FFD36D20\n"
                ".long loc_FFD36D28\n"
                ".long loc_FFD36D34\n"
                ".long loc_FFD36D3C\n"
                ".long loc_FFD36D44\n"
                ".long loc_FFD36D4C\n"
                ".long loc_FFD36D58\n"
                ".long loc_FFD36D60\n"
                ".long loc_FFD36D78\n"

"loc_FFD36CAC:\n"
                "BL      sub_FFD38410\n"
                "BL      shooting_expo_param_override\n"  // +
                "BL      sub_FFD348E8\n"
                "B       loc_FFD36D74\n"

"loc_FFD36CB8:\n"
                "BL      sub_FFD36838_my\n"
                "B       loc_FFD36D74\n"

"loc_FFD36CC0:\n"
                "BL      sub_FFD387A4\n"
                "B       loc_FFD36D74\n"

"loc_FFD36CC8:\n"
                "BL      sub_FFD376CC\n"
                "B       loc_FFD36D74\n"

"loc_FFD36CD0:\n"
                "BL      sub_FFD37728\n"
                "B       loc_FFD36D74\n"

"loc_FFD36CD8:\n"
                "BL      sub_FFD37918\n"
                "B       loc_FFD36D74\n"

"loc_FFD36CE0:\n"
                "BL      sub_FFD38504\n"
                "BL      sub_FFD348E8\n"
                "B       loc_FFD36D74\n"

"loc_FFD36CEC:\n"
                "BL      sub_FFD36920\n"
                "B       loc_FFD36D74\n"

"loc_FFD36CF4:\n"
                "BL      sub_FFD3856C\n"
                "BL      sub_FFD348E8\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D00:\n"
                "BL      sub_FFD37728\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D08:\n"
                "BL      sub_FFD38E30\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D10:\n"
                "BL      sub_FFD390B8\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D18:\n"
                "BL      sub_FFD39144\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D20:\n"
                "BL      sub_FFD391FC\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D28:\n"
                "MOV     R0, #0\n"
                "BL      sub_FFD392AC\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D34:\n"
                "BL      sub_FFD393FC\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D3C:\n"
                "BL      sub_FFD39470\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D44:\n"
                "BL      sub_FFD39528\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D4C:\n"
                "MOV     R0, #1\n"
                "BL      sub_FFD392AC\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D58:\n"
                "BL      sub_FFD39628\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D60:\n"
                "BL      sub_FFD39654\n"
                "B       loc_FFD36D74\n"

"loc_FFD36D68:\n"
                "LDR     R0, =0xFFD365BC\n"
                "MOV     R1, #0x2DC\n"
                "BL      sub_FFC03AD0\n"

"loc_FFD36D74:\n"
                "LDR     R2, [SP,#0xC-0xC]\n"

"loc_FFD36D78:\n"
                "LDR     R3, =0x73CBC\n"
                "LDR     R1, [R2,#4]\n"
                "LDR     R0, [R3]\n"
                "BL      sub_FFC0F8C4\n"
                "LDR     R0, [SP,#0xC-0xC]\n"
                "BL      sub_FFD36638\n"

"loc_FFD36D90:\n"
                "LDR     R3, =0x73CC0\n"
                "MOV     R1, R4\n"
                "LDR     R0, [R3]\n"
                "MOV     R2, #0\n"
                "BL      sub_FFC10074\n"
                "TST     R0, #1\n"
                "BEQ     loc_FFD36C3C\n"
                "MOV     R1, #0x24C\n"
                "LDR     R0, =0xFFD365BC\n"
                "ADD     R1, R1, #1\n"
                "BL      sub_FFC03AD0\n"
                "BL      sub_FFC11610\n"
                "ADD     SP, SP, #4\n"
                "LDMFD   SP!, {R4,PC}\n"

    );
}

void __attribute__((naked,noinline)) exp_drv_task(){
 asm volatile(
                "STMFD   SP!, {R4-R8,LR}\n"
                "SUB     SP, SP, #0x14\n"
                "MOV     R7, SP\n"
                "B       loc_FFCE34D0\n"
"loc_FFCE31EC:\n"
                "CMP     R2, #0x19\n"
                "BNE     loc_FFCE3204\n"
                "LDR     R0, [R12,#0x34]\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R12,#0x30]\n"
                "B       loc_FFCE323C\n"
"loc_FFCE3204:\n"
                "SUB     R3, R2, #0x16\n"
                "CMP     R3, #1\n"
                "BHI     loc_FFCE321C\n"
                "MOV     R0, R12\n"
                "BL      sub_FFCE3184\n"
                "B       loc_FFCE322C\n"
"loc_FFCE321C:\n"
                "CMP     R2, #0x18\n"
                "BNE     loc_FFCE3248\n"
                "BL      sub_FFC97DA4\n"
                "BL      sub_FFC99C1C\n"
"loc_FFCE322C:\n"
                "LDR     R3, [SP,#0x0]\n"
                "LDR     R0, [R3,#0x34]\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R3,#0x30]\n"
"loc_FFCE323C:\n"
                "LDR     R0, [SP,#0x0]\n"
                "BL      sub_FFCE14D4\n"
                "B       loc_FFCE34D0\n"
"loc_FFCE3248:\n"
                "CMP     R2, #0xC\n"
                "MOV     R8, #1\n"
                "BNE     loc_FFCE32B8\n"
                "LDR     R1, [R12,#0x24]\n"
                "ADD     R1, R1, R1,LSL#1\n"
                "ADD     R1, R12, R1,LSL#1\n"
                "ADD     R6, SP, #0xC\n"
                "SUB     R1, R1, #2\n"
                "MOV     R2, #6\n"
                "MOV     R0, R6\n"
                "BL      _memcpy\n"
                "LDR     R0, [SP,#0x0]\n"
                "BL      sub_FFCE27AC\n"
                "LDR     R3, [SP,#0x0]\n"
                "LDR     R1, [R3,#0x24]\n"
                "LDR     R2, [R3,#0x34]\n"
                "ADD     R0, R3, #4\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R3,#0x30]\n"
                "LDR     R0, [SP,#0x0]\n"
                "BL      sub_FFCE2930\n"
                "LDR     R3, [SP,#0x0]\n"
                "ADD     R0, R3, #4\n"
                "LDR     R1, [R3,#0x24]\n"
                "LDR     R2, [R3,#0x3C]\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R3,#0x38]\n"
                "B       loc_FFCE3480\n"
"loc_FFCE32B8:\n"
                "SUB     R3, R2, #0xD\n"
                "CMP     R3, #1\n"
                "BHI     loc_FFCE3338\n"
                "ADD     R6, SP, #0xC\n"
                "ADD     R5, SP, #0x4\n"
                "MOV     R0, R12\n"
                "MOV     R1, R6\n"
                "MOV     R2, R5\n"
                "BL      sub_FFCE29AC\n"
                "MOV     R4, R0\n"
                "CMP     R4, #3\n"
                "CMPNE   R4, #1\n"
                "BNE     loc_FFCE3318\n"
                "LDR     R12, [SP,#0x0]\n"
                "MOV     R0, R5\n"
                "LDR     R1, [R12,#0x24]\n"
                "MOV     R2, R4\n"
                "LDR     R3, [R12,#0x34]\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R12,#0x30]\n"
                "MOV     R1, R4\n"
                "LDR     R0, [SP,#0x0]\n"
                "BL      sub_FFCE3164\n"
                "B       loc_FFCE3480\n"
"loc_FFCE3318:\n"
                "LDR     R12, [SP,#0x0]\n"
                "MOV     R2, R4\n"
                "ADD     R0, R12, #4\n"
                "LDR     R1, [R12,#0x24]\n"
                "LDR     R3, [R12,#0x34]\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R12,#0x30]\n"
                "B       loc_FFCE3480\n"
"loc_FFCE3338:\n"
                "CMP     R2, #0x14\n"
                "BNE     loc_FFCE338C\n"
                "LDR     R1, [R12,#0x24]\n"
                "ADD     R1, R1, R1,LSL#1\n"
                "ADD     R1, R12, R1,LSL#1\n"
                "ADD     R6, SP, #0xC\n"
                "SUB     R1, R1, #2\n"
                "MOV     R2, #6\n"
                "MOV     R0, R6\n"
                "BL      _memcpy\n"
                "LDR     R0, [SP,#0x0]\n"
                "BL      sub_FFCE2284\n"
                "LDR     R3, [SP,#0x0]\n"
                "ADD     R0, R3, #4\n"
                "LDR     R1, [R3,#0x24]\n"
                "LDR     R2, [R3,#0x34]\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R3,#0x30]\n"
                "LDR     R0, [SP,#0x0]\n"
                "BL      sub_FFCE24DC\n"
                "B       loc_FFCE3480\n"
"loc_FFCE338C:\n"
                "ADD     R6, SP, #0xC\n"
                "ADD     R1, R12, #4\n"
                "MOV     R0, R6\n"
                "MOV     R2, #6\n"
                "BL      _memcpy\n"
                "LDR     R12, [SP,#0x0]\n"
                "LDR     R3, [R12]\n"
                "MOV     R0, R12\n"
                "CMP     R3, #0x15\n"
                "LDRLS   PC, [PC,R3,LSL#2]\n"
                "B       loc_FFCE346C\n"
                ".long loc_FFCE3410\n"
                ".long loc_FFCE3418\n"
                ".long loc_FFCE3420\n"
                ".long loc_FFCE3420\n"
                ".long loc_FFCE3410\n"
                ".long loc_FFCE3418\n"
                ".long loc_FFCE3420\n"
                ".long loc_FFCE3420\n"
                ".long loc_FFCE3438\n"
                ".long loc_FFCE3438\n"
                ".long loc_FFCE345C\n"
                ".long loc_FFCE3464\n"
                ".long loc_FFCE346C\n"
                ".long loc_FFCE346C\n"
                ".long loc_FFCE346C\n"
                ".long loc_FFCE3428\n"
                ".long loc_FFCE3430\n"
                ".long loc_FFCE3444\n"
                ".long loc_FFCE344C\n"
                ".long loc_FFCE344C\n"
                ".long loc_FFCE346C\n"
                ".long loc_FFCE3454\n"
"loc_FFCE3410:\n"
                "BL      sub_FFCE19B0\n"
                "B       loc_FFCE3468\n"
"loc_FFCE3418:\n"
                "BL      sub_FFCE1AEC\n"
                "B       loc_FFCE3468\n"
"loc_FFCE3420:\n"
                "BL      sub_FFCE1C1C\n"
                "B       loc_FFCE3468\n"
"loc_FFCE3428:\n"
                "BL      sub_FFCE1DF0\n"
                "B       loc_FFCE3468\n"
"loc_FFCE3430:\n"
                "BL      sub_FFCE1EF8\n"
                "B       loc_FFCE3468\n"
"loc_FFCE3438:\n"
                "BL      sub_FFCE1FBC_my\n"  //---------->
                "MOV     R8, #0\n"
                "B       loc_FFCE3468\n"
"loc_FFCE3444:\n"
                "BL      sub_FFCE2080\n"
                "B       loc_FFCE3468\n"
"loc_FFCE344C:\n"
                "BL      sub_FFCE2168\n"
                "B       loc_FFCE3468\n"
"loc_FFCE3454:\n"
                "BL      sub_FFCE256C\n"
                "B       loc_FFCE3468\n"
"loc_FFCE345C:\n"
                "BL      sub_FFCE2640\n"
                "B       loc_FFCE3468\n"
"loc_FFCE3464:\n"
                "BL      sub_FFCE272C\n"
"loc_FFCE3468:\n"
                "LDR     R12, [SP,#0x0]\n"
"loc_FFCE346C:\n"
                "ADD     R0, R12, #4\n"
                "LDR     R1, [R12,#0x24]\n"
                "LDR     R2, [R12,#0x34]\n"
                "MOV     LR, PC\n"
                "LDR     PC, [R12,#0x30]\n"
"loc_FFCE3480:\n"
                "CMP     R8, #1\n"
                "BNE     loc_FFCE34A8\n"
                "LDR     R1, [SP,#0x0]\n"
                "LDR     R3, [R1,#0x24]\n"
                "ADD     R3, R3, R3,LSL#1\n"
                "ADD     R1, R1, R3,LSL#1\n"
                "MOV     R0, R6\n"
                "SUB     R1, R1, #2\n"
                "BL      sub_FFCE1868\n"
                "B       loc_FFCE34C8\n"
"loc_FFCE34A8:\n"
                "MOV     R0, #1\n"
                "MOV     R1, R0\n"
                "MOV     R2, R0\n"
                "BL      sub_FFCE180C\n"
                "MOV     R0, #1\n"
                "MOV     R1, R0\n"
                "MOV     R2, R0\n"
                "BL      sub_FFCE1928\n"
"loc_FFCE34C8:\n"
                "LDR     R0, [SP,#0x0]\n"
                "BL      sub_FFCE14D4\n"
"loc_FFCE34D0:\n"
                "LDR     R3, =0x4FB70\n"
                "MOV     R2, #0\n"
                "LDR     R0, [R3]\n"
                "MOV     R1, R7\n"
                "BL      sub_FFC10074\n"  //ReceiveMessageQueue
                "LDR     R12, [SP,#0x0]\n"
                "LDR     R2, [R12]\n"
                "CMP     R2, #0x1A\n"
                "BNE     loc_FFCE31EC\n"
                "MOV     R0, R12\n"
                "BL      sub_FFCE14D4\n"
                "LDR     R3, =0x4FB6C\n"
                "MOV     R1, #1\n"
                "LDR     R0, [R3]\n"
                "BL      sub_FFC0F8C4\n"  //SetEventFlag
                "BL      _ExitTask\n"
                "ADD     SP, SP, #0x14\n"
                "LDMFD   SP!, {R4-R8,PC}\n"
    );
}

void __attribute__((naked,noinline)) sub_FFCE1FBC_my(){
 asm volatile(
                "STMFD   SP!, {R4,R5,LR}\n"
                "LDR     R3, =0x4FB6C\n"
                "MOV     R4, R0\n"
                "MOV     R1, #0xE\n"
                "LDR     R0, [R3]\n"
                "BL      sub_FFC0FA60\n"  //ClearEventFlag
                "MOV     R1, #0\n"
                "LDRSH   R0, [R4,#4]\n"
                "BL      sub_FFCE1574\n"
                "MOV     R5, R0\n"
                "LDRSH   R0, [R4,#6]\n"
                "BL      sub_FFCE16A4\n"
                "LDRSH   R0, [R4,#8]\n"
                "BL      sub_FFCE1740\n"
                "LDR     R3, [R4]\n"
                "CMP     R3, #9\n"
                "MOVEQ   R5, #0\n"
                "CMP     R5, #1\n"
                "LDR     R1, =0xFFCE1504\n"
                "MOV     R2, #2\n"
                "BNE     loc_FFCE2028\n"
                "LDRSH   R0, [R4,#4]\n"
                "BL      sub_FFE5D128\n"
                "LDR     R2, =0x4FB98\n"
                "MOV     R3, #0\n"
                "STR     R3, [R2]\n"
                "B       loc_FFCE202C\n"
"loc_FFCE2028:\n"
                "BL      sub_FFCE17DC\n"
"loc_FFCE202C:\n"
                "STRH    R0, [R4,#4]\n"
                "LDRSH   R0, [R4,#6]\n"
                "BL      sub_FFC97A3C_my\n"  //---------->
                "BL      sub_FFC999C0\n"
                "LDRSH   R0, [R4,#8]\n"
                "MOV     R1, #1\n"
                "BL      sub_FFC997DC\n"
                "MOV     R1, #0\n"
                "ADD     R0, R4, #8\n"
                "BL      sub_FFC998A0\n"
                "CMP     R5, #1\n"
                "MOV     R1, #2\n"
                "MOV     R2, #0\n"
                "LDMNEFD SP!, {R4,R5,PC}\n"
                "LDR     R3, =0x4FB6C\n"
                "LDR     R0, [R3]\n"
                "LDMFD   SP!, {R4,R5,LR}\n"
                "B       sub_FFC0F8B4\n"
    );
}

void __attribute__((naked,noinline)) sub_FFC97A3C_my(){
 asm volatile(
                "STMFD   SP!, {R4,LR}\n"
                "LDR     R3, =0x5388\n"
                "LDR     R2, [R3]\n"
                "MOV     R3, R0,LSL#16\n"
                "CMP     R2, #1\n"
                "MOV     R1, #0x110\n"
                "LDR     R0, =0xFFC973D8\n"  //aShutter_c
                "MOV     R4, R3,ASR#16\n"
                "BEQ     loc_FFC97A64\n"
                "BL      sub_FFC03AD0\n"  //DebugAssert
"loc_FFC97A64:\n"
                "MOV     R1, #0x114\n"
                "CMN     R4, #0xC00\n"
                "LDR     R3, =0x3609E\n"
                "LDR     R0, =0xFFC973D8\n"  //aShutter_c
                "ADD     R1, R1, #2\n"
                "LDREQSH R4, [R3]\n"
                "LDRNE   R3, =0x3609E\n"
                "CMN     R4, #0xC00\n"
                "STRH    R4, [R3]\n"
                "BNE     loc_FFC97A90\n"
                "BL      sub_FFC03AD0\n"  //DebugAssert
"loc_FFC97A90:\n"
                "MOV     R0, R4\n"
                "BL      apex2us\n"  //sub_FFC98B74  //---------->
                "BL      sub_FFC96FCC\n"
                "TST     R0, #1\n"
                "MOV     R1, #0x118\n"
                "LDR     R0, =0xFFC973D8\n"  //aShutter_c
                "LDMEQFD SP!, {R4,PC}\n"
                "LDMFD   SP!, {R4,LR}\n"
                "B       sub_FFC03AD0\n"  //DebugAssert
    );
}
