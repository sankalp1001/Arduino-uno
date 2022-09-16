const int LedPin = LED_BUILTIN;
int ledState = LOW;
unsigned long previousMillis = 0; 
const long interval = 1000;
void setup()
{
  pinMode(LedPin,OUTPUT);
}

void loop()
{
 unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
     if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  digitalWrite(LedPin,ledState);
  }
}
