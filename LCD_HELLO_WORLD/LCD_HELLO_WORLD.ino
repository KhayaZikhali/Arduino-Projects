#include <LiquidCrystal.h>

int rs=7;
int en =8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int dT = 1000;
int tD = 60;
int maxNum;
String msg = "Declare your limit!";
LiquidCrystal lcd(rs , en , d4, d5, d6, d7);
int buzzPin = 3;

//add a pomodoro clock to this tommorow
//add a buzzer 
void setup() {
  // put your setup code here, to run once:
 lcd.begin(16, 2);
 Serial.begin(9600);
 pinMode(buzzPin , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  delay(10);
  lcd.print("Waiting for input");
  while (Serial.available() == 0 ){
  }
  lcd.clear();
  maxNum = Serial.parseInt();
  delay(10);
  for (int j=maxNum; j >= 0; j = j - 1){
  lcd.setCursor(0 ,0); 
  lcd.print("Watch Me Count!");
  lcd.setCursor(0, 1);
  lcd. print(j);
  delay(1000);
  lcd.clear();
  // when it reaches zero set buzzer pin ot high and adekay for two seconds then turn it to low run again 
  // use remote control to create a bomb
}
lcd.print("DONE!");
digitalWrite(buzzPin ,HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(500);
digitalWrite(buzzPin ,HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(500);
digitalWrite(buzzPin ,HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(500);
digitalWrite(buzzPin ,HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
delay(tD);
digitalWrite(buzzPin, HIGH);
delay(tD);
digitalWrite(buzzPin, LOW);
lcd.clear();
}
