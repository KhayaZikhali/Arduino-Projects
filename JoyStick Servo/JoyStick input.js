int xPin = A0;
int yPin = A1;
int sPin = 2;
// delay time
int dT = 10;
int xVal;
int yVal;
int sVal;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(yPin, INPUT);
 pinMode(sPin , INPUT);
 pinMode(xPin , INPUT);
 digitalWrite(sPin , HIGH);
 }

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  delay(dT);
  //Prints the values to serial monitor  
  Serial.print(" X value =  ");
  Serial.print(xVal);
  Serial.print(", Y value = " ); 
  Serial.print(yVal);
  Serial.print(", Switch state = ");
  Serial.println(sVal);       
} 