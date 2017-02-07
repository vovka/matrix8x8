#include "BinaryMatrixOperations.h"

void BinaryMatrixOperations::rotateCounterClockwise(unsigned char world[])
{
  unsigned char tmp[8];
  for (unsigned char i = 0; i < 8; i++)
    tmp[i] = world[i];

  for (unsigned char i = 0; i < 8; i++)
    for (unsigned char j = 0; j < 8; j++)
    {
      world[i] = world[i] << 1;
      world[i] = world[i] | ((tmp[j] & (1 << i)) >> i);
    }
}
