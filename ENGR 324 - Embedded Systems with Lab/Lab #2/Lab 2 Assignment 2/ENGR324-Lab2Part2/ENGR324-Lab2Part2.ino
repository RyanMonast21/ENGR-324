#include <LiquidCrystal_I2C.h>
#define echoPin 2
#define trigPin 3

const int red = 10;
const int yellow1 = 9;
const int yellow2 = 6;
const int green = 11;
const int duty = 255;


long duration;
int distanceCM;
int distanceIN;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode (echoPin, INPUT);
  pinMode (trigPin, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  lcd.init();
  lcd.clear();         
  lcd.backlight();
}

void blinkBAD(){
  digitalWrite(13, 255);
  digitalWrite(12, 255);
  digitalWrite(11, 255);
  for (int pinNumber = 4; pinNumber < 11; pinNumber++){
    if((pinNumber % 2) == 0){
      digitalWrite(pinNumber, HIGH);
      delay(50);
      digitalWrite(pinNumber, LOW);
    }
    else if ((pinNumber % 2) == 1){
      digitalWrite(pinNumber, HIGH);
      delay(50);
      digitalWrite(pinNumber, LOW);
    }
  }
}

void blinkMID(){
  digitalWrite(13, 255);
  digitalWrite(12, 255);
  digitalWrite(11, 255);
  for (int pinNumber = 4; pinNumber < 10; pinNumber++){
    if((pinNumber % 2) == 0){
      digitalWrite(pinNumber, HIGH);
      delay(100);
      digitalWrite(pinNumber, LOW);
    }
    else if ((pinNumber % 2) == 1){
      digitalWrite(pinNumber, HIGH);
      delay(100);
      digitalWrite(pinNumber, LOW);
    }
  }
}

void blinkGOOD(){
  digitalWrite(13, 255);
  digitalWrite(12, 255);
  digitalWrite(11, 255);
  for (int pinNumber = 4; pinNumber < 9; pinNumber++){
    if((pinNumber % 2) == 0){
      digitalWrite(pinNumber, HIGH);
      delay(250);
      digitalWrite(pinNumber, LOW);
    }
    else if ((pinNumber % 2) == 1){
      digitalWrite(pinNumber, HIGH);
      delay(250);
      digitalWrite(pinNumber, LOW);
    }
  }
}

void greenLight(){
  digitalWrite(13, 255);
  digitalWrite(12, 255);
  digitalWrite(11, 0);
}

void loop(){
  
  digitalWrite(trigPin, LOW);
	delayMicroseconds(5);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distanceCM = duration *0.034 / 2;
  distanceIN = distanceCM / 2.54;

  lcd.setCursor(0,0);
  lcd.print("Distance = ");
  lcd.print(distanceCM);
  lcd.println(" cm.");

  lcd.setCursor(0,1);
  lcd.print("Distance = ");
  lcd.print(distanceIN);
  lcd.println(" in.");

  if (distanceCM < 10){
    blinkBAD();
  }
  else if (distanceCM > 10 and distanceCM < 30){
    blinkMID();
  }
  else if (distanceCM < 50 & distanceCM > 30){
    blinkGOOD();
  }
  else{
    greenLight();
  }
}