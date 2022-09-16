int LedPin = 3;
  
void setup()
{
  pinMode(LedPin, OUTPUT);
}

void loop()
{
  for(int i=0;i<255;i++)
  {
    analogWrite(LedPin, i);
    delay(5);
  }
  for(int i=255;i>0;i--)
  {
   analogWrite(LedPin, i);
    delay(5);
  }
}
