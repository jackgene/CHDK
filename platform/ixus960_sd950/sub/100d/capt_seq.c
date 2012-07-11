#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0xE21C;

#include "../../../generic/capt_seq.c"

void __attribute__((naked,noinline)) sub_FF933C30_my(){ 
 asm volatile(
                "STMFD   SP!, {R0-R10,LR}\n"
                "MOV     R6, #0\n"
                "MOV     R4, R0\n"
                "BL      sub_FF93475C\n"
                "MVN     R1, #0\n"		
                "BL      sub_FF828E88\n"
                "MOV     R2, #4\n"
                "ADD     R1, SP, #8\n"
                "MOV     R0, #0x8A\n"
                "BL      sub_FF8697F4\n"
                "TST     R0, #1\n"
                "LDRNE   R1, =0x20A\n"
                "LDRNE	 R0, =0xFF933E04\n"
                "BLNE    sub_FF81BFC8\n"
                "LDR     R8, =0x1DBA8\n"
                "LDR     R5, =0x1DAF4\n"
                "LDRSH   R1, [R8,#0xE]\n"
                "LDR     R0, [R5,#0x7C]\n"
                "BL      sub_FF8F1954\n"
                "BL      sub_FF846C74\n"
                "LDR     R2, =0xE220\n"
                "ADD     R3, R4, #0x8C\n"
                "STRH    R0, [R4,#0x88]\n"
 
                "STR     R2, [SP]\n"
                "STR     R3, [SP,#4]\n"
                "MOV     R1, R0\n"
                "LDRH    R0, [R5,#0x54]\n"
                "LDRSH   R2, [R8,#0xC]\n"
                "LDR     R3, =0xE21C\n"
                "BL      sub_FF934C50\n"
                "BL      wait_until_remote_button_is_released\n"
                "BL      capt_seq_hook_set_nr\n"
                "B       sub_FF933CA4\n"
 );
}

void __attribute__((naked,noinline)) sub_FF85C37C_my() 
{
	asm volatile (
                "STMFD   SP!, {R4-R6,LR}\n"
                "LDR     R4, [R0,#0xC]\n"
                "LDR     R6, =0x1DAF4\n"
                "LDR     R0, [R4,#8]\n"
                "MOV     R5, #0\n"
                "ORR     R0, R0, #1\n"
                "STR     R0, [R4,#8]\n"
                "LDR     R0, [R6,#0x24]\n"
                "CMP     R0, #0\n"
                "MOVEQ   R0, #2\n"
                "BLEQ    sub_FF8569D8\n"
                "BL      sub_FF9325B4\n"
                "LDR     R0, [R6,#0x24]\n"
                "CMP     R0, #0\n"
                "BNE     loc_FF85C3FC\n"
                "MOV     R0, R4\n"
                "BL      sub_FF932A48\n"
                "TST     R0, #1\n"
                "MOVNE   R2, R4\n"
                "LDMNEFD SP!, {R4-R6,LR}\n"
                "MOVNE   R1, #1\n"
                "BNE     sub_FF85A868\n"
                "BL      sub_FF947134\n"
                "BL      sub_FF869984\n"
                "STR     R0, [R4,#0x14]\n"
                "MOV     R0, R4\n"
                "BL      sub_FF933B48\n"
                "BL      sub_FF9345F0\n"
                "MOV     R0, R4\n"
                "BL      sub_FF933C30_my\n"        
                "MOV     R5, R0\n"
                "B       loc_FF85C40C\n"
	"loc_FF85C3FC:\n"
                "LDR     R0, =0x5648\n"
                "LDR     R0, [R0,#4]\n"
                "CMP     R0, #0\n"
                "MOVNE   R5, #0x1D\n"
	"loc_FF85C40C:\n"
                "BL      capt_seq_hook_raw_here\n"  
                "MOV     R2, R4\n"
                "MOV     R1, #1\n"
                "MOV     R0, R5\n"
                "BL      sub_FF85A868\n"
                "BL      sub_FF934038\n"
                "CMP     R0, #0\n"
                "LDRNE   R0, [R4,#8]\n"
                "ORRNE   R0, R0, #0x2000\n"
                "STRNE   R0, [R4,#8]\n"
                "LDMFD   SP!, {R4-R6,PC}\n"
 );
}

void __attribute__((naked,noinline)) task_CaptSeqTask_my() 
{
	asm volatile (
                "STMFD   SP!, {R3-R9,LR}\n"
                "LDR     R6, =0x1DAF4\n"
                "LDR     R5, =0x5648\n"
                "MOV     R9, #1\n"
                "MOV     R7, #0\n"
	"loc_FF85C04C:\n"
                "LDR     R0, [R5,#0xC]\n"
                "MOV     R2, #0\n"
                "MOV     R1, SP\n"
                "BL      sub_FF8290D8\n"
                "TST     R0, #1\n"
                "BEQ     loc_FF85C078\n"
                "LDR     R1, =0x43F\n"
                "LDR	 R0, =0xFF85BDD0\n"    
                "BL      sub_FF81BFC8\n"
                "BL      sub_FF81BD80\n"
                "LDMFD   SP!, {R3-R9,PC}\n"
	"loc_FF85C078:\n"
                "LDR     R0, [SP]\n"
                "LDR     R1, [R0]\n"
                "CMP     R1, #0x17\n"
                "ADDLS   PC, PC, R1,LSL#2\n"
                "B       loc_FF85C268\n"
	"loc_FF85C08C:\n"
                "B       loc_FF85C0EC\n"
	"loc_FF85C090:\n"
                "B       loc_FF85C154\n"
	"loc_FF85C094:\n"
                "B       loc_FF85C15C\n"
	"loc_FF85C098:\n"
                "B       loc_FF85C174\n"
	"loc_FF85C09C:\n"
                "B       loc_FF85C168\n"
	"loc_FF85C0A0:\n"
                "B       loc_FF85C17C\n"
	"loc_FF85C0A4:\n"
                "B       loc_FF85C184\n"
	"loc_FF85C0A8:\n"
                "B       loc_FF85C18C\n"
	"loc_FF85C0AC:\n"
                "B       loc_FF85C1E4\n"
	"loc_FF85C0B0:\n"
                "B       loc_FF85C1F0\n"
	"loc_FF85C0B4:\n"
                "B       loc_FF85C1F8\n"
	"loc_FF85C0B8:\n"
                "B       loc_FF85C200\n"
	"loc_FF85C0BC:\n"
                "B       loc_FF85C208\n"
	"loc_FF85C0C0:\n"
                "B       loc_FF85C210\n"
	"loc_FF85C0C4:\n"
                "B       loc_FF85C218\n"
	"loc_FF85C0C8:\n"
                "B       loc_FF85C220\n"
	"loc_FF85C0CC:\n"
                "B       loc_FF85C228\n"
	"loc_FF85C0D0:\n"
                "B       loc_FF85C234\n"
	"loc_FF85C0D4:\n"
                "B       loc_FF85C23C\n"
	"loc_FF85C0D8:\n"
                "B       loc_FF85C244\n"
	"loc_FF85C0DC:\n"
                "B       loc_FF85C24C\n"
	"loc_FF85C0E0:\n"
                "B       loc_FF85C258\n"
	"loc_FF85C0E4:\n"
                "B       loc_FF85C260\n"
	"loc_FF85C0E8:\n"
                "B       loc_FF85C274\n"
	"loc_FF85C0EC:\n"
                "BL      sub_FF9325D8\n"
                "BL      shooting_expo_param_override\n"    
                "BL      sub_FF85A2BC\n"
                "LDR     R0, [R6,#0x24]\n"
                "CMP     R0, #0\n"
                "BEQ     loc_FF85C274\n"
                "BL      sub_FF85BA9C\n"
                "MOV     R4, R0\n"
                "LDR     R0, [R6,#0x24]\n"
                "CMP     R0, #0\n"
                "BEQ     loc_FF85C134\n"
                "MOV     R0, #0xC\n"
                "BL      sub_FF85F170\n"
                "TST     R0, #1\n"
                "STRNE   R9, [R5,#4]\n"
                "LDRNE   R0, [R4,#8]\n"
                "ORRNE   R0, R0, #0x40000000\n"
                "STRNE   R0, [R4,#8]\n"
                "BNE     loc_FF85C274\n"
	"loc_FF85C134:\n"
                "BL      sub_FF947134\n"
                "BL      sub_FF869984\n"
                "STR     R0, [R4,#0x14]\n"
                "MOV     R0, R4\n"
                "BL      sub_FF933C30\n"
                "TST     R0, #1\n"
                "STRNE   R9, [R5,#4]\n"
                "B       loc_FF85C274\n"
	"loc_FF85C154:\n"
                "BL      sub_FF85C37C_my\n"		
                "B       loc_FF85C16C\n"
	"loc_FF85C15C:\n"
                "MOV     R0, #1\n"
                "BL      sub_FF93277C\n"
                "B       loc_FF85C274\n"
	"loc_FF85C168:\n"
                "BL      sub_FF932274\n"
	"loc_FF85C16C:\n"
                "STR     R7, [R6,#0x24]\n"
                "B       loc_FF85C274\n"
	"loc_FF85C174:\n"
                "BL      sub_FF9325A4\n"
                "B       loc_FF85C16C\n"
	"loc_FF85C17C:\n"
                "BL      sub_FF9325AC\n"
                "B       loc_FF85C274\n"
	"loc_FF85C184:\n"
                "BL      sub_FF93269C\n"
                "B       loc_FF85C1E8\n"
	"loc_FF85C18C:\n"
                "LDR     R4, [R0,#0xC]\n"
                "BL      sub_FF9325B4\n"
                "MOV     R0, R4\n"
                "BL      sub_FF932DC8\n"
                "TST     R0, #1\n"
                "MOV     R8, R0\n"
                "BNE     loc_FF85C1CC\n"
                "BL      sub_FF869984\n"
                "STR     R0, [R4,#0x14]\n"
                "MOV     R0, R4\n"
                "BL      sub_FF933B48\n"
                "MOV     R0, R4\n"
                "BL      sub_FF934098\n"
                "MOV     R8, R0\n"
                "LDR     R0, [R4,#0x14]\n"
                "BL      sub_FF869B98\n"
	"loc_FF85C1CC:\n"
                "BL      sub_FF9325A4\n"
                "MOV     R2, R4\n"
                "MOV     R1, #8\n"
                "MOV     R0, R8\n"
                "BL      sub_FF85A868\n"
                "B       loc_FF85C274\n"
	"loc_FF85C1E4:\n"
                "BL      sub_FF9326F8\n"
	"loc_FF85C1E8:\n"
                "BL      sub_FF85A2BC\n"
                "B       loc_FF85C274\n"
	"loc_FF85C1F0:\n"
                "BL      sub_FF9325A4\n"
                "B       loc_FF85C274\n"
	"loc_FF85C1F8:\n"
                "BL      sub_FF933034\n"
                "B       loc_FF85C274\n"
	"loc_FF85C200:\n"
                "BL      sub_FF9331EC\n"
                "B       loc_FF85C274\n"
	"loc_FF85C208:\n"
                "BL      sub_FF93327C\n"
                "B       loc_FF85C274\n"
	"loc_FF85C210:\n"
                "BL      sub_FF933330\n"
                "B       loc_FF85C274\n"
	"loc_FF85C218:\n"
                "BL      sub_FF933518\n"
                "B       loc_FF85C274\n"
	"loc_FF85C220:\n"
                "BL      sub_FF933568\n"
                "B       loc_FF85C274\n"
	"loc_FF85C228:\n"
                "MOV     R0, #0\n"
                "BL      sub_FF9335EC\n"
                "B       loc_FF85C274\n"
	"loc_FF85C234:\n"
                "BL      sub_FF93372C\n"
                "B       loc_FF85C274\n"
	"loc_FF85C23C:\n"
                "BL      sub_FF9337C0\n"
                "B       loc_FF85C274\n"
	"loc_FF85C244:\n"
                "BL      sub_FF933880\n"
                "B       loc_FF85C274\n"
	"loc_FF85C24C:\n"
                "BL      sub_FF9328A0\n"
                "BL      sub_FF825B44\n"
                "B       loc_FF85C274\n"
	"loc_FF85C258:\n"
                "BL      sub_FF9333EC\n"
                "B       loc_FF85C274\n"
	"loc_FF85C260:\n"
                "BL      sub_FF933458\n"
                "B       loc_FF85C274\n"
	"loc_FF85C268:\n"
                "LDR     R1, =0x523\n"
                "LDR	 R0, =0xFF85BDD0\n"   
                "BL      sub_FF81BFC8\n"
	"loc_FF85C274:\n"
                "LDR     R0, [SP]\n"
                "LDR     R1, [R0,#4]\n"
                "LDR     R0, [R5,#8]\n"
                "BL      sub_FF828E54\n"
                "LDR     R4, [SP]\n"
                "LDR     R0, [R4,#8]\n"
                "CMP     R0, #0\n"
                "LDREQ	 R0, =0xFF85BDD0\n"   
                "MOVEQ   R1, #0xFC\n"
                "BLEQ    sub_FF81BFC8\n"
                "STR     R7, [R4,#8]\n"
                "B       loc_FF85C04C\n"
    );
} 
