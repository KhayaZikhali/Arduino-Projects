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
  int sensor=analogRead(A1); // Incoming analog signal read and appointed sensor
  Serial.println(sensor);   //Wrote serial port
  lcd.setCursor(0 ,0);
  lcd.print("Water Level");
  lcd.setCursor(0, 1);
  lcd.print(sensor);
u  if (60 <= sensor < 120){
    digitalWrite(buzzPin , HIGH);
    delay(200);
    digitalWrite(buzzPin , LOW);
    delay(200);
  } else if (120 <= sensor < 160){
    digitalWrite(buzzPin , HIGH);
    delay(100);
    digitalWrite(buzzPin , LOW);
    delay(100);
  } else if (sensor >= 160){
    digitalWrite(buzzPin , HIGH);
    delay(10);
    digitalWrite(buzzPin , LOW);
    delay(10);
  }
}
