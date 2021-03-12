//#include <Arduino.h>
//int pinRead = 7;
//int pinLed = 13;
//
//int pirState = LOW;
//int numValue = 0;
//
//extern void setup() {
//
//  pinMode(pinLed, OUTPUT);
//  pinMode(pinRead, INPUT);
//
//  Serial.begin(9600);
//}
//
//extern void loop() {
//
//  numValue = digitalRead(pinRead);
//
//  if (numValue == HIGH) {
//	digitalWrite(pinLed, HIGH);
//
//	if (pirState == LOW) {
//	  Serial.println("Motion detected");
//	  pirState = HIGH;
//	}
//  } else {
//	digitalWrite(pinLed, LOW);
//	if (pirState == HIGH) {
//	  Serial.println("Motion Ended");
//	  pirState = LOW;
//	}
//  }
//}
