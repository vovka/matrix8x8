#include "Worm.h"

// Worm::Worm()
// {
// }

void Worm::pullTheTale()
{
  for (char i = length - 1; i > 0; i--)
  {
    body[i][X] = body[i - 1][X];
    body[i][Y] = body[i - 1][Y];
  }
}

void Worm::moveUp()
{
  pullTheTale();
  body[0][Y]--;
}

void Worm::moveRight()
{
  pullTheTale();
  body[0][X]++;
}

void Worm::moveDown()
{
  pullTheTale();
  body[0][Y]++;
}

void Worm::moveLeft()
{
  pullTheTale();
  body[0][X]--;
}

void Worm::increment()
{
  length++;
}
