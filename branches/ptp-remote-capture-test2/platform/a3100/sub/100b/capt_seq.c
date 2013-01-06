#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)(0x5ca0-0x08);  // Found @ ff93271c & ff932738

#include "../../../generic/capt_seq.c"


void __attribute__((naked,noinline)) sub_FF93268C_my() {
 asm volatile (
      "    STMFD   SP!, {R0-R8,LR} \n" 
      "    MOV     R4, R0 \n" 
      "    BL      sub_FF933184 \n" 
      "    MVN     R1, #0 \n" 
      "    BL      sub_FF838D10 \n" 
      "    LDR     R5, =0x5C98 \n" 
      "    LDR     R0, [R5, #0xC] \n" 
      "    CMP     R0, #0 \n" 
      "    BNE     loc_FF9326DC \n" 
      "    MOV     R1, #1 \n" 
      "    MOV     R0, #0 \n" 
      "    BL      sub_FF81F41C \n" 
      "    STR     R0, [R5, #0xC] \n" 
      "    MOV     R3, #0 \n" 
      "    STR     R3, [SP] \n" 
      "    LDR     R3, =0xFF9320C8 \n" 
      "    LDR     R0, =0xFF9328F4 \n" 
      "    MOV     R2, #0x400 \n" 
      "    MOV     R1, #0x17 \n" 
      "    BL      sub_FF81F3E8 \n" 
"loc_FF9326DC:\n"
      "    MOV     R2, #4 \n" 
      "    ADD     R1, SP, #8 \n" 
      "    MOV     R0, #0x8A \n" 
      "    BL      sub_FF87E0AC \n" 
      "    TST     R0, #1 \n" 
      "    LDRNE   R1, =0x3CD \n" 
      "    LDRNE   R0, =0xFF93234C \n" 
      "    BLNE    sub_FF81F5E8 \n" 
      "    LDR     R6, =0x35A00 \n" 
      "    LDR     R7, =0x3593C \n" 
      "    LDR     R3, [R6] \n" 
      "    LDRSH   R2, [R6, #0xC] \n" 
      "    LDRSH   R1, [R6, #0xE] \n" 
      "    LDR     R0, [R7, #0x88] \n" 
      "    BL      sub_FF900C40 \n" 
      "    BL      sub_FF856788 \n" 
      "    LDR     R3, =0x5CA0 \n" 
      "    STRH    R0, [R4, #0xA4] \n" 
      "    SUB     R2, R3, #4 \n" 
      "    STRD    R2, [SP] \n" 
      "    MOV     R1, R0 \n" 
      "    LDRH    R0, [R7, #0x5C] \n" 
      "    LDRSH   R2, [R6, #0xC] \n" 
      "    SUB     R3, R3, #8 \n" 
      "    BL      sub_FF9337F0 \n" 

		"BL      wait_until_remote_button_is_released\n" // untested!
		"BL      capt_seq_hook_set_nr\n"
		"B       sub_ff932740\n" // -> continue in firmware
 );
}
void __attribute__((naked,noinline)) loc_FF86DAE0_my() {
 asm volatile (
      "    STMFD   SP!, {R4-R6,LR} \n" 
      "    LDR     R4, [R0, #0xC] \n" 
      "    LDR     R6, =0x3593C \n" 
      "    LDR     R0, [R4, #8] \n" 
      "    MOV     R5, #0 \n" 
      "    ORR     R0, R0, #1 \n" 
      "    STR     R0, [R4, #8] \n" 
      "    LDR     R0, [R6, #0x24] \n" 
      "    CMP     R0, #0 \n" 
      "    MOVEQ   R0, #2 \n" 
      "    BLEQ    sub_FF869DF0 \n" 
      "    BL      sub_FF86DFDC \n" 
      "    LDR     R0, [R6, #0x24] \n" 
      "    CMP     R0, #0 \n" 
      "    BNE     loc_FF86DB7C \n" 
      "    MOV     R0, R4 \n" 
      "    BL      sub_FF86E37C \n" 
      "    MOV     R0, R4 \n" 
      "    BL      sub_FF931234 \n" 
      "    CMP     R0, #0 \n" 
      "    MOV     R0, R4 \n" 
      "    BEQ     loc_FF86DB54 \n" 
      "    BL      sub_FF9312C0 \n" 
      "    TST     R0, #1 \n" 
      "    MOVNE   R2, R4 \n" 
      "    LDMNEFD SP!, {R4-R6,LR} \n" 
      "    MOVNE   R1, #1 \n" 
      "    BNE     sub_FF86BA70 \n" 
      "    B       loc_FF86DB58 \n" 
"loc_FF86DB54:\n"
      "    BL      sub_FF931284 \n" 
"loc_FF86DB58:\n"
      "    MOV     R0, R4 \n" 
      "    BL      sub_FF86D22C \n" 
      "    MOV     R0, R4 \n" 
      "    BL      sub_FF9325C4 \n" 
      "    BL      sub_FF932FF8 \n" 
      "    MOV     R0, R4 \n" 
      //"    BL      sub_FF93268C \n" 
      "    BL      sub_FF93268C_my \n"  // ---> nr setup


      "    MOV     R5, R0 \n" 
      "    B       loc_FF86DB8C \n" 
"loc_FF86DB7C:\n"
      "    LDR     R0, =0x2814 \n" 
      "    LDR     R0, [R0, #0x10] \n" 
      "    CMP     R0, #0 \n" 
      "    MOVNE   R5, #0x1D \n" 
"loc_FF86DB8C:\n"
		"BL      capt_seq_hook_raw_here\n" // ++++->
      "    BL      sub_FF8706F4 \n" 
      "    BL      sub_FF87073C \n" 
      "    BL      sub_FF87077C \n" 
      "    MOV     R2, R4 \n" 
      "    MOV     R1, #1 \n" 
      "    MOV     R0, R5 \n" 
      "    BL      sub_FF86BA70 \n" 
      "    BL      sub_FF932928 \n" 
      "    CMP     R0, #0 \n" 
      "    LDRNE   R0, [R4, #8] \n" 
      "    ORRNE   R0, R0, #0x2000 \n" 
      "    STRNE   R0, [R4, #8] \n" 
      "    LDMFD   SP!, {R4-R6,PC} \n" 

  );
}

void __attribute__((naked,noinline)) task_CaptSeqTask_my() { // @ ff86d6f0
	asm volatile (
      "    STMFD   SP!, {R3-R9,LR} \n" 
      "    LDR     R6, =0x2814 \n" 
      "    LDR     R4, =0x3593C \n" 
      "    MOV     R9, #1 \n" 
      "    MOV     R7, #0 \n" 
"loc_FF86D704:\n"
      "    LDR     R0, [R6, #4] \n" 
      "    MOV     R2, #0 \n" 
      "    MOV     R1, SP \n" 
      "    BL      sub_FF838F6C \n" 
      "    TST     R0, #1 \n" 
      "    BEQ     loc_FF86D730 \n" 
      "    LDR     R1, =0x5B4 \n" 
      "    LDR     R0, =0xFF86D2A8 \n" 
      "    BL      sub_FF81F5E8 \n" 
      "    BL      sub_FF81F3A0 \n" 
      "    LDMFD   SP!, {R3-R9,PC} \n" 
"loc_FF86D730:\n"
      "    LDR     R0, [SP] \n" 
      "    LDR     R1, [R0] \n" 
      "    CMP     R1, #0x1D \n" 
      "    ADDLS   PC, PC, R1, LSL #2 \n" 
      "    B       sub_FF86D9B8 \n" 
      "    B       loc_FF86D7BC \n" 
      "    B       loc_FF86D820 \n" 
      "    B       loc_FF86D85C \n" 
      "    B       loc_FF86D870 \n" 
      "    B       loc_FF86D868 \n" 
      "    B       loc_FF86D878 \n" 
      "    B       loc_FF86D880 \n" 
      "    B       sub_FF86D888 \n" 
      "    B       sub_FF86D8E0 \n" 
      "    B       sub_FF86D908 \n" 
      "    B       sub_FF86D8EC \n" 
      "    B       sub_FF86D8F8 \n" 
      "    B       sub_FF86D900 \n" 
      "    B       sub_FF86D910 \n" 
      "    B       sub_FF86D918 \n" 
      "    B       sub_FF86D920 \n" 
      "    B       sub_FF86D928 \n" 
      "    B       sub_FF86D930 \n" 
      "    B       sub_FF86D93C \n" 
      "    B       sub_FF86D944 \n" 
      "    B       sub_FF86D94C \n" 
      "    B       sub_FF86D954 \n" 
      "    B       sub_FF86D95C \n" 
      "    B       sub_FF86D968 \n" 
      "    B       sub_FF86D970 \n" 
      "    B       sub_FF86D978 \n" 
      "    B       sub_FF86D980 \n" 
      "    B       sub_FF86D988 \n" 
      "    B       sub_FF86D994 \n" 
      "    B       sub_FF86D9C4 \n" 
"loc_FF86D7BC:\n"
      "    BL      sub_FF86DFEC \n" 

		// TODO do we need the short press hack ?
		"BL      shooting_expo_param_override\n"  // +
      "    BL      sub_FF86B5FC \n" 
      "    LDR     R0, [R4, #0x24] \n" 
      "    CMP     R0, #0 \n" 
      "    BEQ     sub_FF86D9C4 \n" 
      "    BL      sub_FF86CF88 \n" 
      "    MOV     R5, R0 \n" 
      "    LDR     R0, [R4, #0x24] \n" 
      "    CMP     R0, #0 \n" 
      "    BEQ     loc_FF86D804 \n" 
      "    MOV     R0, #0xC \n" 
      "    BL      sub_FF871E24 \n" 
      "    TST     R0, #1 \n" 
      "    STRNE   R9, [R6, #0x10] \n" 
      "    LDRNE   R0, [R5, #8] \n" 
      "    ORRNE   R0, R0, #0x40000000 \n" 
      "    STRNE   R0, [R5, #8] \n" 
      "    BNE     sub_FF86D9C4 \n" 
"loc_FF86D804:\n"
      "    MOV     R0, R5 \n" 
      "    BL      sub_FF86D22C \n" 
      "    MOV     R0, R5 \n" 
      //"    BL      sub_FF93268C \n" 
      "    BL      sub_FF93268C_my \n"  // -> nr setup (quick press)
      "    TST     R0, #1 \n" 
      "    STRNE   R9, [R6, #0x10] \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D820:\n"
      "    LDR     R0, [R4, #0x24] \n" 
      "    CMP     R0, #0 \n" 
      "    BNE     loc_FF86D84C \n" 
      "    MOV     R0, #0xC \n" 
      "    BL      sub_FF871E24 \n" 
      "    TST     R0, #1 \n" 
      "    LDRNE   R0, [SP] \n" 
      "    MOVNE   R1, #1 \n" 
      "    LDRNE   R2, [R0, #0xC] \n" 
      "    MOVNE   R0, #1 \n" 
      "    BNE     loc_FF86D8D8 \n" 
"loc_FF86D84C:\n"
      "    LDR     R0, [SP] \n" 
      //"    BL      loc_FF86DAE0 \n" 
      "    BL      loc_FF86DAE0_my \n"  // ---->
"loc_FF86D854:\n"
      "    STR     R7, [R4, #0x24] \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D85C:\n"
      "    MOV     R0, #1 \n" 
      "    BL      sub_FF86E274 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D868:\n"
      "    BL      sub_FF86DC58 \n" 
      "    B       loc_FF86D854 \n" 
"loc_FF86D870:\n"
      "    BL      sub_FF86DFCC \n" 
      "    B       loc_FF86D854 \n" 
"loc_FF86D878:\n"
      "    BL      sub_FF86DFD4 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D880:\n"
      "    BL      sub_FF86E184 \n" 
      "    B       loc_FF86D8E4 \n" 
"loc_FF86D888:\n"
      "    LDR     R5, [R0, #0xC] \n" 
      "    BL      sub_FF86DFDC \n" 
      "    MOV     R0, R5 \n" 
      "    BL      sub_FF9315C8 \n" 
      "    TST     R0, #1 \n" 
      "    MOV     R8, R0 \n" 
      "    BNE     loc_FF86D8C8 \n" 
      "    BL      sub_FF87E23C \n" 
      "    STR     R0, [R5, #0x18] \n" 
      "    MOV     R0, R5 \n" 
      "    BL      sub_FF9325C4 \n" 
      "    MOV     R0, R5 \n" 
      "    BL      sub_FF932974 \n" 
      "    MOV     R8, R0 \n" 
      "    LDR     R0, [R5, #0x18] \n" 
      "    BL      sub_FF87E474 \n" 
"loc_FF86D8C8:\n"
      "    BL      sub_FF86DFCC \n" 
      "    MOV     R2, R5 \n" 
      "    MOV     R1, #9 \n" 
      "    MOV     R0, R8 \n" 
"loc_FF86D8D8:\n"
      "    BL      sub_FF86BA70 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D8E0:\n"
      "    BL      sub_FF86E1EC \n" 
"loc_FF86D8E4:\n"
      "    BL      sub_FF86B5FC \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D8EC:\n"
      "    LDR     R0, [R4, #0x54] \n" 
      "    BL      sub_FF86E5D4 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D8F8:\n"
      "    BL      sub_FF86E884 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D900:\n"
      "    BL      sub_FF86E918 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D908:\n"
      "    BL      sub_FF86DFCC \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D910:\n"
      "    BL      sub_FF9317F4 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D918:\n"
      "    BL      sub_FF9319EC \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D920:\n"
      "    BL      sub_FF931A80 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D928:\n"
      "    BL      sub_FF931B40 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D930:\n"
      "    MOV     R0, #0 \n" 
      "    BL      sub_FF931D38 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D93C:\n"
      "    BL      sub_FF931E88 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D944:\n"
      "    BL      sub_FF931F18 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D94C:\n"
      "    BL      sub_FF931FD8 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D954:\n"
      "    BL      sub_FF86E3C8 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D95C:\n"
      "    BL      sub_FF86E45C \n" 
      "    BL      sub_FF836E20 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D968:\n"
      "    BL      sub_FF931C0C \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D970:\n"
      "    BL      sub_FF931C50 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D978:\n"
      "    BL      sub_FF870674 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D980:\n"
      "    BL      sub_FF8706F4 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D988:\n"
      "    BL      sub_FF870750 \n" 
      "    BL      sub_FF870710 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D994:\n"
      "    LDRH    R0, [R4, #0x94] \n" 
      "    CMP     R0, #4 \n" 
      "    LDRNEH  R0, [R4] \n" 
      "    SUBNE   R12, R0, #0x8200 \n" 
      "    SUBNES  R12, R12, #0x2A \n" 
      "    BNE     loc_FF86D9C4 \n" 
      "    BL      sub_FF8706F4 \n" 
      "    BL      sub_FF870A94 \n" 
      "    B       loc_FF86D9C4 \n" 
"loc_FF86D9B8:\n"
      "    LDR     R1, =0x719 \n" 
      "    LDR     R0, =0xFF86D2A8 \n" 
      "    BL      sub_FF81F5E8 \n" 
"loc_FF86D9C4:\n"
      "    LDR     R0, [SP] \n" 
      "    LDR     R1, [R0, #4] \n" 
      "    LDR     R0, [R6] \n" 
      "    BL      sub_FF838CDC \n" 
      "    LDR     R5, [SP] \n" 
      "    LDR     R0, [R5, #8] \n" 
      "    CMP     R0, #0 \n" 
      "    LDREQ   R1, =0x132 \n" 
      "    LDREQ   R0, =0xFF86D2A8 \n" 
      "    BLEQ    sub_FF81F5E8 \n" 
      "    STR     R7, [R5, #8] \n" 
      "    B       sub_FF86D704 \n" 
    );
}

void __attribute__((naked,noinline)) exp_drv_task(){
 asm volatile(
      "    STMFD   SP!, {R4-R8,LR} \n" 
      "    SUB     SP, SP, #0x20 \n" 
      "    LDR     R8, =0xBB8 \n" 
      "    LDR     R7, =0x3B4C \n" 
      "    LDR     R5, =0x3ED88 \n" 
      "    MOV     R0, #0 \n" 
      "    ADD     R6, SP, #0x10 \n" 
      "    STR     R0, [SP, #0xC] \n" 
"loc_FF8AA7B8:\n"
     "    LDR     R0, [R7, #0x20] \n" 
      "    MOV     R2, #0 \n" 
      "    ADD     R1, SP, #0x1C \n" 
      "    BL      sub_FF838F6C \n" 
      "    LDR     R0, [SP, #0xC] \n" 
      "    CMP     R0, #1 \n" 
      "    BNE     loc_FF8AA804 \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    LDR     R0, [R0] \n" 
      "    CMP     R0, #0x13 \n" 
      "    CMPNE   R0, #0x14 \n" 
      "    CMPNE   R0, #0x15 \n" 
      "    CMPNE   R0, #0x16 \n" 
      "    BEQ     loc_FF8AA968 \n" 
      "    CMP     R0, #0x28 \n" 
      "    BEQ     loc_FF8AA8F0 \n" 
      "    ADD     R1, SP, #0xC \n" 
      "    MOV     R0, #0 \n" 
      "    BL      sub_FF8AA748 \n" 
"loc_FF8AA804:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    LDR     R1, [R0] \n" 
      "    CMP     R1, #0x2E \n" 
      "    BNE     loc_FF8AA834 \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    BL      sub_FF8ABA98 \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R1, #1 \n" 
      "    BL      sub_FF838CDC \n" 
      "    BL      sub_FF81F3A0 \n" 
      "    ADD     SP, SP, #0x20 \n" 
      "    LDMFD   SP!, {R4-R8,PC} \n" 
"loc_FF8AA834:\n"
      "    CMP     R1, #0x2D \n" 
      "    BNE     loc_FF8AA850 \n" 
      "    LDR     R2, [R0, #0x8C]! \n" 
      "    LDR     R1, [R0, #4] \n" 
      "    MOV     R0, R1 \n" 
      "    BLX     R2 \n" 
      "    B       loc_FF8AAD90 \n" 
"loc_FF8AA850:\n"
      "    CMP     R1, #0x26 \n" 
      "    BNE     loc_FF8AA8A0 \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R1, #0x80 \n" 
      "    BL      sub_FF838D10 \n" 
      "    LDR     R0, =0xFF8A6F1C \n" 
      "    MOV     R1, #0x80 \n" 
      "    BL      sub_FF926A4C \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R2, R8 \n" 
      "    MOV     R1, #0x80 \n" 
      "    BL      sub_FF838C1C \n" 
      "    TST     R0, #1 \n" 
      "    LDRNE   R1, =0xE83 \n" 
      "    BNE     loc_FF8AA95C \n" 
"loc_FF8AA88C:\n"
      "    LDR     R1, [SP, #0x1C] \n" 
      "    LDR     R0, [R1, #0x90] \n" 
      "    LDR     R1, [R1, #0x8C] \n" 
      "    BLX     R1 \n" 
      "    B       loc_FF8AAD90 \n" 
"loc_FF8AA8A0:\n"
      "    CMP     R1, #0x27 \n" 
      "    BNE     loc_FF8AA8E8 \n" 
      "    ADD     R1, SP, #0xC \n" 
      "    BL      sub_FF8AA748 \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R1, #0x100 \n" 
      "    BL      sub_FF838D10 \n" 
      "    LDR     R0, =0xFF8A6F2C \n" 
      "    MOV     R1, #0x100 \n" 
      "    BL      sub_FF926CD4 \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R2, R8 \n" 
      "    MOV     R1, #0x100 \n" 
      "    BL      sub_FF838C1C \n" 
      "    TST     R0, #1 \n" 
      "    BEQ     loc_FF8AA88C \n" 
      "    LDR     R1, =0xE8D \n" 
      "    B       loc_FF8AA95C \n" 
"loc_FF8AA8E8:\n"
      "    CMP     R1, #0x28 \n" 
      "    BNE     loc_FF8AA900 \n" 
"loc_FF8AA8F0:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    ADD     R1, SP, #0xC \n" 
      "    BL      sub_FF8AA748 \n" 
      "    B       loc_FF8AA88C \n" 
"loc_FF8AA900:\n"
      "    CMP     R1, #0x2B \n" 
      "    BNE     loc_FF8AA918 \n" 
      "    BL      sub_FF89A314 \n" 
      "    BL      sub_FF89AF3C \n" 
      "    BL      sub_FF89AA8C \n" 
      "    B       loc_FF8AA88C \n" 
"loc_FF8AA918:\n"
      "    CMP     R1, #0x2C \n" 
      "    BNE     loc_FF8AA968 \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R1, #4 \n" 
      "    BL      sub_FF838D10 \n" 
      "    LDR     R1, =0xFF8A6F4C \n" 
      "    LDR     R0, =0xFFFFF400 \n" 
      "    MOV     R2, #4 \n" 
      "    BL      sub_FF899D90 \n" 
      "    BL      sub_FF89A018 \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R2, R8 \n" 
      "    MOV     R1, #4 \n" 
      "    BL      sub_FF838B38 \n" 
      "    TST     R0, #1 \n" 
      "    BEQ     loc_FF8AA88C \n" 
      "    LDR     R1, =0xEB5 \n" 
"loc_FF8AA95C:\n"
      "    LDR     R0, =0xFF8A7590 \n" 
      "    BL      sub_FF81F5E8 \n" 
      "    B       loc_FF8AA88C \n" 
"loc_FF8AA968:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    MOV     R4, #1 \n" 
      "    LDR     R1, [R0] \n" 
      "    CMP     R1, #0x11 \n" 
      "    CMPNE   R1, #0x12 \n" 
      "    BNE     loc_FF8AA9D8 \n" 
      "    LDR     R1, [R0, #0x7C] \n" 
      "    ADD     R1, R1, R1, LSL #1 \n" 
      "    ADD     R1, R0, R1, LSL #2 \n" 
      "    SUB     R1, R1, #8 \n" 
      "    LDMIA   R1, {R2-R4} \n" 
      "    STMIA   R6, {R2-R4} \n" 
      "    BL      sub_FF8A90D0 \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    LDR     R1, [R0, #0x7C] \n" 
      "    LDR     R3, [R0, #0x8C] \n" 
      "    LDR     R2, [R0, #0x90] \n" 
      "    ADD     R0, R0, #4 \n" 
      "    BLX     R3 \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    BL      sub_FF8ABE64 \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    LDR     R1, [R0, #0x7C] \n" 
      "    LDR     R3, [R0, #0x94] \n" 
      "    LDR     R2, [R0, #0x98] \n" 
      "    ADD     R0, R0, #4 \n" 
      "    BLX     R3 \n" 
      "    B       loc_FF8AACD0 \n" 
"loc_FF8AA9D8:\n"
      "    CMP     R1, #0x13 \n" 
      "    CMPNE   R1, #0x14 \n" 
      "    CMPNE   R1, #0x15 \n" 
      "    CMPNE   R1, #0x16 \n" 
      "    BNE     loc_FF8AAA90 \n" 
      "    ADD     R3, SP, #0xC \n" 
      "    MOV     R2, SP \n" 
      "    ADD     R1, SP, #0x10 \n" 
      "    BL      sub_FF8A93B0 \n" 
      "    CMP     R0, #1 \n" 
      "    MOV     R4, R0 \n" 
      "    CMPNE   R4, #5 \n" 
      "    BNE     loc_FF8AAA2C \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    MOV     R2, R4 \n" 
      "    LDR     R1, [R0, #0x7C]! \n" 
      "    LDR     R12, [R0, #0x10]! \n" 
      "    LDR     R3, [R0, #4] \n" 
      "    MOV     R0, SP \n" 
      "    BLX     R12 \n" 
      "    B       loc_FF8AAA64 \n" 
"loc_FF8AAA2C:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    CMP     R4, #2 \n" 
      "    LDR     R3, [R0, #0x90] \n" 
      "    CMPNE   R4, #6 \n" 
      "    BNE     loc_FF8AAA78 \n" 
      "    LDR     R12, [R0, #0x8C] \n" 
      "    MOV     R0, SP \n" 
      "    MOV     R2, R4 \n" 
      "    MOV     R1, #1 \n" 
      "    BLX     R12 \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    MOV     R2, SP \n" 
      "    ADD     R1, SP, #0x10 \n" 
      "    BL      sub_FF8AA450 \n" 
"loc_FF8AAA64:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    LDR     R2, [SP, #0xC] \n" 
      "    MOV     R1, R4 \n" 
      "    BL      sub_FF8AA6E8 \n" 
      "    B       loc_FF8AACD0 \n" 
"loc_FF8AAA78:\n"
      "    LDR     R1, [R0, #0x7C] \n" 
      "    LDR     R12, [R0, #0x8C] \n" 
      "    ADD     R0, R0, #4 \n" 
      "    MOV     R2, R4 \n" 
      "    BLX     R12 \n" 
      "    B       loc_FF8AACD0 \n" 
"loc_FF8AAA90:\n"
      "    CMP     R1, #0x22 \n" 
      "    CMPNE   R1, #0x23 \n" 
      "    BNE     loc_FF8AAADC \n" 
      "    LDR     R1, [R0, #0x7C] \n" 
      "    ADD     R1, R1, R1, LSL #1 \n" 
      "    ADD     R1, R0, R1, LSL #2 \n" 
      "    SUB     R1, R1, #8 \n" 
      "    LDMIA   R1, {R2-R4} \n" 
      "    STMIA   R6, {R2-R4} \n" 
      "    BL      sub_FF8A8620 \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    LDR     R1, [R0, #0x7C] \n" 
      "    LDR     R3, [R0, #0x8C] \n" 
      "    LDR     R2, [R0, #0x90] \n" 
      "    ADD     R0, R0, #4 \n" 
      "    BLX     R3 \n" 
      "    LDR     R0, [SP, #0x1C] \n" 
      "    BL      sub_FF8A8914 \n" 
      "    B       loc_FF8AACD0 \n" 
"loc_FF8AAADC:\n"
      "    ADD     R1, R0, #4 \n" 
      "    LDMIA   R1, {R2,R3,R12} \n" 
      "    STMIA   R6, {R2,R3,R12} \n" 
      "    LDR     R1, [R0] \n" 
      "    CMP     R1, #0x25 \n" 
      "    ADDLS   PC, PC, R1, LSL #2 \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AAB90 \n" 
      "    B       loc_FF8AAB90 \n" 
      "    B       loc_FF8AAB98 \n" 
      "    B       loc_FF8AABA0 \n" 
      "    B       loc_FF8AABA0 \n" 
      "    B       loc_FF8AABA0 \n" 
      "    B       loc_FF8AAB90 \n" 
      "    B       loc_FF8AAB98 \n" 
      "    B       loc_FF8AABA0 \n" 
      "    B       loc_FF8AABA0 \n" 
      "    B       loc_FF8AABB8 \n" 
      "    B       loc_FF8AABB8 \n" 
      "    B       loc_FF8AACA4 \n" 
      "    B       loc_FF8AACAC \n" 
      "    B       loc_FF8AACAC \n" 
      "    B       loc_FF8AACAC \n" 
      "    B       loc_FF8AACAC \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AABA8 \n" 
      "    B       loc_FF8AABB0 \n" 
      "    B       loc_FF8AABB0 \n" 
      "    B       loc_FF8AABC4 \n" 
      "    B       loc_FF8AABC4 \n" 
      "    B       loc_FF8AABCC \n" 
      "    B       loc_FF8AABFC \n" 
      "    B       loc_FF8AAC2C \n" 
      "    B       loc_FF8AAC5C \n" 
      "    B       loc_FF8AAC8C \n" 
      "    B       loc_FF8AAC8C \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AACB0 \n" 
      "    B       loc_FF8AAC94 \n" 
      "    B       loc_FF8AAC9C \n" 
"loc_FF8AAB90:\n"
      "    BL      sub_FF8A7434 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AAB98:\n"
      "    BL      sub_FF8A76B0 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AABA0:\n"
      "    BL      sub_FF8A78B8 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AABA8:\n"
      "    BL      sub_FF8A7B30 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AABB0:\n"
      "    BL      sub_FF8A7D28 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AABB8:\n"
      //"    BL      sub_FF8A7FE4 \n" 
      "    BL      sub_FF8A7FE4_my \n"  //----------------------->
      "    MOV     R4, #0 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AABC4:\n"
      "    BL      sub_FF8A8124 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AABCC:\n"
      "    LDRH    R1, [R0, #4] \n" 
      "    STRH    R1, [SP, #0x10] \n" 
      "    LDRH    R1, [R5, #2] \n" 
      "    STRH    R1, [SP, #0x12] \n" 
      "    LDRH    R1, [R5, #4] \n" 
      "    STRH    R1, [SP, #0x14] \n" 
      "    LDRH    R1, [R5, #6] \n" 
      "    STRH    R1, [SP, #0x16] \n" 
      "    LDRH    R1, [R0, #0xC] \n" 
      "    STRH    R1, [SP, #0x18] \n" 
      "    BL      sub_FF8ABB0C \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AABFC:\n"
      "    LDRH    R1, [R0, #4] \n" 
      "    STRH    R1, [SP, #0x10] \n" 
      "    LDRH    R1, [R5, #2] \n" 
      "    STRH    R1, [SP, #0x12] \n" 
      "    LDRH    R1, [R5, #4] \n" 
      "    STRH    R1, [SP, #0x14] \n" 
      "    LDRH    R1, [R5, #6] \n" 
      "    STRH    R1, [SP, #0x16] \n" 
      "    LDRH    R1, [R5, #8] \n" 
      "    STRH    R1, [SP, #0x18] \n" 
      "    BL      sub_FF8ABC7C \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AAC2C:\n"
      "    LDRH    R1, [R5] \n" 
      "    STRH    R1, [SP, #0x10] \n" 
      "    LDRH    R1, [R0, #6] \n" 
      "    STRH    R1, [SP, #0x12] \n" 
      "    LDRH    R1, [R5, #4] \n" 
      "    STRH    R1, [SP, #0x14] \n" 
      "    LDRH    R1, [R5, #6] \n" 
      "    STRH    R1, [SP, #0x16] \n" 
      "    LDRH    R1, [R5, #8] \n" 
      "    STRH    R1, [SP, #0x18] \n" 
      "    BL      sub_FF8ABD28 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AAC5C:\n"
      "    LDRH    R1, [R5] \n" 
      "    STRH    R1, [SP, #0x10] \n" 
      "    LDRH    R1, [R5, #2] \n" 
      "    STRH    R1, [SP, #0x12] \n" 
      "    LDRH    R1, [R5, #4] \n" 
      "    STRH    R1, [SP, #0x14] \n" 
      "    LDRH    R1, [R5, #6] \n" 
      "    STRH    R1, [SP, #0x16] \n" 
      "    LDRH    R1, [R0, #0xC] \n" 
      "    STRH    R1, [SP, #0x18] \n" 
      "    BL      sub_FF8ABDC8 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AAC8C:\n"
      "    BL      sub_FF8A8478 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AAC94:\n"
      "    BL      sub_FF8A8A18 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AAC9C:\n"
      "    BL      sub_FF8A8C54 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AACA4:\n"
      "    BL      sub_FF8A8DD0 \n" 
      "    B       loc_FF8AACB0 \n" 
"loc_FF8AACAC:\n"
      "    BL      sub_FF8A8F6C \n" 
"loc_FF8AACB0:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    LDR     R1, [R0, #0x7C] \n" 
      "    LDR     R3, [R0, #0x8C] \n" 
      "    LDR     R2, [R0, #0x90] \n" 
      "    ADD     R0, R0, #4 \n" 
      "    BLX     R3 \n" 
      "    CMP     R4, #1 \n" 
      "    BNE     loc_FF8AAD18 \n" 
"loc_FF8AACD0:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    MOV     R2, #0xC \n" 
      "    LDR     R1, [R0, #0x7C] \n" 
      "    ADD     R1, R1, R1, LSL #1 \n" 
      "    ADD     R0, R0, R1, LSL #2 \n" 
      "    SUB     R4, R0, #8 \n" 
      "    LDR     R0, =0x3ED88 \n" 
      "    ADD     R1, SP, #0x10 \n" 
      "    BL      sub_FFAD577C \n" 
      "    LDR     R0, =0x3ED94 \n" 
      "    MOV     R2, #0xC \n" 
      "    ADD     R1, SP, #0x10 \n" 
      "    BL      sub_FFAD577C \n" 
      "    LDR     R0, =0x3EDA0 \n" 
      "    MOV     R2, #0xC \n" 
      "    MOV     R1, R4 \n" 
      "    BL      sub_FFAD577C \n" 
      "    B       loc_FF8AAD90 \n" 
"loc_FF8AAD18:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    LDR     R0, [R0] \n" 
      "    CMP     R0, #0xB \n" 
      "    BNE     loc_FF8AAD60 \n" 
      "    MOV     R3, #0 \n" 
      "    STR     R3, [SP] \n" 
      "    MOV     R3, #1 \n" 
      "    MOV     R2, #1 \n" 
      "    MOV     R1, #1 \n" 
      "    MOV     R0, #0 \n" 
      "    BL      sub_FF8A723C \n" 
      "    MOV     R3, #0 \n" 
      "    STR     R3, [SP] \n" 
      "    MOV     R3, #1 \n" 
      "    MOV     R2, #1 \n" 
      "    MOV     R1, #1 \n" 
      "    MOV     R0, #0 \n" 
      "    B       loc_FF8AAD8C \n" 
"loc_FF8AAD60:\n"
      "    MOV     R3, #1 \n" 
      "    MOV     R2, #1 \n" 
      "    MOV     R1, #1 \n" 
      "    MOV     R0, #1 \n" 
      "    STR     R3, [SP] \n" 
      "    BL      sub_FF8A723C \n" 
      "    MOV     R3, #1 \n" 
      "    MOV     R2, #1 \n" 
      "    MOV     R1, #1 \n" 
      "    MOV     R0, #1 \n" 
      "    STR     R3, [SP] \n" 
"loc_FF8AAD8C:\n"
      "    BL      sub_FF8A737C \n" 
"loc_FF8AAD90:\n"
      "    LDR     R0, [SP, #0x1C] \n" 
      "    BL      sub_FF8ABA98 \n" 
      "    B       loc_FF8AA7B8 \n" 

  );
}

void __attribute__((naked,noinline)) sub_FF8A7FE4_my(){
 asm volatile(
      "    STMFD   SP!, {R4-R8,LR} \n" 
      "    LDR     R7, =0x3B4C \n" 
      "    MOV     R4, R0 \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R1, #0x3E \n" 
      "    BL      sub_FF838D10 \n" 
      "    LDRSH   R0, [R4, #4] \n" 
      "    MOV     R2, #0 \n" 
      "    MOV     R1, #0 \n" 
      "    BL      sub_FF8A6FA0 \n" 
      "    MOV     R6, R0 \n" 
      "    LDRSH   R0, [R4, #6] \n" 
      "    BL      sub_FF8A70B0 \n" 
      "    LDRSH   R0, [R4, #8] \n" 
      "    BL      sub_FF8A7108 \n" 
      "    LDRSH   R0, [R4, #0xA] \n" 
      "    BL      sub_FF8A7160 \n" 
      "    LDRSH   R0, [R4, #0xC] \n" 
      "    MOV     R1, #0 \n" 
      "    BL      sub_FF8A71B8 \n" 
      "    MOV     R5, R0 \n" 
      "    LDR     R0, [R4] \n" 
      "    LDR     R8, =0x3EDA0 \n" 
      "    CMP     R0, #0xB \n" 
      "    MOVEQ   R6, #0 \n" 
      "    MOVEQ   R5, #0 \n" 
      "    BEQ     loc_FF8A8078 \n" 
      "    CMP     R6, #1 \n" 
      "    BNE     loc_FF8A8078 \n" 
      "    LDRSH   R0, [R4, #4] \n" 
      "    LDR     R1, =0xFF8A6F0C \n" 
      "    MOV     R2, #2 \n" 
      "    BL      sub_FF926BA0 \n" 
      "    STRH    R0, [R4, #4] \n" 
      "    MOV     R0, #0 \n" 
      "    STR     R0, [R7, #0x28] \n" 
      "    B       loc_FF8A8080 \n" 
"loc_FF8A8078:\n"
      "    LDRH    R0, [R8] \n" 
      "    STRH    R0, [R4, #4] \n" 
"loc_FF8A8080:\n"
      "    CMP     R5, #1 \n" 
      "    LDRNEH  R0, [R8, #8] \n" 
      "    BNE     loc_FF8A809C \n" 
      "    LDRSH   R0, [R4, #0xC] \n" 
      "    LDR     R1, =0xFF8A6F90 \n" 
      "    MOV     R2, #0x20 \n" 
      "    BL      sub_FF8ABAC8 \n" 
"loc_FF8A809C:\n"
      "    STRH    R0, [R4, #0xC] \n" 
      "    LDRSH   R0, [R4, #6] \n" 
     // "    BL      sub_FF89A084 \n" 
      "    BL      sub_FF89A084_my \n" // ------->
      "    LDRSH   R0, [R4, #8] \n" 
      "    MOV     R1, #1 \n" 
      "    BL      sub_FF89A7D4 \n" 
      "    MOV     R1, #0 \n" 
      "    ADD     R0, R4, #8 \n" 
      "    BL      sub_FF89A85C \n" 
      "    LDRSH   R0, [R4, #0xE] \n" 
      "    BL      sub_FF8A2298 \n" 
      "    LDR     R4, =0xBB8 \n" 
      "    CMP     R6, #1 \n" 
      "    BNE     loc_FF8A80F4 \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R2, R4 \n" 
      "    MOV     R1, #2 \n" 
      "    BL      sub_FF838C1C \n" 
      "    TST     R0, #1 \n" 
      "    LDRNE   R1, =0x5A6 \n" 
      "    LDRNE   R0, =0xFF8A7590 \n" 
      "    BLNE    sub_FF81F5E8 \n" 
"loc_FF8A80F4:\n"
      "    CMP     R5, #1 \n" 
      "    LDMNEFD SP!, {R4-R8,PC} \n" 
      "    LDR     R0, [R7, #0x1C] \n" 
      "    MOV     R2, R4 \n" 
      "    MOV     R1, #0x20 \n" 
      "    BL      sub_FF838C1C \n" 
      "    TST     R0, #1 \n" 
      "    LDRNE   R1, =0x5AB \n" 
      "    LDRNE   R0, =0xFF8A7590 \n" 
      "    LDMNEFD SP!, {R4-R8,LR} \n" 
      "    BNE     sub_FF81F5E8 \n" 
      "    LDMFD   SP!, {R4-R8,PC} \n" 
  );
}

void __attribute__((naked,noinline)) sub_FF89A084_my(){
 asm volatile(
      "    STMFD   SP!, {R4-R6,LR} \n" 
      "    LDR     R5, =0x3840 \n" 
      "    MOV     R4, R0 \n" 
      "    LDR     R0, [R5, #4] \n" 
      "    CMP     R0, #1 \n" 
      "    LDRNE   R1, =0x146 \n" 
      "    LDRNE   R0, =0xFF899E88 \n" 
      "    BLNE    sub_FF81F5E8 \n" 
      "    CMN     R4, #0xC00 \n" 
      "    LDREQSH R4, [R5, #2] \n" 
      "    CMN     R4, #0xC00 \n" 
      "    MOVEQ   R1, #0x14C \n" 
      "    LDREQ   R0, =0xFF899E88 \n" 
      "    STRH    R4, [R5, #2] \n" 
      "    BLEQ    sub_FF81F5E8 \n" 
      "    MOV     R0, R4 \n" 
      //"    BL      sub_FF9B582C \n" 
		 "BL      apex2us\n"  // +
      "    MOV     R4, R0 \n" 
      "    BL      sub_FF8CCEE0 \n" 
      "    MOV     R0, R4 \n" 
      "    BL      sub_FF8D18D4 \n" 
      "    TST     R0, #1 \n" 
      "    LDRNE   R1, =0x151 \n" 
      "    LDMNEFD SP!, {R4-R6,LR} \n" 
      "    LDRNE   R0, =0xFF899E88 \n" 
      "    BNE     sub_FF81F5E8 \n" 
      "    LDMFD   SP!, {R4-R6,PC} \n" 
  );
}

