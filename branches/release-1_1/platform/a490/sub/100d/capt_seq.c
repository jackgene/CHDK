#include "lolevel.h"
#include "platform.h"
#include "core.h"
#include "conf.h"

static long *nrflag = (long*)0x57F8;	// ??? ROM:FFD10DA8 "ShutterSoundTask"

#include "../../../generic/capt_seq.c"

// ROM:FFC5914C task_CaptSeqTask()
void __attribute__((naked,noinline)) capt_seq_task() {
	asm volatile (
			"STMFD   SP!, {R3-R7,LR}\n"
			"LDR     R7, =0x33284\n"
			"LDR     R6, =0x26C0\n"
"loc_FFC59158:\n"
			"LDR     R0, [R6,#4]\n"
			"MOV     R2, #0\n"
			"MOV     R1, SP\n"
			"BL      sub_FFC28AA4\n"
			"TST     R0, #1\n"
			"BEQ     loc_FFC59184\n"
			"LDR     R1, =0x5B4\n"
			"LDR     R0, =0xFFC58D58\n"
			"BL      sub_FFC0F680\n"
			"BL      sub_FFC0F438\n"
			"LDMFD   SP!, {R3-R7,PC}\n"
"loc_FFC59184:\n"
			"LDR     R0, [SP]\n"
			"LDR     R1, [R0]\n"
			"CMP     R1, #0x1D\n"
			"ADDLS   PC, PC, R1,LSL#2\n"
			"B	loc_FFC59394 \n"                       
			"B	loc_FFC59210 \n"                       
			"B	loc_FFC59218 \n"                       
			"B	loc_FFC59240 \n"                       
			"B	loc_FFC59254 \n"                       
			"B	loc_FFC5924C \n"                       
			"B	loc_FFC5925C \n"                       
			"B	loc_FFC59264 \n"                       
			"B	loc_FFC59270 \n"                       
			"B	loc_FFC592C8 \n"                       
			"B	loc_FFC59254 \n"                       
			"B	loc_FFC592D0 \n"                       
			"B	loc_FFC592DC \n"                       
			"B	loc_FFC592E4 \n"                       
			"B	loc_FFC592EC \n"                       
			"B	loc_FFC592F4 \n"                       
			"B	loc_FFC592FC \n"                       
			"B	loc_FFC59304 \n"                       
			"B	loc_FFC5930C \n"                       
			"B	loc_FFC59318 \n"                       
			"B	loc_FFC59320 \n"                       
			"B	loc_FFC59328 \n"                       
			"B	loc_FFC59330 \n"                       
			"B	loc_FFC59338 \n"                       
			"B	loc_FFC59344 \n"                       
			"B	loc_FFC5934C \n"                       
			"B	loc_FFC59354 \n"                       
			"B	loc_FFC5935C \n"                       
			"B	loc_FFC59364 \n"                       
			"B	loc_FFC59370 \n"                       
			"B	loc_FFC593A0 \n"                       
"loc_FFC59210:\n"
			"BL	sub_FFC59A24 \n"                      
			"BL      shooting_expo_param_override\n"      // +
			"B	loc_FFC59268 \n"                       
"loc_FFC59218:\n"
			"MOV	R0, #0xC \n"                         
			"BL	sub_FFC5D708 \n"                      
			"TST	R0, #1 \n"                           
			"LDR	R0, [SP] \n"                         
			"MOVNE	R1, #1 \n"                         
			"LDRNE	R2, [R0, #0xC] \n"                 
			"MOVNE	R0, #1 \n"                         
			"BNE	loc_FFC592C0 \n"                     
			"BL	sub_FFC594BC_my \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59240:\n"
			"MOV	R0, #1 \n"                           
			"BL	sub_FFC59CAC \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC5924C:\n"
			"BL	sub_FFC59690 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59254:\n"
			"BL	sub_FFC59A04 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC5925C:\n"
			"BL	sub_FFC59A0C \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59264:\n"
			"BL	sub_FFC59BBC \n"                      
"loc_FFC59268:\n"
			"BL	sub_FFC57464 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59270:\n"
			"LDR	R4, [R0, #0xC] \n"                   
			"BL	sub_FFC59A14 \n"                      
			"MOV	R0, R4 \n"                           
			"BL	sub_FFD0FCAC \n"                      
			"TST	R0, #1 \n"                           
			"MOV	R5, R0 \n"                           
			"BNE	loc_FFC592B0 \n"                     
			"BL	sub_FFC695E4 \n"                      
			"STR	R0, [R4, #0x18] \n"                  
			"MOV	R0, R4 \n"                           
			"BL	sub_FFD10C1C \n"                      
			"MOV	R0, R4 \n"                           
			"BL	sub_FFD10FBC \n"                      
			"MOV	R5, R0 \n"                           
			"LDR	R0, [R4, #0x18] \n"                  
			"BL	sub_FFC6981C \n"                      
"loc_FFC592B0:\n"
			"BL	sub_FFC59A04 \n"                      
			"MOV	R2, R4 \n"                           
			"MOV	R1, #9 \n"                           
			"MOV	R0, R5 \n"                           
"loc_FFC592C0:\n"
			"BL	sub_FFC5785C \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC592C8:\n"
			"BL	sub_FFC59C24 \n"                      
			"B	loc_FFC59268 \n"                       
"loc_FFC592D0:\n"
			"LDR	R0, [R7, #0x4C] \n"                  
			"BL	sub_FFC59FCC \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC592DC:\n"
			"BL	sub_FFC5A27C \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC592E4:\n"
			"BL	sub_FFC5A310 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC592EC:\n"
			"BL	sub_FFD0FED8 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC592F4:\n"
			"BL	sub_FFD100D0 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC592FC:\n"
			"BL	sub_FFD10164 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59304:\n"
			"BL	sub_FFD10224 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC5930C:\n"
			"MOV	R0, #0 \n"                           
			"BL	sub_FFD1041C \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59318:\n"
			"BL	sub_FFD1056C \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59320:\n"
			"BL	sub_FFD105FC \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59328:\n"
			"BL	sub_FFD106BC \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59330:\n"
			"BL	sub_FFC59E08 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59338:\n"
			"BL	sub_FFC59E44 \n"                      
			"BL	sub_FFC26C7C \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59344:\n"
			"BL	sub_FFD102F0 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC5934C:\n"
			"BL	sub_FFD10334 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59354:\n"
			"BL	sub_FFC5BF4C \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC5935C:\n"
			"BL	sub_FFC5BFCC \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59364:\n"
			"BL	sub_FFC5C028 \n"                      
			"BL	sub_FFC5BFE8 \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59370:\n"
			"LDRH	R0, [R7, #0x8C] \n"                 
			"CMP	R0, #4 \n"                           
			"LDRNEH	R0, [R7] \n"                      
			"SUBNE	R12, R0, #0x8200 \n"               
			"SUBNES	R12, R12, #0x2A \n"               
			"BNE	loc_FFC593A0 \n"                     
			"BL	sub_FFC5BFCC \n"                      
			"BL	sub_FFC5C36C \n"                      
			"B	loc_FFC593A0 \n"                       
"loc_FFC59394:\n"
			"LDR	R1, =0x70B \n"                       
			"LDR	R0, =0xFFC58D58 \n"                  
			"BL	sub_FFC0F680 \n" //debugassert                     
"loc_FFC593A0:\n"
			"LDR	R0, [SP] \n"                         
			"LDR	R1, [R0, #4] \n"                     
			"LDR	R0, [R6] \n"                         
			"BL	sub_FFC28814 \n"                      
			"LDR	R4, [SP] \n"                         
			"LDR	R0, [R4, #8] \n"                     
			"CMP	R0, #0 \n"                           
			"LDREQ	R1, =0x132 \n"                     
			"LDREQ	R0, =0xFFC58D58 \n"                
			"BLEQ	sub_FFC0F680 \n"                    
			"MOV	R0, #0 \n"                           
			"STR	R0, [R4, #8] \n"                     
			"B	loc_FFC59158 \n"                       
	);
}

//** was sub_FFC5950C_my in f, now @ 0xFFC594BC
void __attribute__((naked,noinline)) sub_FFC594BC_my(){ //
	asm volatile(
			"STMFD	SP!, {R3-R5,LR} \n"                
			"LDR	R4, [R0, #0xC] \n"                   
			"LDR	R0, [R4, #8] \n"                     
			"ORR	R0, R0, #1 \n"                       
			"STR	R0, [R4, #8] \n"                     
			"BL	sub_FFC59A14 \n"                      
			"MOV	R0, R4 \n"                           
			"BL	sub_FFC59DBC \n"                      
			"MOV	R0, R4 \n"                           
			"BL	sub_FFD0F918 \n"                      
			"CMP	R0, #0 \n"                           
			"MOV	R0, R4 \n"                           
			"BEQ	loc_FFC5950C \n"                     
			"BL	sub_FFD0F9A4 \n"                      
			"TST	R0, #1 \n"                           
			"MOVNE	R2, R4 \n"                         
			"LDMNEFD	SP!, {R3-R5,LR} \n"              
			"MOVNE	R1, #1 \n"                         
			"BNE	sub_FFC5785C \n"                     
			"B	loc_FFC59510 \n"                       
"loc_FFC5950C:\n"
			"BL	sub_FFD0F968 \n"                      
"loc_FFC59510:\n"
			"MOV	R0, #0 \n"                           
			"STR	R0, [SP] \n"                         
			"LDR	R0, =0x33284 \n"                     
			"MOV	R2, #2 \n"                           
			"LDRH	R0, [R0, #0x8A] \n"                 
			"MOV	R1, SP \n"                           
			"CMP	R0, #3 \n"                           
			"LDRNE	R0, [R4, #0xC] \n"                 
			"CMPNE	R0, #1 \n"                         
			"MOVHI	R0, #1 \n"                         
			"STRHI	R0, [SP] \n"                       
			"LDR	R0, =0x127 \n"                       
			"BL	sub_FFC69324 \n"                      
			"BL	sub_FFC695E4 \n"                      
			"STR	R0, [R4, #0x18] \n"                  
			"MOV	R0, R4 \n"                           
			"BL	sub_FFD10C1C \n"                      
			"BL	sub_FFD1163C \n"                      
			"MOV	R0, R4 \n"                           
			"BL	sub_FFD10CE4_my \n"  			//---------->                    
			"MOV	R5, R0 \n"                           
			"BL     capt_seq_hook_raw_here\n"	// +
			"BL	sub_FFC5BFCC \n"                      
			"BL	sub_FFC5C014 \n"                      
			"BL	sub_FFC5C054 \n"                      
			"MOV	R2, R4 \n"                           
			"MOV	R1, #1 \n"                           
			"MOV	R0, R5 \n"                           
			"BL	sub_FFC5785C \n"                      
			"BL	sub_FFD10F70 \n"                      
			"CMP	R0, #0 \n"                           
			"LDRNE	R0, [R4, #8] \n"                   
			"ORRNE	R0, R0, #0x2000 \n"                
			"STRNE	R0, [R4, #8] \n"                   
			"LDMFD	SP!, {R3-R5,PC} \n"                
	);
}



//ROM:FFD10CE4
void __attribute__((naked,noinline)) sub_FFD10CE4_my(){ //
	asm volatile(
			"STMFD	SP!, {R0-R8,LR} \n"                
			"MOV	R4, R0 \n"                           
			"BL	sub_FFD117D0 \n"                      
			"MOV     R1, #0xFFFFFFFF\n"                         
			"BL	sub_FFC28848 \n"                      
			"LDR	R5, =0x57F8 \n"                      
			"LDR	R0, [R5, #0xC] \n"                   
			"CMP	R0, #0 \n"                           
			"BNE	loc_FFD10D34 \n"                     
			"MOV	R1, #1 \n"                           
			"MOV	R0, #0 \n"                           
			"BL	sub_FFC0F4B4 \n"                      
			"STR	R0, [R5, #0xC] \n"                   
			"MOV	R3, #0 \n"                           
			"STR	R3, [SP] \n"                         
			"LDR	R3, =0xFFD107AC \n"                  
			"LDR	R0, =0xFFD10F48 \n"                  
			"MOV	R2, #0x400 \n"                       
			"MOV	R1, #0x17 \n"                        
			"BL	sub_FFC0F480 \n"  // KernelCreateTask                    
"loc_FFD10D34:\n"
			"MOV	R2, #4 \n"                           
			"ADD	R1, SP, #8 \n"                       
			"MOV	R0, #0x8A \n"                        
			"BL	sub_FFC69454 \n"    // PT_GetPropertyCaseString                  
			"TST	R0, #1 \n"                           
			"LDRNE	R1, =0x3B4 \n"   // 0x3BA                  
			"LDRNE	R0, =0xFFD109D8 \n"                
			"BLNE	sub_FFC0F680 \n"     // DebugAssert               
			"LDR	R6, =0x33340 \n"                     
			"LDR	R7, =0x33284 \n"                     
			"LDR	R3, [R6] \n"                         
			"LDRSH	R2, [R6, #0xC] \n"                 
			"LDRSH	R1, [R6, #0xE] \n"                 
			"LDR	R0, [R7, #0x80] \n"                  
			//"BL	sub_FFCE586C \n"   - //	"BL      nullsub_56\n"                  
			"BL	sub_FFC455B0 \n"                      
			"LDR	R3, =0x5800 \n"                      
			"STRH	R0, [R4, #0xA4] \n"                 
			"SUB	R2, R3, #4 \n"                       
			"STRD	R2, [SP] \n"                        
			"MOV	R1, R0 \n"                           
			"LDRH	R0, [R7, #0x54] \n"                 
			"LDRSH	R2, [R6, #0xC] \n"                 
			"SUB	R3, R3, #8 \n"                       
			"BL	sub_FFD11E3C \n"                      
			"BL      wait_until_remote_button_is_released\n"     // +
			"BL      capt_seq_hook_set_nr\n"                     // +
			"B       sub_FFD10D98\n"                             // continue function in firmware			                   
	);
}
/*************************************************************/

// ROM:FFC91338 task_ExpDrvTask
//** exp_drv_task  @ 0xFFC91338 
void __attribute__((naked,noinline)) exp_drv_task(){
	asm volatile(
			"STMFD	SP!, {R4-R8,LR} \n"                
			"SUB	SP, SP, #0x20 \n"                    
			"LDR	R8, =0xBB8 \n"                       
			"LDR	R7, =0x38B4 \n"                      
			"LDR	R5, =0x3C674 \n"                     
			"MOV	R0, #0 \n"                           
			"ADD	R6, SP, #0x10 \n"                    
			"STR	R0, [SP, #0xC] \n"                   
"loc_FFC91358:\n"
			"LDR	R0, [R7, #0x20] \n"                  
			"MOV	R2, #0 \n"                           
			"ADD	R1, SP, #0x1C \n"                    
			"BL	sub_FFC28AA4 \n"                      
			"LDR	R0, [SP, #0xC] \n"                   
			"CMP	R0, #1 \n"                           
			"BNE	loc_FFC913A4 \n"                     
			"LDR	R0, [SP, #0x1C] \n"                  
			"LDR	R0, [R0] \n"                         
			"CMP	R0, #0x13 \n"                        
			"CMPNE	R0, #0x14 \n"                      
			"CMPNE	R0, #0x15 \n"                      
			"CMPNE	R0, #0x16 \n"                      
			"BEQ	loc_FFC91508 \n"                     
			"CMP	R0, #0x28 \n"                        
			"BEQ	loc_FFC91490 \n"                     
			"ADD	R1, SP, #0xC \n"                     
			"MOV	R0, #0 \n"                           
			"BL	sub_FFC912E8 \n"                      
"loc_FFC913A4:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"LDR	R1, [R0] \n"                         
			"CMP	R1, #0x2E \n"                        
			"BNE	loc_FFC913D4 \n"                     
			"LDR	R0, [SP, #0x1C] \n"                  
			"BL	sub_FFC92640 \n"                      
			"LDR	R0, [R7, #0x1C] \n"                  
			"MOV	R1, #1 \n"                           
			"BL	sub_FFC28814 \n"                      
			"BL	sub_FFC0F438 \n"     // ExitTask                 
			"ADD	SP, SP, #0x20 \n"                    
			"LDMFD	SP!, {R4-R8,PC} \n"                
"loc_FFC913D4:\n"
			"CMP	R1, #0x2D \n"                        
			"BNE	loc_FFC913F0 \n"                     
			"LDR	R2, [R0, #0x8C]! \n"                 
			"LDR	R1, [R0, #4] \n"                     
			"MOV	R0, R1 \n"                           
			"BLX	R2 \n"                               
			"B	loc_FFC91930 \n"                       
"loc_FFC913F0:\n"
			"CMP	R1, #0x26 \n"                        
			"BNE	loc_FFC91440 \n"                     
			"LDR	R0, [R7, #0x1C] \n"                  
			"MOV	R1, #0x80 \n"                        
			"BL	sub_FFC28848 \n"                      
			"LDR	R0, =0xFFC8DAB4 \n"                  
			"MOV	R1, #0x80 \n"                        
			"BL	sub_FFD08404 \n"                      
			"LDR	R0, [R7, #0x1C] \n"                  
			"MOV	R2, R8 \n"                           
			"MOV	R1, #0x80 \n"                        
			"BL	sub_FFC28754 \n"                      
			"TST	R0, #1 \n"                           
			"LDRNE	R1, =0xE5F \n"                     
			"BNE	loc_FFC914FC \n"                     
"loc_FFC9142C:\n"
			"LDR	R1, [SP, #0x1C] \n"                  
			"LDR	R0, [R1, #0x90] \n"                  
			"LDR	R1, [R1, #0x8C] \n"                  
			"BLX	R1 \n"                               
			"B	loc_FFC91930 \n"                       
"loc_FFC91440:\n"
			"CMP	R1, #0x27 \n"                        
			"BNE	loc_FFC91488 \n"                     
			"ADD	R1, SP, #0xC \n"                     
			"BL	sub_FFC912E8 \n"                      
			"LDR	R0, [R7, #0x1C] \n"                  
			"MOV	R1, #0x100 \n"                       
			"BL	sub_FFC28848 \n"                      
			"LDR	R0, =0xFFC8DAC4 \n"                  
			"MOV	R1, #0x100 \n"                       
			"BL	sub_FFD0868C \n"                      
			"LDR	R0, [R7, #0x1C] \n"                  
			"MOV	R2, R8 \n"                           
			"MOV	R1, #0x100 \n"                       
			"BL	sub_FFC28754 \n"                      
			"TST	R0, #1 \n"                           
			"BEQ	loc_FFC9142C \n"                     
			"LDR	R1, =0xE69 \n"                       
			"B	loc_FFC914FC \n"                       
"loc_FFC91488:\n"
			"CMP	R1, #0x28 \n"                        
			"BNE	loc_FFC914A0 \n"                     
"loc_FFC91490:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"ADD	R1, SP, #0xC \n"                     
			"BL	sub_FFC912E8 \n"                      
			"B	loc_FFC9142C \n"                       
"loc_FFC914A0:\n"
			"CMP	R1, #0x2B \n"                        
			"BNE	loc_FFC914B8 \n"                     
			"BL	sub_FFC80F70 \n"                      
			"BL	sub_FFC81B98 \n"                      
			"BL	sub_FFC816E8 \n"                      
			"B	loc_FFC9142C \n"                       
"loc_FFC914B8:\n"
			"CMP	R1, #0x2C \n"                        
			"BNE	loc_FFC91508 \n"                     
			"LDR	R0, [R7, #0x1C] \n"                  
			"MOV	R1, #4 \n"                           
			"BL	sub_FFC28848 \n"                      
			"LDR	R1, =0xFFC8DAE4 \n"                  
			"LDR	R0, =0xFFFFF400 \n"                  
			"MOV	R2, #4 \n"                           
			"BL	sub_FFC809EC \n"                      
			"BL	sub_FFC80C74 \n"                      
			"LDR	R0, [R7, #0x1C] \n"                  
			"MOV	R2, R8 \n"                           
			"MOV	R1, #4 \n"                           
			"BL	sub_FFC28670 \n"                      
			"TST	R0, #1 \n"                           
			"BEQ	loc_FFC9142C \n"                     
			"LDR	R1, =0xE91 \n"                       
"loc_FFC914FC:\n"
			"LDR	R0, =0xFFC8E124 \n"                  
			"BL	sub_FFC0F680 \n"                      
			"B	loc_FFC9142C \n"                       
"loc_FFC91508:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"MOV	R4, #1 \n"                           
			"LDR	R1, [R0] \n"                         
			"CMP	R1, #0x11 \n"                        
			"CMPNE	R1, #0x12 \n"                      
			"BNE	loc_FFC91578 \n"                     
			"LDR	R1, [R0, #0x7C] \n"                  
			"ADD	R1, R1, R1, LSL #1 \n"               
			"ADD	R1, R0, R1, LSL #2 \n"               
			"SUB	R1, R1, #8 \n"                       
			"LDMIA	R1, {R2-R4} \n"                    
			"STMIA	R6, {R2-R4} \n"                    
			"BL	sub_FFC8FC74 \n"                      
			"LDR	R0, [SP, #0x1C] \n"                  
			"LDR	R1, [R0, #0x7C] \n"                  
			"LDR	R3, [R0, #0x8C] \n"                  
			"LDR	R2, [R0, #0x90] \n"                  
			"ADD	R0, R0, #4 \n"                       
			"BLX	R3 \n"                               
			"LDR	R0, [SP, #0x1C] \n"                  
			"BL	sub_FFC92A08 \n"                      
			"LDR	R0, [SP, #0x1C] \n"                  
			"LDR	R1, [R0, #0x7C] \n"                  
			"LDR	R3, [R0, #0x94] \n"                  
			"LDR	R2, [R0, #0x98] \n"                  
			"ADD	R0, R0, #4 \n"                       
			"BLX	R3 \n"                               
			"B	loc_FFC91870 \n"                       
"loc_FFC91578:\n"
			"CMP	R1, #0x13 \n"                        
			"CMPNE	R1, #0x14 \n"                      
			"CMPNE	R1, #0x15 \n"                      
			"CMPNE	R1, #0x16 \n"                      
			"BNE	loc_FFC91630 \n"                     
			"ADD	R3, SP, #0xC \n"                     
			"MOV	R2, SP \n"                           
			"ADD	R1, SP, #0x10 \n"                    
			"BL	sub_FFC8FF50 \n"                      
			"CMP	R0, #1 \n"                           
			"MOV	R4, R0 \n"                           
			"CMPNE	R4, #5 \n"                         
			"BNE	loc_FFC915CC \n"                     
			"LDR	R0, [SP, #0x1C] \n"                  
			"MOV	R2, R4 \n"                           
			"LDR	R1, [R0, #0x7C]! \n"                 
			"LDR	R12, [R0, #0x10]! \n"                
			"LDR	R3, [R0, #4] \n"                     
			"MOV	R0, SP \n"                           
			"BLX	R12 \n"                              
			"B	loc_FFC91604 \n"                       
"loc_FFC915CC:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"CMP	R4, #2 \n"                           
			"LDR	R3, [R0, #0x90] \n"                  
			"CMPNE	R4, #6 \n"                         
			"BNE	loc_FFC91618 \n"                     
			"LDR	R12, [R0, #0x8C] \n"                 
			"MOV	R0, SP \n"                           
			"MOV	R2, R4 \n"                           
			"MOV	R1, #1 \n"                           
			"BLX	R12 \n"                              
			"LDR	R0, [SP, #0x1C] \n"                  
			"MOV	R2, SP \n"                           
			"ADD	R1, SP, #0x10 \n"                    
			"BL	sub_FFC90FF0 \n"                      
"loc_FFC91604:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"LDR	R2, [SP, #0xC] \n"                   
			"MOV	R1, R4 \n"                           
			"BL	sub_FFC91288 \n"                      
			"B	loc_FFC91870 \n"                       
"loc_FFC91618:\n"
			"LDR	R1, [R0, #0x7C] \n"                  
			"LDR	R12, [R0, #0x8C] \n"                 
			"ADD	R0, R0, #4 \n"                       
			"MOV	R2, R4 \n"                           
			"BLX	R12 \n"                              
			"B	loc_FFC91870 \n"                       
"loc_FFC91630:\n"
			"CMP	R1, #0x22 \n"                        
			"CMPNE	R1, #0x23 \n"                      
			"BNE	loc_FFC9167C \n"                     
			"LDR	R1, [R0, #0x7C] \n"                  
			"ADD	R1, R1, R1, LSL #1 \n"               
			"ADD	R1, R0, R1, LSL #2 \n"               
			"SUB	R1, R1, #8 \n"                       
			"LDMIA	R1, {R2-R4} \n"                    
			"STMIA	R6, {R2-R4} \n"                    
			"BL	sub_FFC8F1C4 \n"                      
			"LDR	R0, [SP, #0x1C] \n"                  
			"LDR	R1, [R0, #0x7C] \n"                  
			"LDR	R3, [R0, #0x8C] \n"                  
			"LDR	R2, [R0, #0x90] \n"                  
			"ADD	R0, R0, #4 \n"                       
			"BLX	R3 \n"                               
			"LDR	R0, [SP, #0x1C] \n"                  
			"BL	sub_FFC8F4B8 \n"                      
			"B	loc_FFC91870 \n"                       
"loc_FFC9167C:\n"
			"ADD	R1, R0, #4 \n"                       
			"LDMIA	R1, {R2,R3,R12} \n"                
			"STMIA	R6, {R2,R3,R12} \n"                
			"LDR	R1, [R0] \n"                         
			"CMP	R1, #0x25 \n"                        
			"ADDLS	PC, PC, R1, LSL #2 \n"             
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91730 \n"                       
			"B	loc_FFC91730 \n"                       
			"B	loc_FFC91738 \n"                       
			"B	loc_FFC91740 \n"                       
			"B	loc_FFC91740 \n"                       
			"B	loc_FFC91740 \n"                       
			"B	loc_FFC91730 \n"                       
			"B	loc_FFC91738 \n"                       
			"B	loc_FFC91740 \n"                       
			"B	loc_FFC91740 \n"                       
			"B	loc_FFC91758 \n"                       
			"B	loc_FFC91758 \n"                       
			"B	loc_FFC91844 \n"                       
			"B	loc_FFC9184C \n"                       
			"B	loc_FFC9184C \n"                       
			"B	loc_FFC9184C \n"                       
			"B	loc_FFC9184C \n"                       
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91748 \n"                       
			"B	loc_FFC91750 \n"                       
			"B	loc_FFC91750 \n"                       
			"B	loc_FFC91764 \n"                       
			"B	loc_FFC91764 \n"                       
			"B	loc_FFC9176C \n"                       
			"B	loc_FFC9179C \n"                       
			"B	loc_FFC917CC \n"                       
			"B	loc_FFC917FC \n"                       
			"B	loc_FFC9182C \n"                       
			"B	loc_FFC9182C \n"                       
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91850 \n"                       
			"B	loc_FFC91834 \n"                       
			"B	loc_FFC9183C \n"                       
"loc_FFC91730:\n"
			"BL	sub_FFC8DFCC \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC91738:\n"
			"BL	sub_FFC8E250 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC91740:\n"
			"BL	sub_FFC8E458 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC91748:\n"
			"BL	sub_FFC8E6D0 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC91750:\n"
			"BL	sub_FFC8E8C8 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC91758:\n"
			"BL	sub_FFC8EB84_my \n"                      
			"MOV	R4, #0 \n"                           
			"B	loc_FFC91850 \n"                       
"loc_FFC91764:\n"
			"BL	sub_FFC8ECC4 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC9176C:\n"
			"LDRH	R1, [R0, #4] \n"                    
			"STRH	R1, [SP, #0x10] \n"                 
			"LDRH	R1, [R5, #2] \n"                    
			"STRH	R1, [SP, #0x12] \n"                 
			"LDRH	R1, [R5, #4] \n"                    
			"STRH	R1, [SP, #0x14] \n"                 
			"LDRH	R1, [R5, #6] \n"                    
			"STRH	R1, [SP, #0x16] \n"                 
			"LDRH	R1, [R0, #0xC] \n"                  
			"STRH	R1, [SP, #0x18] \n"                 
			"BL	sub_FFC926B4 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC9179C:\n"
			"LDRH	R1, [R0, #4] \n"                    
			"STRH	R1, [SP, #0x10] \n"                 
			"LDRH	R1, [R5, #2] \n"                    
			"STRH	R1, [SP, #0x12] \n"                 
			"LDRH	R1, [R5, #4] \n"                    
			"STRH	R1, [SP, #0x14] \n"                 
			"LDRH	R1, [R5, #6] \n"                    
			"STRH	R1, [SP, #0x16] \n"                 
			"LDRH	R1, [R5, #8] \n"                    
			"STRH	R1, [SP, #0x18] \n"                 
			"BL	sub_FFC92820 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC917CC:\n"
			"LDRH	R1, [R5] \n"                        
			"STRH	R1, [SP, #0x10] \n"                 
			"LDRH	R1, [R0, #6] \n"                    
			"STRH	R1, [SP, #0x12] \n"                 
			"LDRH	R1, [R5, #4] \n"                    
			"STRH	R1, [SP, #0x14] \n"                 
			"LDRH	R1, [R5, #6] \n"                    
			"STRH	R1, [SP, #0x16] \n"                 
			"LDRH	R1, [R5, #8] \n"                    
			"STRH	R1, [SP, #0x18] \n"                 
			"BL	sub_FFC928CC \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC917FC:\n"
			"LDRH	R1, [R5] \n"                        
			"STRH	R1, [SP, #0x10] \n"                 
			"LDRH	R1, [R5, #2] \n"                    
			"STRH	R1, [SP, #0x12] \n"                 
			"LDRH	R1, [R5, #4] \n"                    
			"STRH	R1, [SP, #0x14] \n"                 
			"LDRH	R1, [R5, #6] \n"                    
			"STRH	R1, [SP, #0x16] \n"                 
			"LDRH	R1, [R0, #0xC] \n"                  
			"STRH	R1, [SP, #0x18] \n"                 
			"BL	sub_FFC9296C \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC9182C:\n"
			"BL	sub_FFC8F01C \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC91834:\n"
			"BL	sub_FFC8F5BC \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC9183C:\n"
			"BL	sub_FFC8F7F8 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC91844:\n"
			"BL	sub_FFC8F974 \n"                      
			"B	loc_FFC91850 \n"                       
"loc_FFC9184C:\n"
			"BL	sub_FFC8FB10 \n"                      
"loc_FFC91850:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"LDR	R1, [R0, #0x7C] \n"                  
			"LDR	R3, [R0, #0x8C] \n"                  
			"LDR	R2, [R0, #0x90] \n"                  
			"ADD	R0, R0, #4 \n"                       
			"BLX	R3 \n"                               
			"CMP	R4, #1 \n"                           
			"BNE	loc_FFC918B8 \n"                     
"loc_FFC91870:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"MOV	R2, #0xC \n"                         
			"LDR	R1, [R0, #0x7C] \n"                  
			"ADD	R1, R1, R1, LSL #1 \n"               
			"ADD	R0, R0, R1, LSL #2 \n"               
			"SUB	R4, R0, #8 \n"                       
			"LDR	R0, =0x3C674 \n"                     
			"ADD	R1, SP, #0x10 \n"                    
			"BL	sub_FFE7DFA0 \n"                      
			"LDR	R0, =0x3C680 \n"                     
			"MOV	R2, #0xC \n"                         
			"ADD	R1, SP, #0x10 \n"                    
			"BL	sub_FFE7DFA0 \n"                      
			"LDR	R0, =0x3C68C \n"                     
			"MOV	R2, #0xC \n"                         
			"MOV	R1, R4 \n"                           
			"BL	sub_FFE7DFA0 \n"                      
			"B	loc_FFC91930 \n"                       
"loc_FFC918B8:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"LDR	R0, [R0] \n"                         
			"CMP	R0, #0xB \n"                         
			"BNE	loc_FFC91900 \n"                     
			"MOV	R3, #0 \n"                           
			"STR	R3, [SP] \n"                         
			"MOV	R3, #1 \n"                           
			"MOV	R2, #1 \n"                           
			"MOV	R1, #1 \n"                           
			"MOV	R0, #0 \n"                           
			"BL	sub_FFC8DDD4 \n"                      
			"MOV	R3, #0 \n"                           
			"STR	R3, [SP] \n"                         
			"MOV	R3, #1 \n"                           
			"MOV	R2, #1 \n"                           
			"MOV	R1, #1 \n"                           
			"MOV	R0, #0 \n"                           
			"B	loc_FFC9192C \n"                       
"loc_FFC91900:\n"
			"MOV	R3, #1 \n"                           
			"MOV	R2, #1 \n"                           
			"MOV	R1, #1 \n"                           
			"MOV	R0, #1 \n"                           
			"STR	R3, [SP] \n"                         
			"BL	sub_FFC8DDD4 \n"                      
			"MOV	R3, #1 \n"                           
			"MOV	R2, #1 \n"                           
			"MOV	R1, #1 \n"                           
			"MOV	R0, #1 \n"                           
			"STR	R3, [SP] \n"                         
"loc_FFC9192C:\n"
			"BL	sub_FFC8DF14 \n"                      
"loc_FFC91930:\n"
			"LDR	R0, [SP, #0x1C] \n"                  
			"BL	sub_FFC92640 \n"                      
			"B	loc_FFC91358 \n"                       
	);
}

//** was sub_FFC8EBD4_my in f version
void __attribute__((naked,noinline)) sub_FFC8EB84_my(  ) { 
asm volatile (
"	STMFD	SP!, {R4-R8,LR} \n"                
"	LDR	R7, =0x38B4 \n"                      
"	MOV	R4, R0 \n"                           
"	LDR	R0, [R7, #0x1C] \n"                  
"	MOV	R1, #0x3E \n"                        
"	BL	sub_FFC28848 \n"                      
"	LDRSH	R0, [R4, #4] \n"                   
"	MOV	R2, #0 \n"                           
"	MOV	R1, #0 \n"                           
"	BL	sub_FFC8DB38 \n"                      
"	MOV	R6, R0 \n"                           
"	LDRSH	R0, [R4, #6] \n"                   
"	BL	sub_FFC8DC48 \n"                      
"	LDRSH	R0, [R4, #8] \n"                   
"	BL	sub_FFC8DCA0 \n"                      
"	LDRSH	R0, [R4, #0xA] \n"                 
"	BL	sub_FFC8DCF8 \n"                      
"	LDRSH	R0, [R4, #0xC] \n"                 
"	MOV	R1, #0 \n"                           
"	BL	sub_FFC8DD50 \n"                      
"	MOV	R5, R0 \n"                           
"	LDR	R0, [R4] \n"                         
"	LDR	R8, =0x3C68C \n"                     
"	CMP	R0, #0xB \n"                         
"	MOVEQ	R6, #0 \n"                         
"	MOVEQ	R5, #0 \n"                         
"	BEQ	loc_FFC8EC18 \n"                     
"	CMP	R6, #1 \n"                           
"	BNE	loc_FFC8EC18 \n"                     
"	LDRSH	R0, [R4, #4] \n"                   
"	LDR	R1, =0xFFC8DAA4 \n"                  
"	MOV	R2, #2 \n"                           
"	BL	sub_FFD08558 \n"                      
"	STRH	R0, [R4, #4] \n"                    
"	MOV	R0, #0 \n"                           
"	STR	R0, [R7, #0x28] \n"                  
"	B	loc_FFC8EC20 \n"                       
"loc_FFC8EC18:\n"
"	LDRH	R0, [R8] \n"                        
"	STRH	R0, [R4, #4] \n"                    
"loc_FFC8EC20:\n"
"	CMP	R5, #1 \n"                           
"	LDRNEH	R0, [R8, #8] \n"                  
"	BNE	loc_FFC8EC3C \n"                     
"	LDRSH	R0, [R4, #0xC] \n"                 
"	LDR	R1, =0xFFC8DB28 \n"                  
"	MOV	R2, #0x20 \n"                        
"	BL	sub_FFC92670 \n"                      
"loc_FFC8EC3C:\n"
"	STRH	R0, [R4, #0xC] \n"                  
"	LDRSH	R0, [R4, #6] \n"                   
"	BL	sub_FFC80CE0_my \n"                      
"	LDRSH	R0, [R4, #8] \n"                   
"	MOV	R1, #1 \n"                           
"	BL	sub_FFC81430 \n"                      
"	MOV	R1, #0 \n"                           
"	ADD	R0, R4, #8 \n"                       
"	BL	sub_FFC814B8 \n"                      
"	LDRSH	R0, [R4, #0xE] \n"                 
"	BL	sub_FFC88E5C \n"                      
"	LDR	R4, =0xBB8 \n"                       
"	CMP	R6, #1 \n"                           
"	BNE	loc_FFC8EC94 \n"                     
"	LDR	R0, [R7, #0x1C] \n"                  
"	MOV	R2, R4 \n"                           
"	MOV	R1, #2 \n"                           
"	BL	sub_FFC28754 \n"                      
"	TST	R0, #1 \n"                           
"	LDRNE	R1, =0x5A3 \n"                     
"	LDRNE	R0, =0xFFC8E124 \n"                
"	BLNE	sub_FFC0F680 \n"                    
"loc_FFC8EC94:\n"
"	CMP	R5, #1 \n"                           
"	LDMNEFD	SP!, {R4-R8,PC} \n"              
"	LDR	R0, [R7, #0x1C] \n"                  
"	MOV	R2, R4 \n"                           
"	MOV	R1, #0x20 \n"                        
"	BL	sub_FFC28754 \n"                      
"	TST	R0, #1 \n"                           
"	LDRNE	R1, =0x5A8 \n"                     
"	LDRNE	R0, =0xFFC8E124 \n"                
"	LDMNEFD	SP!, {R4-R8,LR} \n"              
"	BNE	sub_FFC0F680 \n"                     
"	LDMFD	SP!, {R4-R8,PC} \n"                
	);
}


//** was sub_FFC80D30_my  now @ 0xFFC80CE0 
void __attribute__((naked,noinline)) sub_FFC80CE0_my(){ //
	asm volatile(
			"STMFD   SP!, {R4-R6,LR}\n"
			"LDR     R5, =0x35A8\n"
			"MOV     R4, R0\n"
			"LDR     R0, [R5,#4]\n"
			"CMP     R0, #1\n"
			"LDRNE   R1, =0x146\n"
			"LDRNE   R0, =0xFFC80AE4\n"
			"BLNE    sub_FFC0F680\n"
			"CMN     R4, #0xC00\n"
			"LDREQSH R4, [R5,#2]\n"
			"CMN     R4, #0xC00\n"
			"MOVEQ   R1, #0x14C\n"
			"LDREQ   R0, =0xFFC80AE4\n"
			"STRH    R4, [R5,#2]\n"
			"BLEQ    sub_FFC0F680\n"
			"MOV     R0, R4\n"
		//  "BL      _sub_FFD7C2EC\n			"	// -
			"BL      apex2us\n			"			// +
			"MOV     R4, R0\n"
		//	"BL      sub_FFCB37B8\n"
			"MOV     R0, R4\n"
			"BL      sub_FFCB7E48\n"
			"TST     R0, #1\n"
			"LDRNE   R1, =0x151\n"
			"LDMNEFD SP!, {R4-R6,LR}\n"
			"LDRNE   R0, =0xFFC80AE4\n"
			"BNE     sub_FFC0F680\n"
			"LDMFD   SP!, {R4-R6,PC}\n"
	);
}










