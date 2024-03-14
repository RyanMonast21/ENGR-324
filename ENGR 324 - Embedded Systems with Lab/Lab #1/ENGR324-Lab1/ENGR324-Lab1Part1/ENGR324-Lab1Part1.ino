int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  if (sensorValue <= 250)
    digitalWrite (ledPin, HIGH);
  else
    digitalWrite (ledPin, LOW);
}