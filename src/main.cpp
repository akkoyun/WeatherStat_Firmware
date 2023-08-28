// Include Arduino Library
#ifndef __Arduino__
	#include <Arduino.h>
#endif

// Include Libraries
#include "Includes.h"

// Define B108AA Object
STF_B108AA Module;

// Setup
void setup() {

	// Boot LED Sequence
	Module.Module_LED(GREEN, 1, 500);

	// Start GSM Serial Communication
	Serial_GSM.begin(115200);

	// Set PostOffice Cloud API
	PostMan Postman(Serial_GSM);

	// Connect PostMan
	Postman.Online();

	// Turn Off Delay
	delay(100);

	// Send LED Sequence
	Module.Module_LED(BLUE, 1, 500);

	// Send Pack
	uint16_t _Response = Postman.Publish();

	// Control for Data Send
	if (_Response == 200) Module.Module_LED(GREEN, 3, 500);
	if (_Response == 201) Module.Module_LED(RED, 3, 500);

}

// Loop
void loop() {

	// Sleep Mode
	SLEEP();

	// Signal Delay
	delay(100);

}
