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
  if (isMoving != DOWN)
  {
    pullTheTale();
    body[0][Y]--;
    isMoving = UP;
  }
  else
    moveDown();
}

void Snake::moveRight()
{
  if (isMoving != LEFT)
  {
    pullTheTale();
    body[0][X]++;
    isMoving = RIGHT;
  }
  else
    moveLeft();
}

void Snake::moveDown()
{
  if (isMoving != UP)
  {
    pullTheTale();
    body[0][Y]++;
    isMoving = DOWN;
  }
  else
    moveUp();

}

void Snake::moveLeft()
{
  if (isMoving != RIGHT)
  {
    pullTheTale();
    body[0][X]--;
    isMoving = LEFT;
  }
  else
    moveRight();
}

void Snake::increment()
{
  length++;
}
