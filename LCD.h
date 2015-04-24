#ifndef LCD
#define LCD
/*
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
---------			This is our LCD Header file														---------
---------																														---------
---------																														---------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------

*/


#include <string.h>

/* Definitions				*/
#define FUNCTION_SET 				0x2
#define	CLR_DISP						0x0
#define CONTROL							0xE
#define ENTRY_MODE_SET			0x6
#define LCD_SEGMENTS				16

sbit DB4 = 				P3 ^ 0;	/* Data bit 4 */
sbit DB5 = 				P3 ^ 1;	/* Data bit 5 */
sbit DB6 = 				P3 ^ 2;	/* Data bit 6 */
sbit DB7 = 				P3 ^ 3;	/* Data bit 7 */
sbit RS = 				P3 ^ 4;	/* Register select */
sbit R_W = 				P3 ^ 5;	/* Read/Write */
sbit ENABLE = 		P3 ^ 6;	/* Enable signal */

unsigned char print_mem[LCD_SEGMENTS + 1]; /* Number of characters plus the NULL character */


void initLCD(void){
	/* Power On */
	delay(20);
	
	P3 = FUNCTION_SET;
	pulse_Enable(5);
	P3 = FUNCTION_SET;
	pulse_Enable(5);
	
	/* Display ON/OFF */
	P3 = CLR_DISP;
	pulse_Enable(5);
	P3 = CONTROL;
	pulse_Enable(5);
	
	/* Entry Mode Set */
	P3 = CLR_DISP;
	pulse_Enable(5);
	P3 = ENTRY_MODE_SET;
	pulse_Enable(5);
	
	/* Now we can write data! YAH */
	
}

void clearLCD(void){
}

void printLCD(unsigned char *word){

	while(*word){ /* print character by character till we reach the NULL character */
		writeLCD(*word++); /* increment pointer to word */
	}
}

void writeLCD(unsigned char character){ /* Write a character to the LCD screen */
	
	P3 = (character>>4)&(0x0F); /* Upper nibble of character */
	pulse_Enable(1);
	P3 = (character)&(0x0F); 		/* Lower nibble of character */
	pulse_Enable(1);
}

void setCursor(char x, char y){
	////// Something
}

void pulse_Enable(unsigned char i){
	ENABLE = 1;
	delay(i);
	ENABLE = 0;
	delay(i);
}

	
#endif