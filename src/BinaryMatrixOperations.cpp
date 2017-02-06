#include "BinaryMatrixOperations.h"

void BinaryMatrixOperations::rotateCounterClockwise(unsigned char pattern[], unsigned char scene[])
{
  for (unsigned char i = 0; i < 8; i++)
    for (unsigned char j = 0; j < 8; j++)
    {
      scene[i] = scene[i] << 1;
      scene[i] = scene[i] | ((pattern[j] & (1 << i)) >> i);
    }
}
