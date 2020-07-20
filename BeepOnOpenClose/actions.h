#define PinHorn 4

void openSound()
{
  digitalWrite(PinHorn, HIGH);
  delay(20);
  digitalWrite(PinHorn, LOW);
  delay(100);
  digitalWrite(PinHorn, HIGH);
  delay(20);
  digitalWrite(PinHorn, LOW);
}
void closeSound()
{
  digitalWrite(PinHorn, HIGH);
  delay(20);
  digitalWrite(PinHorn, LOW);
}
