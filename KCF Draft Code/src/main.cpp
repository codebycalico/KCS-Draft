#include <loadButtons.h>
#include <loadLEDs.h>

unsigned long timeOut;
bool timeUp = true;
float A1_Timer, A2_Timer;
bool gameActive = false;
bool newData = false;
char endMarker = ';';
char serialRead[20];

void recvWithEndMarker();
void showNewData();
void roundOne();
void roundTwo();

void setup()
{
  setupButtons();
  setupLED();

  // replace with cute setup sequence?
  turnBlack();

  Serial.begin(9600);
}

void loop()
{
  updateButtons();

  if ((A1_Tile.pressed() || A2_Tile.pressed()) && gameActive == false)
  {
    Serial.print("s");
    gameActive = true;
  }

  if (gameActive)
  {
    while (Serial.available() == 0)
    {
      // wait if data isn't available yet
    }
  }

  /*if (gameActive)
  {
    recvWithEndMarker();
    showNewData();
  } */

  /*
  if (gameActive)
  {
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
  } */
}

void recvWithEndMarker()
{
  static byte ndx = 0;
  char rc;

  while (Serial.available() > 0 && newData == false)
  {
    Serial.println("serial is avaiable.");
    rc = Serial.read();

    if (rc != endMarker)
    {
      serialRead[ndx] = rc;
      ndx++;
      if (ndx >= 32)
      {
        ndx = 31;
      }
    }
    else
    {
      serialRead[ndx] = '\0';
      ndx = 0;
      newData = true;
    }
  }
}

void showNewData()
{
  if (newData == true)
  {
    turnRed();
    if (serialRead[0] == 'A' && serialRead[1] == '1')
    {
      roundOne();
    }
    else if (serialRead[0] == 'A' && serialRead[1] == '2')
    {
      roundTwo();
    }
    newData = false;
  }
}

void roundOne()
{
  turnRed();

  timeOut = (long)millis();

  if ((long)millis() - timeOut > 5000)
  {
    Serial.print("A1:0");
    return;
  }

  if (A1_Tile.pressed())
  {
    long score = timeOut - (long)millis();
    Serial.print("A1:" + score);
    turnBlack();
    return;
  }
}

void roundTwo()
{
  turnGreen();

  timeOut = (long)millis();

  if ((long)millis() - timeOut > 5000)
  {
    Serial.print("A2:0");
    return;
  }

  if (A2_Tile.pressed())
  {
    long timePassed = timeOut - (long)millis();
    uint8_t score = map(timePassed, 5000, 0, 0, 5);
    Serial.print("A2:" + score);
    turnBlack();
    return;
  }
}