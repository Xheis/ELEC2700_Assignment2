#ifndef Keyboard
#define Keyboard

/*
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
---------			This is our Keyboard.header						---------
---------															---------
---------			We will store functions related					---------
---------			to taking user input and playing/holding		---------
---------			notes. This will rely on calling upon			---------
---------			the Notes.header for functions/methods			---------
---------			related to generating and playing specific		---------
---------			frequency notes.								---------
---------															---------
---------															---------
---------															---------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
*/

//#include "Notes.h"
//unsigned char    data    octave = 	4; 	/* Set inital octave to 4 */

void set_Tone(unsigned short);
unsigned short octave_Adjust(unsigned char, unsigned short);
void CheckInput();
void UpdateDispaly();


//void CheckInput(void)
//{	
//	//We want to loop this in our main loop, and check our inputs. Ideally, we're going to be reading the P1 input byte for 
//	//changes in value, at which point we can grab the corresponding value. 
//	//The requirements ask us to play the "white keys":
//	//		C 		D 		E		F		G		A		B
//	//		P1.2	P1.3	P1.4	P1.5	P1.6	P1.7	P1.8
//	
//	//When the first button is pressed (P1.1), the sharp keys will be engagued.
//	//		C# 		D(Eb)	E		F#		G#		A#(Bb)	B
//	//		P1.2	P1.3	P1.4	P1.5	P1.6	P1.7	P1.8
//	// with E & B not having Sharps
//	
//	//As we have 8 buttons, I'd also suggest we make a easy mode to take a selected note, and we can map Octaves 1-8 on P1.
//	//Should be an easy extension *at the end*.
//	
//	//We're done here, proceed to update the display and return to the MainLoop.
//    char tone_select = 0;
//    char i;
//    if (~P1 & 0)
//	{
//		for(i = 1; i<8; i++)
//		{
//            switch(i){    /* Switch between tones */
//                case 1: /* C */
//                    tone_select = 0;
//                    if(~PB1){ /* if PB1 is pushed, we'll adjust the tone to a sharp  */
//                        tone_select = 1; /* C# */
//                        }
//                break;

//                
//                case 2: /* D */
//                    tone_select = 2;
//                    if(~PB1){ /* if PB1 is pushed, we'll adjust the tone to a sharp  */
//                        tone_select = 3; /* C# */
//                        }
//                break;

//                
//                case 3: /* E (note:- E# is F so no need to check PB1) */
//                    tone_select = 4;
//                break;

//                case 4: /* F */
//                    tone_select = 5;
//                    if(~PB1){ /* if PB1 is pushed, we'll adjust the tone to a sharp  */
//                        tone_select = 6; /* F# */
//                        }
//                break;

//                case 5: /* G */
//                    tone_select = 7;
//                    if(~PB1){ /* if PB1 is pushed, we'll adjust the tone to a sharp  */
//                        tone_select = 8; /* G# */
//                        }
//                break;

//                case 6: /* A */
//                    tone_select = 9;
//                    if(~PB1){ /* if PB1 is pushed, we'll adjust the tone to a sharp  */
//                        tone_select = 10; /* A# */
//                        }
//                break;

//                case 7: /* B (note:- B# is C so no need to check PB1)  */
//                    tone_select = 11;
//                break;



//                default:
//                break;
//            }
//            //set_Tone(octave_Adjust(octave,tone_select)); /* Set tone as directed by push buttons */
//            TR2 = 1; /* Turn on Timer2 */
//    }
//         
//	}
//	else
//		{
//			TR2 = 0; /* Turn off Timer2 */
//    }
//    
//	UpdateDispaly();
//}


void UpdateDispaly()
{
	//I feel this is a good opportunity to use the LEDs and LCD to display whatever information we feel necessary. As such, I've left this method open
	//to whatever you feel we need to use. It can be called inside Check Input
}



#endif