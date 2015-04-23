/*_____________________________________________________________________________________________________________________

        Assignment:       Elec2700
        Module:         Assignment 2
        Author:         Chris Caelli & Tim Farnworth
        Date:           20/4/15

        Description:
        This program will emulate a MIDI keyboard and produce excellent music (probably)


        Notes:          
		Basic Structure is being implemented. The code is limited to strict C.
		Current c51.exe compiler compiles the program, however gives 5 warnings of "Uncalled Functions".
		This is okay as we're implimenting stub programs.
		
        Revisions:		v0.1 Alpha

_____________________________________________________________________________________________________________________*/
#include <SiLABS/C8051F120.h>			//"C:\Programming\Keil_v5\C51\INC\SiLABS\c8051F120.h"
//#include <C8051F120_defs.h>     // SFR declarations
#include "Assign2.h"
#include "Notes.h"
#include "Keyboard.h"

void main(void);
void General_Init(void);

/*--------------------------------------------------------------------------------------------------------------------
        Function:         Main

        Description:      Main routine

        Revisions:

--------------------------------------------------------------------------------------------------------------------*/
void main(void)
{
	//printf("Hello World");
	General_Init();
	Timer_Init();
  Voltage_Reference_Init();
	DAC_Init();
  Interrupts_Init();

	while(1)
	{	
		// Do stuff here ??

		// Try this code out to test the pushbuttons and LEDs as defined in Assign2.h
		LD1 = ~PB1;	// Note the ~ means "complement"
		LD2 = ~PB2;
		LD3 = ~PB3;
		LD4 = ~PB4;
		LD5 = ~PB5;
		LD6 = ~PB6;
		LD7 = ~PB7;

		if ((~MPB) || (~PB8))  // What does this do.....Note that MPB is the P3.7 push button on the 8051 board
			LD8 = 1;
		else 
			LD8 = 0;
	}
}

/*--------------------------------------------------------------------------------------------------------------------
        Function:         General_Init

        Description:      Initialise ports, watchdog....

        Revisions:

--------------------------------------------------------------------------------------------------------------------*/
void General_Init()
{
	WDTCN = 0xde;
	WDTCN = 0xad;
  SFRPAGE = CONFIG_PAGE;
	P2MDOUT = 0xff;		// Need to make pushpull outputs to drive LEDs properly
	XBR2 = 0x40;
}

