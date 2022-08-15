# Binaries-with-LEDs
Making a Binary Counter and decimal to binary converter using LEDs

In This project, I made a 6-bit Binaries counter using LEDs, and a decimal to binary converter.

**You will need:**
* 4 x LEDs
* 4 x 330 Ohm Resistors
* Jumper Wires
* Arduino Board
* BreadBoard

**The Circuit:**

![Decimal To Binary LED converter](https://user-images.githubusercontent.com/109004035/184699726-3398f108-7f6f-4292-b2ce-afd864e953f1.png)

From the circuit you can see that I'm using the pins from 5-10.

**As I'm using 6 LEDs, this is representing a 6-bits, and can be modified adding or removing LEDs to the cercuit and making minor changes to the codes ( fixing the range of numbers and identifying your change in pins )**

## LED Binary counter

For a 6-Bits, it will be able to save or register up to 64, so the counting will be from 0-63.
a led LED represent a 1 and an off LED represents 0 . 

**here is the Code:**
```
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
  for (byte counter =0;counter<=63; counter++)
  {
    displayBinary(counter);
    delay(500);
  }
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
```
You can use the simulation I made for testing [Here](https://www.tinkercad.com/things/iIddg7pFbi3-led-binary-counter/editel)
## LED Decimal to binary converter

For this code, you will have to input your decimal number manually in the code , here : `displayBinary(63);`

**Here is the Code:**
```
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
```
You can use the simulation I made for testing [Here](https://www.tinkercad.com/things/8aIIds2xgAY-decimal-to-binary-led-converter/editel)
