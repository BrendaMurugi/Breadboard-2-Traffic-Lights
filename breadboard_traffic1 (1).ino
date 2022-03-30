int Green = 13;
int Yellow = 12;
int Red = 11;
int Green2 = 1;
int Yellow2 = 2;
int Red2 = 3;

void setup()
{
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Green2, OUTPUT);
  pinMode(Yellow2, OUTPUT);
  pinMode(Red2, OUTPUT);
}

void loop()
{
  digitalWrite(Green, HIGH);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Yellow2, LOW);
  delay(9000);
  
  digitalWrite(Green, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, HIGH);
  digitalWrite(Yellow2, HIGH);
  delay(2000);
  
  digitalWrite(Green2, HIGH);
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Yellow2, LOW);
  delay(9000);
}