#include "LEDMatrix8x8.h"

LEDMatrix8x8::LEDMatrix8x8(int cathodsAndAnods[][8]) {
  for (char i = 0; i < 2; i++)
    for (char j = 0; j < 8; j++)
      matrixIn[i][j] = cathodsAndAnods[i][j];
}

void LEDMatrix8x8::setup() {
  for (char i = 0; i < 8; i++) {
    _pinMode(matrixIn[COL][i], OUTPUT);
    _pinMode(matrixIn[ROW][i], OUTPUT);
  }
}

void LEDMatrix8x8::draw(byte pattern[]) {
  for (char column = 0; column < 8; column++) {
    switchOffColumn(previousColumn);
    setRows(column, pattern);
    switchOnColumn(column);
    previousColumn = column;
    _delay(COLUMN_FREEZE_PERIOD);
  }
}

void LEDMatrix8x8::switchOffColumn(char column) {
  _digitalWrite(matrixIn[COL][column], 1);
}

void LEDMatrix8x8::setRows(char column, byte pattern[]) {
  for (char row = 0; row < 8; row++) {
    bool value = (pattern[row] >> (7 - column)) & 0b00000001;
    _digitalWrite(matrixIn[ROW][row], value);
  }
}

void LEDMatrix8x8::switchOnColumn(char column) {
  _digitalWrite(matrixIn[COL][column], 0);
}
