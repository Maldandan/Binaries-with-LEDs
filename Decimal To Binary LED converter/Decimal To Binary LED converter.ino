int ledPin[] = {5,6,7,8,9,10};

void setup()
{
  for (int i =0;i<6;i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop()
{
  displayBinary(63);
}

void displayBinary(byte numToShow)
{
  for (int i =0;i<6;i++)
  {
    if (bitRead(numToShow, i)==1)
    {
      digitalWrite(ledPin[i], HIGH);
    }
    else
    {
      digitalWrite(ledPin[i], LOW);
    }
  }

}