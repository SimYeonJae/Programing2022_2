#define C 262 // 도 
#define D 294 // 레 
#define E 330 // 미 
#define F 349 // 파 
#define G 392 // 솔 
#define A 440 // 라 
#define B 494 // 시 
int RedPin = 9; //빨간색 LED지정
int sensor = A0;
int sensorValue; //
int piezoPin = 8;
int tempo = 200;
int notes[25] = { G, G, A, A, G, G, E, G, G, E, E, D, G, G, A, A, G, G, E, G, E, D, E, C }; 

void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  pinMode (piezoPin, OUTPUT); 
}

void loop()
{
  sensorValue = analogRead(sensor);
  Serial.println(sensorValue);
  
  if(sensorValue <= 0)
  {
    digitalWrite(RedPin,LOW);
  }
  else
  {
    digitalWrite(RedPin,HIGH);
    for (int i = 0; i < 12; i++) { 
    tone (piezoPin, notes[ i ], tempo); 
    delay (300); 
  } 
  delay(100); // 멜로디 중간에 짧게 멈추는 용도 

  for (int i = 12; i < 25; i++) { 
    tone (piezoPin, notes[ i ], tempo); 
    delay(300); 
  }
  }
}
