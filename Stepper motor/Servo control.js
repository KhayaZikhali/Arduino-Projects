#include <Stepper.h>

int stepsPerRevolution = 2048 ;
Stepper myStepper(stepsPerRevolution, 11,9,10,8);
String msg = "What are your orders?";
int dT = 500;
int motSpeed = 18;
int stepNum;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  
}

// add an option ot adjust the speed in the serial monitor

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){
  };
 stepNum = Serial.parseInt();
 myStepper.step(stepNum);
 delay(dT);
 myStepper.step(-stepNum);
 delay(dT);
}