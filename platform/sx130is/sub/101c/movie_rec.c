#include "conf.h"

//int *video_quality = &conf.video_quality;
//int *video_mode    = &conf.video_mode;


/*----------------------------------------------------------------------
	set_quality()
-----------------------------------------------------------------------*/
// TODO - check this
void  set_quality (int *x)  // -17 highest; +12 lowest
{
	if (conf.video_mode)
		*x = 12 - ((conf.video_quality-1) * (12+17) / (99-1));
}


/*----------------------------------------------------------------------
	change_video_tables()
-----------------------------------------------------------------------*/
void change_video_tables(int a, int b)
{
}


/*----------------------------------------------------------------------
	movie_record_task()
-----------------------------------------------------------------------*/
void __attribute__((naked,noinline)) movie_record_task()
{
	//FF969BC8
	asm volatile (

"		STMFD	SP!, {R2-R8,LR} \n"
"		LDR	R8, =0x2710 \n"
"		LDR	R4, =0x6B68 \n"
"		MOV	R7, #1 \n"
//"		ADR	R6, nullsub_277 \n"
"		LDR	R6, =0xFF9698B8 \n"
"		MOV	R5, #0 \n"
"loc_FF969BE0: \n"
"		LDR	R0, [R4,#0x24] \n"
"		MOV	R2, #0 \n"
"		ADD	R1, SP,	#0x4 \n"
"		BL	sub_FF839B8C \n"
"		LDR	R0, [R4,#0x2C] \n"
"		CMP	R0, #0 \n"
"		LDRNE	R0, [R4,#0xC] \n"
"		CMPNE	R0, #2 \n"
"		LDRNE	R0, [R4,#0x44] \n"
"		CMPNE	R0, #6 \n"
"		BNE	loc_FF969CF8 \n"
"		LDR	R0, [SP,#0x4] \n"
"		LDR	R1, [R0] \n"
"		SUB	R1, R1,	#2 \n"
"		CMP	R1, #0xA \n"
"		ADDLS	PC, PC,	R1,LSL#2 \n"
"		B	loc_FF969CF8 \n"
"loc_FF969C24: \n"
"		B	loc_FF969CAC \n"
"loc_FF969C28: \n"
"		B	loc_FF969CCC \n"
"loc_FF969C2C: \n"
"		B	loc_FF969CDC \n"
"loc_FF969C30: \n"
"		B	loc_FF969CE4 \n"
"loc_FF969C34: \n"
"		B	loc_FF969CB4 \n"
"loc_FF969C38: \n"
"		B	loc_FF969CEC \n"
"loc_FF969C3C: \n"
"		B	loc_FF969CBC \n"
"loc_FF969C40: \n"
"		B	loc_FF969CF8 \n"
"loc_FF969C44: \n"
"		B	loc_FF969CF4 \n"
"loc_FF969C48: \n"
"		B	loc_FF969C7C \n"
"loc_FF969C4C: \n"
"		B	loc_FF969C50 \n"
"loc_FF969C50: \n"
// jumptable FF969C1C entry 10
"		STR	R5, [R4,#0x40] \n"
"		STR	R5, [R4,#0x30] \n"
"		STR	R5, [R4,#0x34] \n"
"		STRH	R5, [R4,#6] \n"
"		STR	R6, [R4,#0xB4] \n"
"		LDR	R0, [R4,#0xC] \n"
"		ADD	R0, R0,	#1 \n"
"		STR	R0, [R4,#0xC] \n"
"		MOV	R0, #6 \n"
"		STR	R0, [R4,#0x44] \n"
"		B	loc_FF969C98 \n"
"loc_FF969C7C: \n"
// jumptable FF969C1C entry 9
"		STR	R5, [R4,#0x40] \n"
"		STR	R5, [R4,#0x30] \n"
"		STR	R6, [R4,#0xB4] \n"
"		LDR	R0, [R4,#0xC] \n"
"		ADD	R0, R0,	#1 \n"
"		STR	R0, [R4,#0xC] \n"
"		STR	R7, [R4,#0x44] \n"
"loc_FF969C98: \n"
"		LDR	R2, =0xFF968AD0 \n"
"		LDR	R1, =0xAC9B0 \n"
"		LDR	R0, =0xFF968BCC \n"
"		BL	sub_FF851604 \n"
"		B	loc_FF969CF8 \n"
"loc_FF969CAC: \n"
// jumptable FF969C1C entry 0
"		BL	sub_FF9699E0 \n"
"		B	loc_FF969CF8 \n"
"loc_FF969CB4: \n"
// jumptable FF969C1C entry 4
"		BL	sub_FF969320 \n"
//"		BL	sub_FF969320_my \n"		// patched --------->

"		LDR	R0, =0x6BEC \n"			// Added (6BF0 - 4)
"		BL	set_quality \n"			// Added ----------->

"		B	loc_FF969CF8 \n"
"loc_FF969CBC: \n"
// jumptable FF969C1C entry 6
"		LDR	R1, [R0,#0x18] \n"
"		LDR	R0, [R0,#4] \n"
"		BL	sub_FFAA9A74 \n"
"		B	loc_FF969CF8 \n"
"loc_FF969CCC: \n"
// jumptable FF969C1C entry 1
"		LDR	R0, [R4,#0x44] \n"
"		CMP	R0, #5 \n"
"		STRNE	R7, [R4,#0x34] \n"
"		B	loc_FF969CF8 \n"
"loc_FF969CDC: \n"
// jumptable FF969C1C entry 2
"		BL	sub_FF968F68 \n"
"		B	loc_FF969CF8 \n"
"loc_FF969CE4: \n"
// jumptable FF969C1C entry 3
"		BL	sub_FF968C18 \n"
"		B	loc_FF969CF8 \n"
"loc_FF969CEC: \n"
// jumptable FF969C1C entry 5
"		BL	sub_FF968A5C \n"
"		B	loc_FF969CF8 \n"
"loc_FF969CF4: \n"
// jumptable FF969C1C entry 8
"		BL	sub_FF96A128 \n"
"loc_FF969CF8: \n"
// jumptable FF969C1C default entry
// jumptable FF969C1C entry 7
"		LDR	R1, [SP,#0x4] \n"
"		MOV	R3, #0x5F0 \n"
"		STR	R5, [R1] \n"
"		STR	R3, [SP] \n"
"		LDR	R0, [R4,#0x28] \n"
"		LDR	R3, =0xFF9688C0 \n" // "MovieRecorder.c"
"		MOV	R2, R8 \n"
"		BL	sub_FF83A4E0 \n"
"		B	loc_FF969BE0 \n"

	);
}

// void __attribute__((naked,noinline)) sub_FF969320_my()
// {
	// asm volatile (

// "		STMFD	SP!, {R4-R11,LR} \n"
// "		SUB	SP, SP,	#0x64 \n"
// "		MOV	R8, #0 \n"
// "		LDR	R6, =0x6B68 \n"
// "		MOV	R4, R0 \n"
// "		STR	R8, [SP,#0x54] \n"
// "		STR	R8, [SP,#0x4C] \n"
// "		LDR	R0, [R6,#0x44] \n"
// "		MOV	R11, #4 \n"
// "		CMP	R0, #3 \n"
// "		STREQ	R11, [R6,#0x44] \n"
// "		LDR	R0, [R6,#0xB4] \n"
// "		MOV	R9, #0 \n"
// "		MOV	R7, #0 \n"
// "		MOV	R5, #1 \n"
// "		BLX	R0 \n"
// "		LDR	R0, [R6,#0x44] \n"
// "		CMP	R0, #6 \n"
// "		BEQ	loc_FF969380 \n"
// "		LDR	R1, [R6,#0xC] \n"
// "		CMP	R1, #2 \n"
// "		BNE	loc_FF9693A0 \n"
// "		CMP	R0, #5 \n"
// "		BEQ	loc_FF969418 \n"
// "loc_FF969380: \n"
// "		LDR	R1, =0x7F2 \n"
// "		MOV	R7, #1 \n"
// //"		ADR	R0, aMovierecorder_ // "MovieRecorder.c" \n"
// "		LDR	R0, =0xFF9688C0 \n"
// "		BL	_DebugAssert \n"
// "		LDR	R0, [R6,#0x44] \n"
// "		CMP	R0, #4 \n"
// "		MOVNE	R5, #0 \n"
// "		B	loc_FF9693A8 \n"
// "loc_FF9693A0: \n"
// "		CMP	R0, #4 \n"
// "		BNE	loc_FF969418 \n"
// "loc_FF9693A8: \n"
// "		LDRH	R0, [R6,#6] \n"
// "		CMP	R0, #1 \n"
// "		LDREQ	R1, =0x809 \n"
// "		LDREQ	R0, =0xFF9688C0 \n" // "MovieRecorder.c"
// "		BLEQ	_DebugAssert \n"
// "		LDRH	R0, [R6,#6] \n"
// "		CMP	R0, #3 \n"
// "		BNE	loc_FF9693DC \n"
// "		LDR	R0, [R6,#0x6C] \n"
// "		LDR	R1, [R6,#0xB8] \n"
// "		BL	sub_FFB4BCC8 \n"
// "		CMP	R1, #0 \n"
// "		MOVNE	R5, #0 \n"
// "loc_FF9693DC: \n"
// "		LDR	R0, [R6,#0x44] \n"
// "		CMP	R0, #6 \n"
// "		CMPNE	R0, #1 \n"
// "		CMPNE	R0, #3 \n"
// "		BNE	loc_FF969420 \n"
// "		CMP	R7, #1 \n"
// "		CMPEQ	R5, #0 \n"
// "		BNE	loc_FF969420 \n"
// "		LDR	R0, [R6,#0x18] \n"
// "		MOV	R1, #0x3E8 \n"
// "		BL	sub_FF839FA8 \n" // eventproc_export_TakeSemaphore
// "		CMP	R0, #9 \n"
// "		BNE	loc_FF969840 \n"
// "		MOV	R0, #0x90000 \n"
// "		BL	sub_FF89428C \n" // eventproc_export_HardwareDefect
// "loc_FF969418: \n"
// "		ADD	SP, SP,	#0x64 \n"
// "		LDMFD	SP!, {R4-R11,PC} \n"
// "loc_FF969420: \n"
// "		CMP	R5, #1 \n"
// "		MOV	R10, #1 \n"
// "		BNE	loc_FF969448 \n"
// "		ADD	R3, SP,	#0x4C \n"
// "		ADD	R2, SP,	#0x50 \n"
// "		ADD	R1, SP,	#0x54 \n"
// "		ADD	R0, SP,	#0x58 \n"
// "		BL	sub_FFAA9B34 \n"
// "		MOVS	R9, R0 \n"
// "		BNE	loc_FF969464 \n"
// "loc_FF969448: \n"
// "		LDR	R0, [R6,#0x34] \n"
// "		CMP	R0, #1 \n"
// "		BNE	loc_FF9695C0 \n"
// "		LDR	R0, [R6,#0x6C] \n"
// "		LDR	R1, [R6,#0x48] \n"
// "		CMP	R0, R1 \n"
// "		BCC	loc_FF9695C0 \n"
// "loc_FF969464: \n"
// "		CMP	R9, #0x80000001 \n"
// "		STREQ	R11, [R6,#0x70] \n"
// "		BEQ	loc_FF96949C \n"
// "		CMP	R9, #0x80000003 \n"
// "		STREQ	R10, [R6,#0x70] \n"
// "		BEQ	loc_FF96949C \n"
// "		CMP	R9, #0x80000005 \n"
// "		MOVEQ	R0, #2 \n"
// "		BEQ	loc_FF969498 \n"
// "		CMP	R9, #0x80000007 \n"
// "		STRNE	R8, [R6,#0x70] \n"
// "		BNE	loc_FF96949C \n"
// "		MOV	R0, #3 \n"
// "loc_FF969498: \n"
// "		STR	R0, [R6,#0x70] \n"
// "loc_FF96949C: \n"
// "		LDR	R0, [R6,#0xC] \n"
// "		CMP	R0, #2 \n"
// "		BNE	loc_FF969504 \n"
// "		MOV	R1, #0 \n"
// //"		ADR	R0, sub_FF969314 \n"
// "		LDR	R0, =0xFF969314 \n"
// "		BL	sub_FFA66B38 \n"
// "		LDR	R2, [R6,#0x64] \n"
// "		ADD	R3, SP,	#0x5C \n"
// "		STRD	R2, [SP,#0x28] \n"
// "		MOV	R2, #0x18 \n"
// "		ADD	R1, SP,	#0x34 \n"
// "		ADD	R0, SP,	#0x10 \n"
// "		BL	sub_FFB4A07C \n"
// "		LDR	R1, [R6,#0x84] \n"
// "		LDR	R2, [R6,#0x88] \n"
// "		MOV	R3, #0xFFFFFFFE \n"
// "		ADD	R0, SP,	#0x60 \n"
// "		STMEA	SP, {R0-R3} \n"
// "		LDR	R0, =0xAC9F8 \n"
// "		MOV	R3, #0 \n"
// "		MOV	R2, #0 \n"
// "		MOV	R1, #0x40 \n"
// "		BL	sub_FFA66A90 \n"
// "		B	loc_FF969558 \n"
// "loc_FF9694FC: \n"
// "		MOV	R1, #1 \n"
// "		B	loc_FF9697CC \n"
// "loc_FF969504: \n"
// "		BL	sub_FF96A1D4 \n"
// "		LDR	R2, [R6,#0x64] \n"
// "		ADD	R3, SP,	#0x5C \n"
// "		MOV	R1, #0xFFFFFFFE \n"
// "		MOV	R0, #0 \n"
// "		ADD	R5, SP,	#0x1C \n"
// "		STMIA	R5, {R0-R3} \n"
// "		LDR	R3, [R4,#0x1C] \n"
// "		LDR	R1, [R6,#0x84] \n"
// "		LDR	R2, [R6,#0x88] \n"
// "		ADD	R4, SP,	#0xC \n"
// "		ADD	R0, SP,	#0x60 \n"
// "		STMIA	R4, {R0-R3} \n"
// "		MOV	R3, #0 \n"
// "		MOV	R1, #0x40 \n"
// "		MOV	R2, #0 \n"
// "		STMEA	SP, {R1-R3} \n"
// "		LDR	R3, =0xAC9F8 \n"
// "		MOV	R1, #0 \n"
// "		MOV	R0, #0 \n"
// "		BL	sub_FFA65900 \n"
// "loc_FF969558: \n"
// "		LDR	R0, [R6,#0x18] \n"
// "		LDR	R1, [R6,#0x60] \n"
// "		BL	sub_FF839FA8 \n" // eventproc_export_TakeSemaphore
// "		CMP	R0, #9 \n"
// "		BEQ	loc_FF9694FC \n"
// "		LDR	R0, [SP,#0x5C] \n"
// "		CMP	R0, #0 \n"
// "		BEQ	loc_FF969580 \n"
// "loc_FF969578: \n"
// "		MOV	R1, #1 \n"
// "		B	loc_FF9697E4 \n"
// "loc_FF969580: \n"
// "		LDR	R0, [R6,#0xC] \n"
// "		MOV	R4, #5 \n"
// "		CMP	R0, #2 \n"
// "		MOV	R0, #1 \n"
// "		BNE	loc_FF9695AC \n"
// "		BL	sub_FFA66AF8 \n"
// "		BL	sub_FFA66B20 \n"
// "		STR	R4, [R6,#0x44] \n"
// "		BL	sub_FF96A1D4 \n"
// "		STR	R10, [R6,#0x44] \n"
// "		B	loc_FF9695B8 \n"
// "loc_FF9695AC: \n"
// "		BL	sub_FFA659B4 \n"
// "		BL	sub_FFA65A14 \n"
// "		STR	R4, [R6,#0x44] \n"
// "loc_FF9695B8: \n"
// "		STR	R8, [R6,#0x34] \n"
// "		B	loc_FF969418 \n"
// "loc_FF9695C0: \n"
// "		CMP	R5, #1 \n"
// "		BNE	loc_FF969840 \n"
// "		STR	R10, [R6,#0x38] \n"
// "		LDR	R0, [R6,#0x6C] \n"
// "		LDR	R11, [R4,#0xC] \n"
// "		CMP	R0, #0 \n"
// "		LDRNE	R9, [SP,#0x58] \n"
// "		LDRNE	R10, [SP,#0x54] \n"
// "		BNE	loc_FF969708 \n"
// "		LDR	R0, [R6,#0xC] \n"
// "		CMP	R0, #2 \n"
// "		BNE	loc_FF969664 \n"
// "		MOV	R1, #0 \n"
// //"		ADR	R0, sub_FF969314 \n"
// "		LDR	R0, =0xFF969314 \n"
// "		BL	sub_FFA66B38 \n"
// "		LDR	R2, [R6,#0x64] \n"
// "		ADD	R3, SP,	#0x5C \n"
// "		STRD	R2, [SP,#0x28] \n"
// "		MOV	R2, #0x18 \n"
// "		ADD	R1, SP,	#0x34 \n"
// "		ADD	R0, SP,	#0x10 \n"
// "		BL	sub_FFB4A07C \n"
// "		LDR	R1, [R6,#0x84] \n"
// "		LDR	R2, [R6,#0x88] \n"
// "		MOV	R3, #0xFFFFFFFF \n"
// "		ADD	R0, SP,	#0x60 \n"
// "		STMEA	SP, {R0-R3} \n"
// "		LDR	R0, [SP,#0x58] \n"
// "		LDR	R1, [SP,#0x54] \n"
// "		LDR	R2, [SP,#0x50] \n"
// "		LDR	R3, [SP,#0x4C] \n"
// "		BL	sub_FFA66A90 \n"
// "		LDR	R0, [R6,#0x18] \n"
// "		LDR	R1, [R6,#0x60] \n"
// "		BL	sub_FF839FA8 \n" // eventproc_export_TakeSemaphore
// "		CMP	R0, #9 \n"
// "		BEQ	loc_FF9694FC \n"
// "		MOV	R1, #0 \n"
// //"		ADR	R0, sub_FF969308 \n"
// "		LDR	R0, =0xFF969314 \n"
// "		BL	sub_FFA66B38 \n"
// "		B	loc_FF9696CC \n"
// "loc_FF969664: \n"
// "		LDR	R0, [R4,#0x20] \n"
// "		LDR	R2, [R6,#0x64] \n"
// "		ADD	R3, SP,	#0x5C \n"
// "		MOV	R1, #0xFFFFFFFF \n"
// "		ADD	R9, SP,	#0x1C \n"
// "		STMIA	R9, {R0-R3} \n"
// "		LDR	R3, [R4,#0x1C] \n"
// "		LDR	R1, [R6,#0x84] \n"
// "		LDR	R2, [R6,#0x88] \n"
// "		ADD	R0, SP,	#0x60 \n"
// "		ADD	R9, SP,	#0xC \n"
// "		STMIA	R9, {R0-R3} \n"
// "		LDR	R1, [SP,#0x50] \n"
// "		LDR	R2, [SP,#0x54] \n"
// "		LDR	R3, [SP,#0x4C] \n"
// "		STMFA	SP, {R1,R3} \n"
// "		STR	R2, [SP] \n"
// "		LDMIB	R4, {R0,R1} \n"
// "		LDR	R3, [SP,#0x58] \n"
// "		MOV	R2, R11 \n"
// "		BL	sub_FFA65900 \n"
// "		LDR	R0, [R6,#0x18] \n"
// "		LDR	R1, [R6,#0x60] \n"
// "		BL	sub_FF839FA8 \n" // eventproc_export_TakeSemaphore
// "		CMP	R0, #9 \n"
// "		BEQ	loc_FF9694FC \n"
// "loc_FF9696CC: \n"
// "		LDR	R0, [SP,#0x5C] \n"
// "		CMP	R0, #0 \n"
// "		BNE	loc_FF969578 \n"
// "		LDR	R0, [R6,#0xC] \n"
// "		CMP	R0, #2 \n"
// "		MOV	R0, #1 \n"
// "		BNE	loc_FF9696F0 \n"
// "		BL	sub_FFA66AF8 \n"
// "		B	loc_FF9696F4 \n"
// "loc_FF9696F0: \n"
// "		BL	sub_FFA659B4 \n"
// "loc_FF9696F4: \n"
// "		LDR	R0, [SP,#0x60] \n"
// "		LDR	R1, [SP,#0x58] \n"
// "		ADD	R9, R1,	R0 \n"
// "		LDR	R1, [SP,#0x54] \n"
// "		SUB	R10, R1, R0 \n"
// "loc_FF969708: \n"
// "		LDR	R0, [R6,#0xC] \n"
// "		LDR	R2, [R6,#0x64] \n"
// "		CMP	R0, #2 \n"
// "		ADD	R3, SP,	#0x5C \n"
// "		BNE	loc_FF96975C \n"
// "		STRD	R2, [SP,#0x28] \n"
// "		MOV	R2, #0x18 \n"
// "		ADD	R1, SP,	#0x34 \n"
// "		ADD	R0, SP,	#0x10 \n"
// "		BL	sub_FFB4A07C \n"
// "		LDR	R1, [R6,#0x84] \n"
// "		LDR	R2, [R6,#0x88] \n"
// "		LDR	R3, [R6,#0x68] \n"
// "		ADD	R0, SP,	#0x60 \n"
// "		STMEA	SP, {R0-R3} \n"
// "		LDR	R2, [SP,#0x50] \n"
// "		LDR	R3, [SP,#0x4C] \n"
// "		MOV	R1, R10 \n"
// "		MOV	R0, R9 \n"
// "		BL	sub_FFA66A90 \n"
// "		B	loc_FF9697B4 \n"
// "loc_FF96975C: \n"
// "		LDR	R1, [R6,#0x68] \n"
// "		LDR	R0, [R4,#0x20] \n"
// "		STR	R1, [SP,#0x20] \n"
// "		STR	R0, [SP,#0x1C] \n"
// "		STR	R2, [SP,#0x24] \n"
// "		STR	R3, [SP,#0x28] \n"
// "		LDR	R3, [R4,#0x1C] \n"
// "		LDR	R1, [R6,#0x84] \n"
// "		LDR	R2, [R6,#0x88] \n"
// "		ADD	R0, SP,	#0x60 \n"
// "		STR	R2, [SP,#0x14] \n"
// "		LDR	R2, [SP,#0x50] \n"
// "		STR	R1, [SP,#0x10] \n"
// "		STR	R3, [SP,#0x18] \n"
// "		LDR	R3, [SP,#0x4C] \n"
// "		STR	R0, [SP,#0xC] \n"
// "		STMFA	SP, {R2,R3} \n"
// "		STR	R10, [SP] \n"
// "		LDMIB	R4, {R0,R1} \n"
// "		MOV	R3, R9 \n"
// "		MOV	R2, R11 \n"
// "		BL	sub_FFA65900 \n"
// "loc_FF9697B4: \n"
// "		LDR	R0, [R6,#0x18] \n"
// "		LDR	R1, [R6,#0x60] \n"
// "		BL	sub_FF839FA8 \n" // eventproc_export_TakeSemaphore
// "		CMP	R0, #9 \n"
// "		BNE	loc_FF9697D4 \n"
// "		MOV	R1, #0 \n"
// "loc_FF9697CC: \n"
// "		MOV	R0, #0x90000 \n"
// "		B	loc_FF9697E8 \n"
// "loc_FF9697D4: \n"
// "		LDR	R0, [SP,#0x5C] \n"
// "		CMP	R0, #0 \n"
// "		BEQ	loc_FF9697F0 \n"
// "		MOV	R1, #0 \n"
// "loc_FF9697E4: \n"
// "		MOV	R0, #0xA0000 \n"
// "loc_FF9697E8: \n"
// "		BL	sub_FF9692A8 \n"
// "		B	loc_FF969418 \n"
// "loc_FF9697F0: \n"
// "		LDR	R0, [R6,#0xC] \n"
// "		CMP	R0, #2 \n"
// "		MOV	R0, #0 \n"
// "		BNE	loc_FF969808 \n"
// "		BL	sub_FFA66AF8 \n"
// "		B	loc_FF96980C \n"
// "loc_FF969808: \n"
// "		BL	sub_FFA659B4 \n"
// "loc_FF96980C: \n"
// "		LDR	R0, [SP,#0x58] \n"
// "		LDR	R1, [SP,#0x60] \n"
// "		BL	sub_FFAA9D6C \n"
// "		LDR	R0, [R6,#0x68] \n"

// "		LDR	R3, =0x6BF0 \n"			// 6BF0
// "		ADD	R1, R0,	#1 \n"
// "		STR	R1, [R6,#0x68] \n"
// "		STR	R3, [SP] \n"
// "		LDR	R0, [R6,#0x64] \n"
// "		SUB	R3, R3,	#4 \n"			// 4
// "		AND	R2, R0,	#0xFF \n"
// "		LDR	R0, [SP,#0x60] \n"
// "		BL	sub_FFAA78BC \n"

// "		LDR	R0, =0x6BEC \n"			// Added (6BF0 - 4)
// "		BL	set_quality \n"			// Added ----------->

// "loc_FF969840: \n"
// "		CMP	R5, #1 \n"
// "		LDRNEH	R0, [R6,#6] \n"
// "		CMPNE	R0, #3 \n"
// "		BNE	loc_FF969418 \n"
// "		LDR	R0, [R6,#0x6C] \n"
// "		ADD	R0, R0,	#1 \n"
// "		STR	R0, [R6,#0x6C] \n"
// "		LDRH	R1, [R6,#6] \n"
// "		CMP	R1, #3 \n"
// "		LDRNE	R1, [R6,#0x54] \n"
// "		LDREQ	R1, =0x3E9 \n"
// "		MUL	R0, R1,	R0 \n"
// "		LDREQ	R1, =0x1770 \n"
// "		LDRNE	R1, [R6,#0x50] \n"
// "		BL	sub_FFB4BCC8 \n"
// "		MOV	R4, R0 \n"
// "		BL	sub_FFAAA0E8 \n"
// "		LDR	R0, [R6,#0x8C] \n"
// "		CMP	R0, R4 \n"
// "		BNE	loc_FF96989C \n"
// "		LDR	R0, [R6,#0x3C] \n"
// "		CMP	R0, #1 \n"
// "		BNE	loc_FF9698B0 \n"
// "loc_FF96989C: \n"
// "		LDR	R1, [R6,#0x98] \n"
// "		MOV	R0, R4 \n"
// "		BLX	R1 \n"
// "		STR	R4, [R6,#0x8C] \n"
// "		STR	R8, [R6,#0x3C] \n"
// "loc_FF9698B0: \n"
// "		STR	R8, [R6,#0x38] \n"
// "		B	loc_FF969418 \n"
	
	// );
// }
