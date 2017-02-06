#ifndef LEDMatrix8x8_h
#define LEDMatrix8x8_h

#include <Arduino.h>

class LEDMatrix8x8 {
private:
  int matrixIn[2][8];
  char COL = 0,
       ROW = 1,
       COLUMN_FREEZE_PERIOD = 0,
       previousColumn = 0;

  void switchOffColumn(char);
  void setRows(char, byte[]);
  void switchOnColumn(char);

public:
  LEDMatrix8x8(int[][8]);
  void draw(byte[]);
  void setup();

private:
  void _pinMode(char, bool);
  void _digitalWrite(char, bool);
  void _delay(int);
};

#endif
