#define PinBuzzer 4

void suonoApertura()
{
  digitalWrite(PinBuzzer, HIGH); // sets the digital pin 13 on
  delay(20);            // waits for a second
  digitalWrite(PinBuzzer, LOW);  // sets the digital pin 13 off
  delay(100);  
  digitalWrite(PinBuzzer, HIGH); 
  delay(20);
  digitalWrite(PinBuzzer, LOW);
}
void suonoChiusura()
{
  digitalWrite(PinBuzzer, HIGH); // sets the digital pin 13 on
  delay(20);            // waits for a second
  digitalWrite(PinBuzzer, LOW);
}
