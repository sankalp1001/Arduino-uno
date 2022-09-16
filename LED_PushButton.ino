int SwitchPin=2 ;
  int LedPin=13  ;

void setup()
{
  pinMode(SwitchPin,INPUT);
  pinMode(LedPin,OUTPUT);
}

void loop()
{
 if(digitalRead(SwitchPin)==HIGH)
 {
   digitalWrite(LedPin,HIGH);
 }
  else
  {
    digitalWrite(LedPin, LOW);
  } 
}
