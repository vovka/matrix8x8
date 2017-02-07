#include "Snake.h"

// Snake::Snake()
// {
// }

void Snake::pullTheTale()
{
  for (char i = length - 1; i > 0; i--)
  {
    body[i][X] = body[i - 1][X];
    body[i][Y] = body[i - 1][Y];
  }
}

void Snake::moveUp()
{
  pullTheTale();
  body[0][Y]--;
}

void Snake::moveRight()
{
  pullTheTale();
  body[0][X]++;
}

void Snake::moveDown()
{
  pullTheTale();
  body[0][Y]++;
}

void Snake::moveLeft()
{
  pullTheTale();
  body[0][X]--;
}

void Snake::increment()
{
  length++;
}
