#include <Stepper.h>

const int stepsPerRevolution = 2048; // for 28BYJ-48
const int motorSpeed = 10 ;     
int i;    // RPM

// Stepper pin order: IN1, IN2, IN3, IN4
Stepper myStepper(stepsPerRevolution, D1, D3, D2, D4);

// LDR sensor digital output pin
const int ldrPin = D5;

void setup() {
  pinMode(ldrPin, INPUT);
  myStepper.setSpeed(motorSpeed);
  Serial.begin(9600);
}

void loop() {
  int lightDetected = digitalRead(ldrPin);  // 1 if bright, 0 if dark

  Serial.print("LDR State: ");
  Serial.println(lightDetected);

  if (lightDetected == LOW) {
    // Bright light detected — run motor one full revolution
    for(int i=0;i<10;i++)
    myStepper.step(-stepsPerRevolution);
  } else {
    for(i=0;i<10;i++)
     myStepper.step(stepsPerRevolution);
    delay(0);  // small delay to reduce CPU usage
  }
}
