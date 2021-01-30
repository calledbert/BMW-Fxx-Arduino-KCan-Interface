#define PinHorn 7

void startEngine()
{
  Serial.println("Apertura");
  digitalWrite(PinHorn, HIGH);
  delay(20);
  digitalWrite(PinHorn, LOW);
  delay(100);
  digitalWrite(PinHorn, HIGH);
  delay(20);
  digitalWrite(PinHorn, LOW);
}
void stopEngine()
{
  digitalWrite(PinHorn, HIGH);
  delay(20);
  digitalWrite(PinHorn, LOW);
  delay(100);
  digitalWrite(PinHorn, HIGH);
  delay(20);
  digitalWrite(PinHorn, LOW);
  delay(100);
  digitalWrite(PinHorn, HIGH);
  delay(20);
  digitalWrite(PinHorn, LOW);
}
