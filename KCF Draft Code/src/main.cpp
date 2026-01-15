#include <loadButtons.h>
#include <loadLEDs.h>

unsigned long timeOut;
bool timeUp = true;
float A1_Timer, A2_Timer;

void setup()
{
  setupButtons();
  setupLED();

  Serial.begin(9600);
}

void loop()
{
  updateButtons();

  if (A1_Tile.pressed())
  {
    Serial.print("A1:255:0:0");
    turnRed();
    timeOut = (long)millis();
    timeUp = false;
  }

  if (A2_Tile.pressed())
  {
    Serial.print("A1:0:255:0");
    turnGreen();
    timeOut = (long)millis();
    timeUp = false;
  }

  if (timeUp == false)
  {
    if ((long)millis() - timeOut > 3000)
    {
      Serial.print("A1:timeout");
      turnBlack();
      timeUp = true;
    }
  }

  if (Serial.read() == 1)
  {
    turnGreen();
  }
}