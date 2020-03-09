#define CLK1 9;
#define DT1 8;
#define CLK2 11;
#define DT2 10;

int RotPosition = 0;
int rotation;
int value;
bool LeftRight;
void setup()
{
  Serial.begin(9600);
  pinMode(CLK1, INPUT);
  pinMode(DT1, INPUT);
  rotation = digitalRead(CLK1);
}

void loop()
{
  value = digitalRead(CLK);
  s if (value != rotation)
  { // we use the DT pin to find out which way we turning.
    if (digitalRead(DT) != value)
    { // Clockwise
      RotPosition++;
      LeftRight = true;
    }
    else
    { //Counterclockwise
      LeftRight = false;
      RotPosition--;
    }
    if (LeftRight)
    { // turning right will turn on red led.
      Serial.println("clockwise");
      digitalWrite(RedLed, HIGH);
      digitalWrite(GreenLed, LOW);
    }
    else
    { // turning left will turn on green led.
      Serial.println("counterclockwise");
      digitalWrite(RedLed, LOW);
      digitalWrite(GreenLed, HIGH);
    }
    Serial.print("Encoder RotPosition: ");
    Serial.println(RotPosition);
    // this will print in the serial monitor.
  }
  rotation = value;
}
