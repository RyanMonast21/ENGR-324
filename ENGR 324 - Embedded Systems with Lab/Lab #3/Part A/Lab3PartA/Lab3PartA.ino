const int Vout = A0;
float ADCValue = 0;
float VoutRead = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Vout, INPUT);

  ADCValue = analogRead(Vout);
  VoutRead = (5.0/1024.0) * ADCValue;

  Serial.println("The theoretical claculated output voltage is 3.31 Volts.");

  Serial.print("Its ADC value is ");
  Serial.print(ADCValue);
  Serial.println(" Volts. ");

  Serial.print("The actual measured output analog value is ");
  Serial.print(VoutRead);
  Serial.println(" Volts.");
}

void loop(){
}