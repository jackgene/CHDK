#include "conf.h"

int *video_quality = &conf.video_quality;
int *video_mode    = &conf.video_mode;

long def_table1[15]={0x20000,0x10000,0xC000,0x5800,0x2000, 0x387A, 0x1C6A, 0x1550, 0x9C5, 0x38D, 0x7813, 0x3C45, 0x2D34, 0x14B8,0x788};
long def_table2[15]={0x1CC39,0xE666, 0xACCD,0x4F33,0x1CCD,-0x2F5B,-0x170A,-0x1148,-0x7EB,-0x2E1,-0x59F0,-0x2BC6,-0x20D5,-0xF0C,-0x579};

long table1[15], table2[15];

void change_video_tables(int a, int b){
 int i;
 for (i=0;i<15;i++) {table1[i]=(def_table1[i]*a)/b; table2[i]=(def_table2[i]*a)/b;}
}

long CompressionRateTable[]={0x60, 0x5D, 0x5A, 0x57, 0x54, 0x51, 0x4D, 0x48, 0x42, 0x3B, 0x32, 0x29, 0x22, 0x1D, 0x17, 0x14, 0x10, 0xE, 0xB, 9, 7, 6, 5, 4, 3, 2, 1};


void __attribute__((naked,noinline)) movie_record_task(){
 asm volatile(
                "STMFD   SP!, {R4,LR}\n"              
                "SUB     SP, SP, #4\n"                
                "MOV     R4, SP\n"                    
                "B       loc_FFD2C13C\n"              
"loc_FFD2C08C:\n"                                      
                "LDR     R3, =0x73618\n"              
                "LDR     R2, [R3]\n"                  
                "CMP     R2, #0\n"                    
                "BNE     loc_FFD2C128\n"              
                "SUB     R3, R12, #1\n"               
                "CMP     R3, #0xA\n"                  
                "LDRLS   PC, [PC,R3,LSL#2]\n"         
                "B       loc_FFD2C128\n"              
                ".long loc_FFD2C0D8\n"
                ".long loc_FFD2C0E0\n"
                ".long loc_FFD2C0F8\n"
                ".long loc_FFD2C100\n"
                ".long loc_FFD2C108\n"
                ".long loc_FFD2C0E8\n"
                ".long loc_FFD2C110\n"
                ".long loc_FFD2C0F0\n"
                ".long loc_FFD2C128\n"
                ".long loc_FFD2C120\n"
                ".long loc_FFD2C118\n"
"loc_FFD2C0D8:\n"                                      
                                                  
                "BL      sub_FFD2C1BC\n"              
                "B       loc_FFD2C124\n"              
"loc_FFD2C0E0:\n"
        
                "BL      unlock_optical_zoom\n"                                  
                "BL      sub_FFD2C3F0\n" 
                "B       loc_FFD2C124\n"              
"loc_FFD2C0E8:\n"                                      
                                                  
                "BL      sub_FFD2C880_my\n"    //------------------>          
                "B       loc_FFD2C124\n"              
"loc_FFD2C0F0:\n"                                      
                                                  
                "BL      sub_FFD2CCD4\n"              
                "B       loc_FFD2C124\n"              
"loc_FFD2C0F8:\n"                                      
                                                  
                "BL      sub_FFD2CAF8\n"              
                "B       loc_FFD2C124\n"              
"loc_FFD2C100:\n"                                      
                                                  
                "BL      sub_FFD2CEE0\n"              
                "B       loc_FFD2C124\n"              
"loc_FFD2C108:\n"                                      
                                                  
                "BL      sub_FFD2D0A4\n"              
                "B       loc_FFD2C124\n"              
"loc_FFD2C110:\n"                                      
                                                  
                "BL      sub_FFD2CD94\n"              
                "B       loc_FFD2C124\n"              
"loc_FFD2C118:\n"                                      
                                                  
                "BL      sub_FFD2CE74\n"              
                "B       loc_FFD2C124\n"              
"loc_FFD2C120:\n"                                      
                                                  
                "BL      sub_FFD2CB48\n"              
"loc_FFD2C124:\n"                                      
                                                  
                "LDR     R1, [SP]\n"                  
"loc_FFD2C128:\n"                                      
                                                  
                "LDR     R3, =0x73548\n"              
                "MOV     R2, #0\n"                    
                "STR     R2, [R1]\n"                  
                "LDR     R0, [R3]\n"                  
                "BL      sub_FFC1048C\n"          
"loc_FFD2C13C:\n"                                      
                "LDR     R3, =0x73544\n"              
                "MOV     R1, R4\n"                    
                "LDR     R0, [R3]\n"                  
                "MOV     R2, #0\n"                    
                "BL      sub_FFC10074\n"       
                "LDR     R0, [SP]\n"                  
                "LDR     R12, [R0]\n"                 
                "CMP     R12, #0xC\n"                 
                "MOV     R1, R0\n"                    
                "BNE     loc_FFD2C08C\n"              
                "LDR     R3, =0x7353C\n"              
                "LDR     R0, [R3]\n"                  
                "BL      sub_FFC10E48\n"             
                "BL      sub_FFC11610\n"                  
                "ADD     SP, SP, #4\n"                
                "LDMFD   SP!, {R4,PC}\n"              
 );
}


void __attribute__((naked,noinline)) sub_FFD2C880_my(){
 asm volatile(
                "STMFD   SP!, {R4-R11,LR}\n"          
                "LDR     R5, =0x73634\n"              
                "SUB     SP, SP, #0x34\n"             
                "LDR     R3, [R5]\n"                  
                "CMP     R3, #3\n"                    
                "MOV     R4, R0\n"                    
                "MOVEQ   R3, #4\n"                    
                "STREQ   R3, [R5]\n"                  
                "LDR     R3, =0x736DC\n"              
                "MOV     LR, PC\n"                    
                "LDR     PC, [R3]\n"                  
                "LDR     R2, [R5]\n"                  
                "CMP     R2, #4\n"                    
                "BNE     loc_FFD2CA2C\n"              
                "ADD     R0, SP, #0x30\n"             
                "ADD     R1, SP, #0x2C\n"             
                "ADD     R2, SP, #0x28\n"             
                "ADD     R3, SP, #0x24\n"             
                "BL      sub_FFD2E040_my\n"    //---------------------->         
                "CMP     R0, #0\n"                    
                "BNE     loc_FFD2C8FC\n"              
                "LDR     R3, =0x73620\n"              
                "LDR     R2, [R3]\n"                  
                "CMP     R2, #1\n"                    
                "BNE     loc_FFD2C910\n"              
                "LDR     R2, =0x73670\n"              
                "LDR     R1, =0x73648\n"              
                "LDR     R12, [R2]\n"                 
                "LDR     R3, [R1]\n"                  
                "CMP     R12, R3\n"                   
                "BCC     loc_FFD2C910\n"              
"loc_FFD2C8FC:\n"                                     
                "BL      sub_FFD2CA70\n"              
                "BL      sub_FFD2CCA4\n"              
                "MOV     R3, #5\n"                    
                "STR     R3, [R5]\n"                  
                "B       loc_FFD2CA2C\n"              
"loc_FFD2C910:\n"                                     
                                                  
                "LDR     R12, =0x73678\n"             
                "LDR     R11, =0x73684\n"             
                "LDMIB   R4, {R0-R2}\n"               
                "LDR     R10, [R12]\n"                
                "LDR     R7, [R11]\n"                 
                "LDR     R4, [SP,#0x2C]\n"            
                "LDR     R5, [SP,#0x28]\n"            
                "LDR     R6, [SP,#0x24]\n"            
                "LDR     R8, =0x73624\n"              
                "LDR     R3, [SP,#0x30]\n"            
                "ADD     R12, SP, #0x20\n"            
                "ADD     LR, SP, #0x1C\n"             
                "MOV     R9, #1\n"                    
                "STMEA   SP, {R4-R6,R12}\n"           
                "STR     R10, [SP,#0x10]\n"           
                "STR     R7, [SP,#0x14]\n"            
                "STR     LR, [SP,#0x18]\n"            
                "STR     R9, [R8]\n"                  
                "BL      sub_FFC83E68\n"              
                "LDR     R3, =0x7353C\n"              
                "MOV     R1, #0x3E8\n"                
                "LDR     R0, [R3]\n"                  
                "BL      sub_FFC10C60\n"             
                "CMP     R0, #9\n"                    
                "BNE     loc_FFD2C984\n"              
                "BL      sub_FFD2E800\n"              
                "LDR     R3, =0x73634\n"              
                "LDR     R0, =0xFFD2C868\n"       
                "B       loc_FFD2C99C\n"              
"loc_FFD2C984:\n"                                     
                "LDR     R5, [SP,#0x1C]\n"            
                "CMP     R5, #0\n"                    
                "BEQ     loc_FFD2C9A8\n"              
                "BL      sub_FFD2E800\n"              
                "LDR     R3, =0x73634\n"              
                "LDR     R0, =0xFFD2C874\n"       
"loc_FFD2C99C:\n"                                     
                "STR     R9, [R3]\n"                  
                "BL      sub_FFD41110\n"              
                "B       loc_FFD2CA2C\n"              
"loc_FFD2C9A8:\n"                                     
                "BL      sub_FFC83FDC\n"              
                "LDR     R0, [SP,#0x30]\n"            
                "LDR     R1, [SP,#0x20]\n"            
                "BL      sub_FFD2E524\n"              
                "LDR     R4, =0x73670\n"              
                "LDR     R3, [R4]\n"                  
                "ADD     R3, R3, #1\n"                
                "LDR     R0, [SP,#0x20]\n"            
                "MOV     R1, R11\n"                   
                "STR     R3, [R4]\n"                  
                "MOV     R2, R5\n"                    
                "BL      sub_FFD2D408_my\n"   //------------------------->           
                "LDR     R3, =0x7365C\n"              
                "LDR     R4, [R4]\n"                  
                "LDR     R1, [R3]\n"                  
                "MOV     R0, R4\n"                    
                "BL      sub_FFEB1F38\n"              
                "CMP     R0, #0\n"                    
                "BEQ     loc_FFD2CA08\n"              
                "LDR     R6, =0x73628\n"              
                "LDR     R3, [R6]\n"                  
                "CMP     R3, #1\n"                    
                "BNE     loc_FFD2CA20\n"              
                "B       loc_FFD2CA0C\n"              
"loc_FFD2CA08:\n"                                     
                "LDR     R6, =0x73628\n"              
"loc_FFD2CA0C:\n"                                     
                "MOV     R0, R4\n"                    
                "LDR     R3, =0x736B8\n"              
                "MOV     LR, PC\n"                    
                "LDR     PC, [R3]\n"                  
                "STR     R5, [R6]\n"                  
"loc_FFD2CA20:\n"                                     
                "LDR     R2, =0x73624\n"              
                "MOV     R3, #0\n"                    
                "STR     R3, [R2]\n"                  
"loc_FFD2CA2C:\n"                                     
                                                  
                "ADD     SP, SP, #0x34\n"             
                "LDMFD   SP!, {R4-R11,PC}\n"          

 );
}


void __attribute__((naked,noinline)) sub_FFD2E040_my(){
 asm volatile(
                "STMFD   SP!, {R4-R11,LR}\n"          
                "LDR     R5, =0x73984\n"              
                "SUB     SP, SP, #0x14\n"             
                "LDR     LR, [R5]\n"                  
                "LDR     R12, =0x7399C\n"             
                "ADD     LR, LR, #1\n"                
                "LDR     R4, [R12]\n"                 
                "STR     LR, [R5]\n"                  
                "LDR     R12, =0x73A18\n"             
                "STR     R0, [SP,#0x10]\n"            
                "STR     R1, [SP,#0xC]\n"             
                "STR     R2, [SP,#8]\n"               
                "STR     R3, [SP,#4]\n"               
                "CMP     LR, R4\n"                    
                "LDR     R11, [R12]\n"                
                "MOVHI   R0, #0x80000001\n"           
                "BHI     loc_FFD2E4D8\n"              
                "LDR     R3, =0x73A00\n"              
                "MOV     R0, LR\n"                    
                "LDR     R1, [R3]\n"                  
                "BL      sub_FFEB1F38\n"              
                "CMP     R0, #1\n"                    
                "BNE     loc_FFD2E260\n"              
                "LDR     R0, =0x73A20\n"              
                "LDR     R1, =0x73970\n"              
                "LDR     R3, [R0]\n"                  
                "LDR     R2, [R1]\n"                  
                "CMP     R3, R2\n"                    
                "LDREQ   R3, =0x73A1C\n"              
                "LDREQ   R5, [R3]\n"                  
                "MOVNE   R5, R2\n"                    
                "LDR     R3, =0x73984\n"              
                "LDR     R2, =0x73A00\n"              
                "LDR     R0, [R3]\n"                  
                "LDR     R1, [R2]\n"                  
                "BL      sub_FFEB18A8\n"                 
                "LDR     R3, =0x73978\n"              
                "ADD     R0, R0, #1\n"                
                "AND     R0, R0, #1\n"                
                "STR     R5, [R3,R0,LSL#2]\n"         
                "LDR     R3, =0x7396C\n"              
                "LDR     R2, [R3]\n"                  
                "CMP     R5, R2\n"                    
                "BHI     loc_FFD2E110\n"              
                "LDR     R4, =0x739BC\n"              
                "LDR     R3, [R4]\n"                  
                "ADD     R3, R5, R3\n"                
                "ADD     R3, R3, #8\n"                
                "CMP     R2, R3\n"                    
                "BCS     loc_FFD2E114\n"              
"loc_FFD2E108:\n"                                     
                                                  
                "MOV     R0, #0x80000003\n"           
                "B       loc_FFD2E4D8\n"              
"loc_FFD2E110:\n"                                     
                "LDR     R4, =0x739BC\n"              
"loc_FFD2E114:\n"                                     
                "LDR     R3, [R4]\n"                  
                "LDR     R2, =0x73A20\n"              
                "ADD     R1, R5, R3\n"                
                "LDR     R3, [R2]\n"                  
                "ADD     R2, R1, #8\n"                
                "CMP     R2, R3\n"                    
                "BLS     loc_FFD2E160\n"              
                "LDR     R2, =0x73A1C\n"              
                "LDR     R0, =0x7396C\n"              
                "RSB     R3, R3, R1\n"                
                "LDR     R1, [R2]\n"                  
                "ADD     R3, R3, #8\n"                
                "LDR     R2, [R0]\n"                  
                "ADD     R1, R1, R3\n"                
                "CMP     R2, R1\n"                    
                "BCC     loc_FFD2E108\n"              
                "LDR     R3, =0x73970\n"              
                "STR     R1, [R3]\n"                  
                "B       loc_FFD2E168\n"              
"loc_FFD2E160:\n"                                     
                "LDR     R3, =0x73970\n"              
                "STR     R2, [R3]\n"                  
"loc_FFD2E168:\n"                                     
                "LDR     R3, [R4]\n"                  
                "LDR     R12, =0x739D0\n"             
                "ADD     R3, R3, #0x18\n"             
                "LDR     R2, [R12,#4]\n"              
                "MOV     R0, R3\n"                    
                "MOV     R1, #0\n"                    
                "CMP     R1, R2\n"                    
                "BHI     loc_FFD2E3AC\n"              
                "BNE     loc_FFD2E198\n"              
                "LDR     R3, [R12]\n"                 
                "CMP     R0, R3\n"                    
                "BHI     loc_FFD2E3AC\n"              
"loc_FFD2E198:\n"                                     
                "LDR     R4, [R4]\n"                  
                "LDR     LR, =0x739D8\n"              
                "STR     R4, [SP]\n"                  
                "LDR     R12, =0x739D0\n"             
                "LDR     R3, =0x73984\n"              
                "LDMIA   LR, {R7,R8}\n"               
                "LDMIA   R12, {R5,R6}\n"              
                "LDR     R10, [R3]\n"                 
                "LDR     R2, =0x73A00\n"              
                "MOV     R3, R4\n"                    
                "MOV     R4, #0\n"                    
                "ADDS    R7, R7, R3\n"                
                "ADC     R8, R8, R4\n"                
                "LDR     R9, [R2]\n"                  
                "SUBS    R5, R5, R3\n"                
                "SBC     R6, R6, R4\n"                
                "MVN     R2, #0\n"                    
                "MVN     R1, #0x17\n"                 
                "ADDS    R5, R5, R1\n"                
                "MOV     R4, #0\n"                    
                "MOV     R3, #0x18\n"                 
                "ADC     R6, R6, R2\n"                
                "ADDS    R7, R7, R3\n"                
                "ADC     R8, R8, R4\n"                
                "STMIA   R12, {R5,R6}\n"              
                "SUB     R0, R10, #1\n"               
                "MOV     R1, R9\n"                    
                "STMIA   LR, {R7,R8}\n"               
                "BL      sub_FFEB18A8\n"                 
                "CMP     R10, #1\n"                   
                "MLA     R0, R9, R0, R0\n"            
                "BEQ     loc_FFD2E260\n"              
                "SUB     R3, R0, #1\n"                
                "MOV     R3, R3,LSL#4\n"              
                "ADD     R4, R11, #0x10\n"            
                "ADD     R5, R11, #0x14\n"            
                "LDR     R1, [R5,R3]\n"               
                "LDR     R2, [R4,R3]\n"               
                "LDR     LR, =0x62773130\n"           
                "ADD     R2, R2, R1\n"                
                "MOV     R3, R0,LSL#4\n"              
                "ADD     R2, R2, #8\n"                
                "MOV     R0, #0\n"                    
                "ADD     R12, R11, #0xC\n"            
                "ADD     R1, R11, #8\n"               
                "STR     LR, [R1,R3]\n"               
                "STR     R0, [R12,R3]\n"              
                "STR     R2, [R4,R3]\n"               
                "LDR     R0, [SP]\n"                  
                "STR     R0, [R5,R3]\n"               
"loc_FFD2E260:\n"                                     
                                                  
                "LDR     R2, =0x73970\n"              
                "LDR     R3, =0x73A20\n"              
                "LDR     R1, [R2]\n"                  
                "LDR     R0, [R3]\n"                  
                "ADD     R3, R1, #9\n"                
                "CMP     R3, R0\n"                    
                "BLS     loc_FFD2E29C\n"              
                "LDR     R2, =0x73A1C\n"              
                "LDR     R3, [R2]\n"                  
                "ADD     R3, R3, R1\n"                
                "RSB     R3, R0, R3\n"                
                "LDR     R0, [SP,#0x10]\n"            
                "ADD     R3, R3, #8\n"                
                "STR     R3, [R0]\n"                  
                "B       loc_FFD2E2A8\n"              
"loc_FFD2E29C:\n"                                     
                "ADD     R3, R1, #8\n"                
                "LDR     R1, [SP,#0x10]\n"            
                "STR     R3, [R1]\n"                  
"loc_FFD2E2A8:\n"                                     
                "LDR     R2, [SP,#0x10]\n"            
                "LDR     R1, =0x739CC\n"              
                "LDR     R3, =0x73A20\n"              
                "LDR     R12, [R2]\n"                 
                "LDR     R2, [R1]\n"                  
                "LDR     R0, [R3]\n"                  
                "ADD     R3, R12, R2\n"               
                "CMP     R3, R0\n"                    
                "BLS     loc_FFD2E2FC\n"              
                "LDR     R2, [SP,#0xC]\n"             
                "RSB     R0, R12, R0\n"               
                "STR     R0, [R2]\n"                  
                "LDR     R2, =0x73A1C\n"              
                "LDR     R3, [R1]\n"                  
                "LDR     R1, [R2]\n"                  
                "RSB     R3, R0, R3\n"                
                "LDR     R0, [SP,#8]\n"               
                "STR     R1, [R0]\n"                  
                "LDR     R1, [SP,#4]\n"               
                "STR     R3, [R1]\n"                  
                "B       loc_FFD2E318\n"              
"loc_FFD2E2FC:\n"                                     
                "LDR     R0, [SP,#0xC]\n"             
                "STR     R2, [R0]\n"                  
                "LDR     R1, [SP,#4]\n"               
                "MOV     R3, #0\n"                    
                "STR     R3, [R1]\n"                  
                "LDR     R2, [SP,#8]\n"               
                "STR     R3, [R2]\n"                  
"loc_FFD2E318:\n"                                     
                "LDR     R0, =0x73970\n"              
                "LDR     R1, =0x7396C\n"              
                "LDR     R3, [R0]\n"                  
                "LDR     R2, [R1]\n"                  
                "CMP     R3, R2\n"                    
                "BHI     loc_FFD2E344\n"              
                "LDR     R0, [SP,#0xC]\n"             
                "LDR     R3, [R0]\n"                  
                "ADD     R3, R12, R3\n"               
                "CMP     R2, R3\n"                    
                "BCC     loc_FFD2E108\n"              
"loc_FFD2E344:\n"                                     
                "LDR     R1, [SP,#8]\n"               
                "LDR     R2, [R1]\n"                  
                "CMP     R2, #0\n"                    
                "BEQ     loc_FFD2E378\n"              
                "LDR     R3, =0x7396C\n"              
                "LDR     R1, [R3]\n"                  
                "CMP     R2, R1\n"                    
                "BHI     loc_FFD2E378\n"              
                "LDR     R0, [SP,#4]\n"               
                "LDR     R3, [R0]\n"                  
                "ADD     R3, R2, R3\n"                
                "CMP     R1, R3\n"                    
                "BCC     loc_FFD2E108\n"              
"loc_FFD2E378:\n"                                     
                                                  
                "LDR     R3, =0x739CC\n"              
                "LDR     R0, =0x739D0\n"              
                "LDR     R2, [R3]\n"                  
                "LDR     R3, [R0,#4]\n"               
                "ADD     R2, R2, #0x18\n"             
                "MOV     R1, R2\n"                    
                "MOV     R2, #0\n"                    
                "CMP     R2, R3\n"                    
                "BHI     loc_FFD2E3AC\n"              
                "BNE     loc_FFD2E3B4\n"              
                "LDR     R3, [R0]\n"                  
                "CMP     R1, R3\n"                    
                "BLS     loc_FFD2E3B4\n"              
"loc_FFD2E3AC:\n"                                     
                                                  
                "MOV     R0, #0x80000005\n"           
                "B       loc_FFD2E4D8\n"              
"loc_FFD2E3B4:\n"                                     
                                                  
                "LDR     R1, =0x739B4\n"              
                "LDR     R0, =0x73A00\n"              
                "LDR     R3, [R1]\n"                  
                "LDR     R2, [R0]\n"                  
                "ADD     R3, R3, R2,LSL#4\n"          
                "ADD     R3, R3, R3,LSL#2\n"          
                "LDR     R12, =0x739D0\n"             
                "MOV     R3, R3,LSL#1\n"              
                "ADD     R3, R3, #0xA0\n"             
                "LDR     R2, [R12,#4]\n"              
                "MOV     R0, R3\n"                    
                "MOV     R1, #0\n"                    
                "CMP     R1, R2\n"                    
                "BHI     loc_FFD2E3FC\n"              
                "BNE     loc_FFD2E420\n"              
                "LDR     R3, [R12]\n"                 
                "CMP     R0, R3\n"                    
                "BLS     loc_FFD2E420\n"              
"loc_FFD2E3FC:\n"                                     
                "LDR     R4, =0x739E8\n"              
                "LDR     R1, [R4]\n"                  
                "CMP     R1, #0\n"                    
                "BNE     loc_FFD2E420\n"              
                "MOV     R0, #0x3140\n"               
                "ADD     R0, R0, #8\n"                
                "BL      sub_FFD45318\n"              
                "MOV     R3, #1\n"                    
                "STR     R3, [R4]\n"                  
"loc_FFD2E420:\n"                                     
                                                  
                "LDR     R1, =0x739B4\n"              
                "LDR     R0, =0x73A00\n"              
                "LDR     R2, [R1]\n"                  
                "LDR     R3, [R0]\n"                  
                "LDR     R0, =0x739D8\n"              
                "ADD     R2, R2, R3,LSL#4\n"          
                "MVN     R3, #0x9F\n"                 
                "ADD     R2, R2, R2,LSL#2\n"          
                "ADD     R3, R3, #0x40000000\n"       
                "SUB     R3, R3, R2,LSL#1\n"          
                "LDR     R1, [R0,#4]\n"               
                "MOV     R4, R3\n"                    
                "MOV     R5, #0\n"                    
                "CMP     R1, R5\n"                    
                "BHI     loc_FFD2E46C\n"              
                "BNE     loc_FFD2E490\n"              
                "LDR     R3, [R0]\n"                  
                "CMP     R3, R4\n"                    
                "BLS     loc_FFD2E490\n"              
"loc_FFD2E46C:\n"                                     
                "LDR     R4, =0x739E8\n"              
                "LDR     R1, [R4]\n"                  
                "CMP     R1, #0\n"                    
                "BNE     loc_FFD2E490\n"              
                "MOV     R0, #0x3140\n"               
                "ADD     R0, R0, #8\n"                
                "BL      sub_FFD45318\n"              
                "MOV     R3, #1\n"                    
                "STR     R3, [R4]\n"                  
"loc_FFD2E490:\n"                                     
                                                  
                "LDR     R3, =0x739D8\n"              
                "LDR     R12, =0x739CC\n"             
                "LDMIA   R3, {R1,R2}\n"               
                "LDR     R0, [R12]\n"                 
                "MOV     R4, #0\n"                    
                "MOV     R3, #0x18\n"                 
                "ADDS    R1, R1, R0\n"                
                "ADC     R2, R2, #0\n"                
                "ADDS    R1, R1, R3\n"                
                "ADC     R2, R2, R4\n"                
                "CMP     R2, #0\n"                    
                "BHI     loc_FFD2E4CC\n"              
                "BNE     loc_FFD2E4D4\n"              
                "CMP     R1, #0x40000000\n"           
            //  "BLS     loc_FFD2E4D4\n"   // -

                "B       loc_FFD2E4D4\n"   // +
            
"loc_FFD2E4CC:\n"                                     
                "MOV     R0, #0x80000007\n"           
                "B       loc_FFD2E4D8\n"              
"loc_FFD2E4D4:\n"                                     
                                                  
                "MOV     R0, #0\n"                    
"loc_FFD2E4D8:\n"                                     
                                                  
                "ADD     SP, SP, #0x14\n"             
                "LDMFD   SP!, {R4-R11,PC}\n"          

 );
}



void __attribute__((naked,noinline)) sub_FFD2D408_my(){
 asm volatile(
                "CMP     R2, #1\n"                    
                "STMFD   SP!, {R4-R7,LR}\n"           
                "MOV     R7, R0\n"                    
                "MOV     R6, R1\n"                    
                "MOVEQ   R3, #0x79\n"                 
                "STREQ   R3, [R6]\n"                  
                "LDMEQFD SP!, {R4-R7,PC}\n"           
                "LDR     R12, =0x736E8\n"             
                "LDR     R0, [R12]\n"                 
                "LDR     R3, =0x736F0\n"              
                "CMP     R0, #0\n"                    
                "LDR     R1, [R3]\n"                  
                "BEQ     loc_FFD2D450\n"              
                "LDR     R2, =0x736F4\n"              
                "LDR     R3, [R2]\n"                  
                "CMP     R3, #1\n"                    
                "BNE     loc_FFD2D464\n"              
                "B       loc_FFD2D454\n"              
"loc_FFD2D450:\n"                                     
                "LDR     R2, =0x736F4\n"              
"loc_FFD2D454:\n"                                     
                "MOV     R3, #0\n"                    
                "STR     R3, [R2]\n"                  
                "STR     R7, [R12]\n"                 
                "B       loc_FFD2D518\n"              
"loc_FFD2D464:\n"                                     
                "LDR     R3, =0x736EC\n"              
                "LDR     R2, [R3]\n"                  
                "LDR     R5, =table1\n"     // + 0xFFD2D270    
                "MOV     LR, R2,LSL#2\n"              
                "LDR     R3, [R5,LR]\n"               
                "LDR     R4, =table2\n"     // + 0xFFD2D2AC    
                "RSB     R12, R3, R0\n"               
                "LDR     R2, [R4,LR]\n"               
                "CMP     R12, #0\n"                   
                "RSB     R0, R2, R0\n"                
                "BLE     loc_FFD2D4C4\n"              
                "ADD     R3, R5, #0x14\n"             
                "LDR     R2, [R3,LR]\n"               
                "CMP     R2, R12\n"                   
                "ADDGE   R1, R1, #1\n"                
                "BGE     loc_FFD2D4B8\n"              
                "ADD     R3, R5, #0x28\n"             
                "LDR     R2, [R3,LR]\n"               
                "CMP     R2, R12\n"                   
                "ADDGE   R1, R1, #2\n"                
                "ADDLT   R1, R1, #3\n"                
"loc_FFD2D4B8:\n"                                     
         //     "CMP     R1, #0xE\n"    // -          
         //     "MOVGE   R1, #0xE\n"    // -          
                "CMP     R1, #0x1A\n"    // +         
                "MOVGE   R1, #0x1A\n"    // +          

                "B       loc_FFD2D4FC\n"              
"loc_FFD2D4C4:\n"                                     
                "CMP     R0, #0\n"                    
                "BGE     loc_FFD2D4FC\n"              
                "ADD     R3, R4, #0x14\n"             
                "LDR     R2, [R3,LR]\n"               
                "CMP     R2, R0\n"                    
                "SUBLE   R1, R1, #1\n"                
                "BLE     loc_FFD2D4F4\n"              
                "ADD     R3, R4, #0x28\n"             
                "LDR     R2, [R3,LR]\n"               
                "CMP     R2, R0\n"                    
                "SUBLE   R1, R1, #2\n"                
                "SUBGT   R1, R1, #3\n"                
"loc_FFD2D4F4:\n"                                     
                "CMP     R1, #0\n"                    
                "MOVLT   R1, #0\n"                    
"loc_FFD2D4FC:\n"                                     
                                                  
                "LDR     R0, =0x736F0\n"              
                "LDR     R3, [R0]\n"                  
                "CMP     R1, R3\n"                    
                "LDRNE   R2, =0x736F4\n"              
                "MOVNE   R3, #1\n"                    
                "STRNE   R1, [R0]\n"                  
                "STRNE   R3, [R2]\n"                  
"loc_FFD2D518:\n"                                     
                "LDR     R3, =0x736F0\n"              
         //     "LDR     R1, =0x6C6C\n"   // -
                "LDR     R1, =video_mode\n"  //+        
                "LDR     R0, [R3]\n"                  
                "LDR     R2, =CompressionRateTable\n" 
                "LDR     R12, [R1]\n"                 
                "LDR     R12, [R12]\n"        // +
                "LDR     LR, [R2,R0,LSL#2]\n"         
                "LDR     R3, =0x736E8\n"              
                "CMP     R12, #1\n"                   
                "STR     R7, [R3]\n"                  
                "STR     LR, [R6]\n"                  
          //    "MOVEQ   R3, #0xB\n"      // -            
            
                "LDREQ   R3, =video_quality\n"   // +
                "LDREQ   R3, [R3]\n"             // +
                "LDREQ   R3, [R3]\n"             // +

                "STREQ   R3, [R6]\n"                  
                "BL      mute_on_zoom\n"     // +
                "LDMFD   SP!, {R4-R7,PC}\n"           
 );
}






