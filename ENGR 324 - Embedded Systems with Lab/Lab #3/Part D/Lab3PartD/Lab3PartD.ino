void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (float t = 0.00; ((-2 * PI) <= t) & (t <= (2 * PI)); t = t + .01){

    float Equation1 = 2 * cos((3 * t) - (PI / 3));
    float Equation2 = (sin(t * PI)) / t;

    Serial.print("t:");
    Serial.print(t);
    Serial.println('\t');

    Serial.print("Equation1:");
    Serial.print(Equation1);
    Serial.println('\t');
    
    Serial.print("Equation2:");
    Serial.print(Equation2); 
    Serial.println('\t');

    Serial.print("PositiveConstant:");
    Serial.print(2 * PI); 
    Serial.println('\t');
   
    Serial.print("NegativeConstant:");
    Serial.print(-2 * PI); 
    Serial.println('\t');

    Serial.print("NegativeConstant:");
    Serial.print(-2 * PI); 
    Serial.println('\t');
    
    delay(100);
  }
}