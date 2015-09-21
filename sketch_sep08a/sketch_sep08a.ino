int delayTime = 5;
int button = 2;
int motorPin = 3;

void setup()
{
  pinMode(motorPin, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  while(!Serial);
  Serial.println(delayTime);
  Serial.println(digitalRead(button));
}

void loop()
{
  Serial.println(digitalRead(button));
  Serial.println(delayTime);  

  Serial.println(delayTime);
    
    if(digitalRead(button) == HIGH)
    {
      delayTime = random(3,10);
      delayTime *= 1000;
      
      Serial.println(digitalRead(button));
      Serial.println(delayTime);
      
      analogWrite(motorPin, 80);
      delay(delayTime);
      analogWrite(motorPin, 0);
    }
    else
    {
     analogWrite(motorPin, 0); 
    }
}
