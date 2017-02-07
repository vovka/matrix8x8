#include "BinaryMatrixOperations.h"

void BinaryMatrixOperations::rotateCounterClockwise(unsigned char world[])
{
  unsigned char tmp[8];
  for (unsigned char i = 0; i < 8; i++)
    for (unsigned char j = 0; j < 8; j++)
    {
      tmp[i] = tmp[i] << 1;
      tmp[i] = tmp[i] | ((pattern[j] & (1 << i)) >> i);
    }
  world = tmp;
}
