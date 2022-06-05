const int poten = A3; 
      int var;

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  var = analogRead(poten);
  analogWrite(6,var);
  digitalWrite(3, HIGH);
  delay(100); 
  digitalWrite(3, LOW);
  delay(100); 
}