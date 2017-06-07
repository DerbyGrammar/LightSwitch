/*
 * Basic Light Switch
 * Christopher Nethercott
 */

boolean isLightOn = false;
const int switchPin = 2;
const int lightPin = 3;
const int timeDelayMins = 15;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(lightPin, OUTPUT);
}

void loop() {
  isLightOn = digitalRead(switchPin);
  if(isLightOn) {
    turnLightOn();  
  }
  delay(50); // stability
}

void turnLightOn() {
  digitalWrite(lightPin, HIGH);
  delay(timeDelayMins * 60); //turns into seconds
  digitalWrite(lightPin, LOW);
  isLightOn = false;
}

