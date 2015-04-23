#ifndef LCD
#define LCD
/*
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
---------			This is our Notes.header						---------
---------															---------
---------			We will store functions related					---------
---------			to generating and playing notes here.			---------
---------															---------
---------			The two accessible (external) methods 			---------
---------			should be the DAC_Init(), for setting up 		---------
---------			DAC at the start, and PlayNote() which			---------
---------			will take a string and a octave into			---------
---------			the function. i.e.								---------
---------															---------
---------			PlayNote("A", 4);								---------
---------			This will play a 440Hz sine wave				---------
---------															---------
---------															---------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------

*/


#include <string.h>

/* Definitions				*\
#define 
void initLCD(void){
}

void clearLCD(void){
}

void appendWriteLCD(char *word){
	len = sizeof(word);
	for(char i; i < len; i++){
		//// something
	}
}void appendWriteLCD(char *word){
	len = sizeof(word);
	for(char i; i < len; i++){
		//// something
	}
}


	
#endif