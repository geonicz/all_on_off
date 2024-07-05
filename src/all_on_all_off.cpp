// Created by GeoNicZ
// mailto:geonicz@gmail.com
// allOn_allOff.ino
#include "Arduino.h"
#define delay_ 100
// #define mega2560 1
void setup()
{
		// Serial.begin(9600);
		for (int i = 0; i < 14; i++)
				pinMode(i, OUTPUT);
				// mega2560
#ifdef mega2560
		for (int i = 14; i < 54; i++) {
				pinMode(i, OUTPUT);
		}
		pinMode(A8, OUTPUT);
		pinMode(A9, OUTPUT);
		pinMode(A10, OUTPUT);
		pinMode(A11, OUTPUT);
		pinMode(A12, OUTPUT);
		pinMode(A13, OUTPUT);
		pinMode(A14, OUTPUT);
		pinMode(A15, OUTPUT);
#endif
		pinMode(A0, OUTPUT);
		pinMode(A1, OUTPUT);
		pinMode(A2, OUTPUT);
		pinMode(A3, OUTPUT);
		pinMode(A4, OUTPUT);
		pinMode(A5, OUTPUT);
		pinMode(A6, OUTPUT);
		pinMode(A7, OUTPUT);
		
}

void loop()
{

		delay(delay_);

		// Serial << "Tick...";
		for (int i = 0; i < 14; i++) {
				digitalWrite(i, HIGH);
		}
#ifdef mega2560
		for (int i = 14; i < 54; i++) {
				digitalWrite(i, HIGH);
		}
		digitalWrite(A8, HIGH);
		digitalWrite(A9, HIGH);
		digitalWrite(A10, HIGH);
		digitalWrite(A11, HIGH);
		digitalWrite(A12, HIGH);
		digitalWrite(A13, HIGH);
		digitalWrite(A14, HIGH);
		digitalWrite(A15, HIGH);
#endif
		digitalWrite(A0, HIGH);
		digitalWrite(A1, HIGH);
		digitalWrite(A2, HIGH);
		digitalWrite(A3, HIGH);
		digitalWrite(A4, HIGH);
		digitalWrite(A5, HIGH);
		digitalWrite(A6, HIGH);
		digitalWrite(A7, HIGH);
		delay(delay_);

		// Serial << "Tack...\n";
		for (int i = 0; i < 14; i++) {
				digitalWrite(i, LOW);
		}
#ifdef mega2560
		for (int i = 14; i < 54; i++) {
				digitalWrite(i, LOW);
		}
		digitalWrite(A8, LOW);
		digitalWrite(A9, LOW);
		digitalWrite(A10, LOW);
		digitalWrite(A11, LOW);
		digitalWrite(A12, LOW);
		digitalWrite(A13, LOW);
		digitalWrite(A14, LOW); 
		digitalWrite(A15, LOW);
#endif
		digitalWrite(A0, LOW);
		digitalWrite(A1, LOW);
		digitalWrite(A2, LOW);
		digitalWrite(A3, LOW);
		digitalWrite(A4, LOW);
		digitalWrite(A5, LOW);
		digitalWrite(A6, LOW);
		digitalWrite(A7, LOW);
}
