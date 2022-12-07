#include <Servo.h>
#define MINDEG 0
#define MAXDEG 180
#define MINA0 0
#define MAXA0 1023

Servo servo;
int potPin = 0;
int val;
int REDLED = 2;
int BLUELED = 3;


void setup()
{
  servo.attach(9);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(0);
  val = map(val,0, 1023, 0, 179);
  Serial.println(val);
  Serial.print("deg :  ");
  servo.write(val);
  delay(50);
  
  if(val < 90)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
  }
  
  else if(val < 180)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
     
  }
}
