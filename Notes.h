#ifndef Notes
#define Notes
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
---------			should be the InitDAC(), for setting up 		---------
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

void InitDAC();
void PlayNote();
int  Getfrequency();
void SetDAC();





void InitDAC()
{
	//We want this function to set up our DAC for general use. We will use the SetDAC() method for specifically readying the DAC for playing notes
}
void SetDAC()
{
	//We want to grab the frequency needed using Getfrequency(), get the phase from our lookup table, and sit ready to play the note
}
void PlayNote()
{
	//This method should actually play the given note. It will act as the method to pass in "G#", which will be parsed to Getfrequency("G#"), which
	//will grab "G#"'s corresponding phase value from a lookup table and set the DAC with it using SetDAC("G#");, or maybe we'll pass it the frequency. 
	// Dunno!
}

int  Getfrequency()
{
	//Pretty straight forward. Just grab a value from a lookup table corresponding to the frequency of the wave wanted. i.e. 
	// Grab 415.3 Hz when you request "G#".
	
// 		C		C#		D		Eb		E		F		F#		G		G#		A		Bb		B
// 0	16.35	17.32	18.35	19.45	20.60	21.83	23.12	24.50	25.96	27.50	29.14	30.87
// 1	32.70	34.65	36.71	38.89	41.20	43.65	46.25	49.00	51.91	55.00	58.27	61.74
// 2	65.41	69.30	73.42	77.78	82.41	87.31	92.50	98.00	103.8	110.0	116.5	123.5
// 3	130.8	138.6	146.8	155.6	164.8	174.6	185.0	196.0	207.7	220.0	233.1	246.9
// 4	261.6	277.2	293.7	311.1	329.6	349.2	370.0	392.0	415.3	440.0	466.2	493.9
// 5	523.3	554.4	587.3	622.3	659.3	698.5	740.0	784.0	830.6	880.0	932.3	987.8
// 6	1047	1109	1175	1245	1319	1397	1480	1568	1661	1760	1865	1976
// 7	2093	2217	2349	2489	2637	2794	2960	3136	3322	3520	3729	3951
// 8	4186	4435	4699	4978	5274	5588	5920	6272	6645	7040	7459	7902
	
	return -1;
}



#endif