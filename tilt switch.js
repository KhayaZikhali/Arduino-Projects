int tiltPin = 3;
int redPin = 10;
int greenPin = 12;
int tiltVal;
int dT = 250;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(tiltPin, INPUT);
 pinMode(greenPin, OUTPUT);
 digitalWrite(tiltPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
 tiltVal =  digitalRead(tiltPin);
 Serial.println(tiltVal);
 if (tiltVal == 1){
 digitalWrite(greenPin, HIGH);
 digitalWrite(redPin , LOW);
 } else if (tiltVal == 0){
 digitalWrite(redPin ,HIGH);
 digitalWrite(greenPin ,LOW);
 }  
}