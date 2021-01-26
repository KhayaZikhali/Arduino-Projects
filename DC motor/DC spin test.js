//connects to the speed pin in the driver
int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
//defined the spin speed
String motDir;
int motSpeed;

String msg = "Direction of the motor: Clockwise or Counter-Clockwise";
String msg2 = "Speed of the motor";

// motor speed and direction from the monitor
// toggle direction with the push button

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(speedPin , OUTPUT);
  pinMode(dirPin1 ,OUTPUT);
  pinMode(dirPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //waits for the input for the direction
  Serial.print(msg);
  while(Serial.available() == 0){
    }
  motDir = Serial.readString();
  // input for the input speed
  Serial.print(msg2);
   while (Serial.available() == 0){
    }
  motSpeed = Serial.parseInt();
  // spins the motor in the clockwise direction
  if (motDir == "clockwise"){
  digitalWrite(dirPin2, HIGH);
  digitalWrite(dirPin1, LOW);
  analogWrite(speedPin, motSpeed);
  } 
  // spins the motor in the counter-clockwse direction  
  else if (motDir == "counter-clockwise"){
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, LOW);
  analogWrite(speedPin, motSpeed);    
  } 
  //stops the motor completely ( Doesnt work yet )
  else if (motDir == "stop"){
    digitalWrite(dirPin1, LOW);
  digitalWrite(dirPin2, LOW);
  analogWrite(speedPin, motSpeed); 
  }  
}