#include <LiquidCrystal_I2C.h>
#define echoPin 2
#define trigPin 3

long duration;
int distanceCM;
int distanceIN;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (echoPin, INPUT);
  pinMode (trigPin, OUTPUT);

  lcd.init();
  lcd.clear();         
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
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
}