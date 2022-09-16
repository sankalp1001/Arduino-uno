int LedPin = 13;
int InPin = 2 ;
int val = 0  ;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2,INPUT);
}
void loop(){
  val = digitalRead(InPin);  
  if (val == HIGH) {         
    digitalWrite(LedPin, HIGH);  
  } else {
     digitalWrite(LedPin,LOW); 
  }
}
