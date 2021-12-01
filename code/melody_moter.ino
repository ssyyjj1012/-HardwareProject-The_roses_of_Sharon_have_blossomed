#include <Servo.h>
Servo myservo;

int mainMelody[] = {330,440,440,440,392,440,440,330,330,392};
int backza[] = {500,150,150,400,350,300,250,250,250,150};

void melody()
{
  for (int i = 0; i < 10; i++) {
    tone(2, mainMelody[i], backza[i]);
    delay(400);
    noTone(2);
  }
}
void setup()
{
   Serial.begin(9600);
   myservo.attach(9);
   myservo.write(0);
}

void loop()
{
  melody();  
  myservo.write(180);
  delay(5000);
  myservo.write(0);
}
