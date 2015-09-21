const int button = 13;
const int motor = 8;
int delayTime = 0;

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  if(digitalRead(button) == HIGH)
  {
  	delayTime = random(8, 15);
  	delayTime *= 1000;
  	
    digitalWrite(motor, HIGH);
    delay(delayTime);
    digitalWrite(motor, LOW);
  }
  else
  {
   digitalWrite(motor, LOW); 
  }
}
