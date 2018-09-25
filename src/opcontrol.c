#include "main.h"

						// Sets variables
int power;
int turn;
int lift;
bool LIFT;
bool spin;
int funnel;
int rack;

void operatorControl() {
	while (1) {
		delay(20);
////////////////////////////////////////////////////////////////////////////////
//Drive Stuff
		power = joystickGetAnalog(1, 3); // vertical axis on left joystick
		turn  = joystickGetAnalog(1, 4); // horizontal axis on left joystick

		if (abs(power) < 15) {
			power = 0;
		}
		if (abs(turn) < 15) {
			turn = 0;
		}

		driveSet(power + turn, power - turn);

////////////////////////////////////////////////////////////////////////////////
//Lift Stuff
/*
		if (buttonIsNewPress(JOY1_8L)) {
			LIFT = !LIFT;
		}
	*/
		if (buttonGetState(JOY1_6U)) {
			lift = 90;
		}
		else if (buttonGetState(JOY1_6D)) {
			lift = -90;
		}
		/*
		else if (LIFT) {
			if
		}
		*/
		else {
			lift = 0;
		}
	liftSet(lift);
////////////////////////////////////////////////////////////////////////////////
//Funnel Stuff
		if (buttonIsNewPress(JOY1_8R)) {
			spin = !spin;
		}
		if (buttonIsNewPress(JOY1_8U)) {
			spin = !spin;
		}
		if (spin) {
			funnel = -70;
		}
		else if (buttonGetState(JOY1_8L)) {
			funnel = 70;
		}
		else {
			funnel = 0;
		}

	funnelSet(funnel);
////////////////////////////////////////////////////////////////////////////////
//Rack Stuff
	if (buttonGetState(JOY1_5U)) {
		rack = 100;
	}
	else if (buttonGetState(JOY1_5D)) {
		rack = 100;
	}
	else {
		rack = 0;
	}
	rackSet(rack);
////////////////////////////////////////////////////////////////////////////////
	} // end of "while" loop
} // end of opcontrol loop
