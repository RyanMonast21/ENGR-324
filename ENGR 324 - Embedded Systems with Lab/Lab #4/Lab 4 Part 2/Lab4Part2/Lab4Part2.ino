void setup() {
  DDRD = DDRD | 0xFF;
  PORTD = PORTD & 0xFF;
}
void loop() {
  PORTD = 0x3F;
  delay(500);
  PORTD = 0x06;
  delay(500);
  PORTD = 0x5B;
  delay(500);
  PORTD = 0x4F;
  delay(500);
  PORTD = 0x66;
  delay(500);
  PORTD = 0x6D;
  delay(500);
  PORTD = 0x7D;
  delay(500);
  PORTD = 0x07;
  delay(500);
  PORTD = 0x07;
  delay(500);
  PORTD = 0x7F;
  delay(500);
  PORTD = 0x67;
  delay(500);
  PORTD = 0x77;
  delay(500);
  PORTD = 0x7C;
  delay(500);
  PORTD = 0x39;
  delay(500);
  PORTD = 0x5E;
  delay(500);
  PORTD = 0x79;
  delay(500);
  PORTD = 0x71;
  delay(500);
}