int ledGreen = 13;
int ledRed = 12;
int inputPin = 7;
int val = 0;

void setup()
{
    pinMode(ledGreen,OUTPUT);
    pinMode(ledRed,OUTPUT);
    pinMode(inputPin,INPUT);
    Serial.begin(9600);
}

void loop()
{
  val = digitalRead(inputPin);
    
  if(val == HIGH){
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
  }
  else{
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
  }  
}
