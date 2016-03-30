/*
 Name:		Blink.ino
 Created:	3/30/2016 8:17:48 AM
 Author:	antti_000
*/


// the setup function runs once when you press reset or power the board
void setup() {
	// set pin 13 as output
	pinMode(13, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	// write 1 to pin 13 which will light up the leds
	// provides 5v to pin 13
	digitalWrite(13, HIGH);
	// wait half a second
	delay(500);
	// write 0 to pin 13 which takes it back to 0 v
	digitalWrite(13, LOW);
	// wait half a second
	delay(500);
}
