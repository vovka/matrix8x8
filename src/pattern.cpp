#include "pattern.h"

// bool pattern[8][8] = {
//   { 0, 1, 1, 0, 0, 1, 1, 0 },
//   { 1, 0, 0, 1, 1, 0, 0, 1 },
//   { 1, 0, 0, 0, 1, 0, 0, 1 },
//   { 1, 0, 0, 0, 0, 0, 0, 1 },
//   { 0, 1, 0, 0, 0, 0, 0, 1 },
//   { 0, 0, 1, 0, 0, 0, 1, 0 },
//   { 0, 0, 0, 1, 0, 1, 0, 0 },
//   { 0, 0, 0, 0, 1, 0, 0, 0 }
// };

void Pattern::get(char name[], unsigned char pattern[]) { 
  pattern[0] = 0b01100011;
  pattern[1] = 0b10010100;
  pattern[2] = 0b10001000;
  pattern[3] = 0b10000000;
  pattern[4] = 0b01000001;
  pattern[5] = 0b00100010;
  pattern[6] = 0b00010100;
  pattern[7] = 0b00001000;
  // pattern[0] = 0b00000000;
  // pattern[1] = 0b00000001;
  // pattern[2] = 0b00000000;
  // pattern[3] = 0b00000000;
  // pattern[4] = 0b00000000;
  // pattern[5] = 0b00000000;
  // pattern[6] = 0b00000001;
  // pattern[7] = 0b00000000;
}
