int LED = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, LOW);
  digitalWrite(LED, HIGH);
  delay(5); 
}