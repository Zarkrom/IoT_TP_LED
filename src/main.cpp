#include <Arduino.h>

void setup() {
	// put your setup code here, to run once:
  	Serial.begin(115200);
  	pinMode(32, OUTPUT);

}

void loop() {
	// put your main code here, to run repeatedly:
	
	Serial.println("Text Low");
	digitalWrite(32, LOW);
	delay(1000);

	Serial.println("Text High");
	digitalWrite(32, HIGH);
	delay(1000);
	
}

