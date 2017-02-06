// Arduino specific

#include "arduino.h"

void LEDMatrix8x8::_pinMode(char pin, bool mode) {
  pinMode(pin, mode);
}

void LEDMatrix8x8::_digitalWrite(char pin, bool value) {
  digitalWrite(pin, value);
}

void LEDMatrix8x8::_delay(int millis) {
  delay(millis);
}
