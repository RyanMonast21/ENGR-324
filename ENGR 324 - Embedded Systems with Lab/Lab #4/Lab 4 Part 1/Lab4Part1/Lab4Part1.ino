void setup() {
  DDRD = DDRD | 0b11111111;
  PORTD = PORTD & 0b11111111;
}


void loop() {
  PORTD = PORTD | 0b00000010; //Red ON
  delay(5000);
  PORTD = PORTD & 0b00000000; //Red OFF
  PORTD = PORTD | 0b00001000; //Green ON
  delay(5000);
  PORTD = PORTD & 0b00000000; //Green OFF
  PORTD = PORTD | 0b00000100; //Yellow ON
  delay(3000);
  PORTD = PORTD & 0b00000000; //Yellow OFF
  PORTD = PORTD | 0b00000010; //Red ON
  delay(1000);
  PORTD = PORTD | 0b00001110; //All ON
  delay(1000);
  PORTD = PORTD & 0b00000000; //All OFF
  delay(1000); //Return 
}