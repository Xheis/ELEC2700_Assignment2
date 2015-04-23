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



void CheckInput();
void UpdateDispaly();


void CheckInput()
{
	//We want to loop this in our main loop, and check our inputs. Ideally, we're going to be reading the P1 input byte for 
	//changes in value, at which point we can grab the corresponding value. 
	//The requirements ask us to play the "white keys":
	//		C 		D 		E		F		G		A		B
	//		P1.2	P1.3	P1.4	P1.5	P1.6	P1.7	P1.8
	
	//When the first button is pressed (P1.1), the sharp keys will be engagued.
	//		C# 		D(Eb)	E		F#		G#		A#(Bb)	B
	//		P1.2	P1.3	P1.4	P1.5	P1.6	P1.7	P1.8
	// with E & B not having Sharps
	
	//As we have 8 buttons, I'd also suggest we make a easy mode to take a selected note, and we can map Octaves 1-8 on P1.
	//Should be an easy extension *at the end*.
	
	//We're done here, proceed to update the display and return to the MainLoop.
	UpdateDispaly();
}


void UpdateDispaly()
{
	//I feel this is a good opportunity to use the LEDs and LCD to display whatever information we feel necessary. As such, I've left this method open
	//to whatever you feel we need to use. It can be called inside Check Input
}



#endif