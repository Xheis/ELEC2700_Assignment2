/*_____________________________________________________________________________________________________________________

        Assignment:       
        Module:         
        Author:         
        Date:           

        Description:
        This program will ....... 


        Notes:          

        Revisions:

_____________________________________________________________________________________________________________________*/
#include <compiler_defs.h>
#include <C8051F120_defs.h>     // SFR declarations
#include "Assign2.h"


/*--------------------------------------------------------------------------------------------------------------------
        Function:         Main

        Description:      Main routine

        Revisions:

--------------------------------------------------------------------------------------------------------------------*/
void main(void)
{
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

/*--------------------------------------------------------------------------------------------------------------------
        Function:         Timer_Init

        Description:      Initialise timer ports and registers

        Revisions:

--------------------------------------------------------------------------------------------------------------------*/
void Timer_Init()
{
	SFRPAGE   = TMR2_PAGE;

	// Configuration goes here.............

}

/*--------------------------------------------------------------------------------------------------------------------
        Function:         Voltage_Reference_Init

        Description:      Initialise voltage references (Needed for DAC)

        Revisions:

--------------------------------------------------------------------------------------------------------------------*/
void Voltage_Reference_Init()
{
	SFRPAGE   = ADC0_PAGE;
  REF0CN    = 0x03; // Turn on internal bandgap reference and output buffer to get 2.4V reference (pg 107)
}

/*--------------------------------------------------------------------------------------------------------------------
        Function:         DAC_Init

        Description:      Initialise DAC0. 

        Revisions:

--------------------------------------------------------------------------------------------------------------------*/
void DAC_Init()
{
  SFRPAGE   = DAC0_PAGE;

		// Configuration goes here...........
}

/*--------------------------------------------------------------------------------------------------------------------
        Function:         Interrupts_Init

        Description:      Initialise interrupts

        Revisions:

--------------------------------------------------------------------------------------------------------------------*/
void Interrupts_Init()
{
	IE        = 0xA0;  // Global enable interrupt + timer 2 interrupt
}

/*--------------------------------------------------------------------------------------------------------------------
        Function:         Timer2_ISR

        Description:      

        Revisions:

--------------------------------------------------------------------------------------------------------------------*/
void Timer2_ISR (void) interrupt 5
{
  unsigned char SFRPAGE_SAVE = SFRPAGE;        // Save Current SFR page

  SFRPAGE   = DAC0_PAGE;

	// Work to do here.......
	
	TF2 = 0;        // Reset Interrupt
  SFRPAGE = SFRPAGE_SAVE; 							      // Restore SFR page
}





