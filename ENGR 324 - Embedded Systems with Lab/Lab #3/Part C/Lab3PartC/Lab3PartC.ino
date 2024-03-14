int DutyCycle;
int UserInput;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Please enter a value between 0 and 100.");
  while(Serial.available() <= 0){
    int UserInput = Serial.parseInt();
    DutyCycle = map(UserInput, 0, 100, 0, 255);
    analogWrite(6, DutyCycle);
    if (DutyCycle > 0){
      Serial.print("Input Provided:  ");
      Serial.println(UserInput);

      Serial.print("Duty Cycle:  ");
      Serial.println(DutyCycle);
  
      Serial.flush();  
      delay(1000);
      return(12);
    }
  }
}