void setup() {
  // put your setup code here, to run once:
  DDRD = DDRB | 0x00001000;
  PORTD = PORTB & 0x00001000;
}
void loop() {
  // put your main code here, to run repeatedly:
  PORTB = PORTB & 0b00000000;
  PORTB = PORTB | 0b0001000;
}