const int POT = A0;
const int LED = 11;
int ADCValue;
int DutyCycle;
int percentValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(POT, INPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  ADCValue = analogRead(POT);
  DutyCycle = map(ADCValue, 0, 1023, 0, 255);
  analogWrite(LED, DutyCycle);

  percentValue = map(DutyCycle, 0, 255, 0, 100);

  Serial.print("The Potentiometer ADC value is: ");
  Serial.print(ADCValue);
  Serial.println(".");

  Serial.print("The Potentiometer duty cycle value is: ");
  Serial.print(DutyCycle);
  Serial.println(".");

  Serial.print("The Potentiometer duty cycle percentage is ");
  Serial.print(percentValue);
  Serial.println("%.");

  Serial.println("");
  
  delay(1000);
}
