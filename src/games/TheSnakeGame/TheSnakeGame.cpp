#include "TheSnakeGame.h"

void TheSnakeGame::play(unsigned char state)
{
  if (!stop && isTimeToChange())
  {
    tickTimeQuantum(state);
    if (false == checkCollisions())
      stop = true;
  }
}

void TheSnakeGame::tickTimeQuantum(unsigned char state)
{
  switch (state)
  {
    case UP:
      snake.moveUp();
      break;
    case RIGHT:
      snake.moveRight();
      break;
    case DOWN:
      snake.moveDown();
      break;
    case LEFT:
      snake.moveLeft();
      break;
    default:
      break;
  }
}

bool TheSnakeGame::isTimeToChange()
{
  if (_millis() - prevTime > period)
  {
    prevTime = _millis();
    return true;
  }
  else
  {
    return false;
  }
}

int TheSnakeGame::_millis()
{
  return millis();
}

bool TheSnakeGame::checkCollisions()
{
  checkObstacleCollision();
  return checkSelfCollision() && checkEdgesCollision();
}

void TheSnakeGame::checkObstacleCollision()
{
  for (char i = 0; i < 2; i++)
    if (snake.body[0][X] == obstaclesCollection.obstacles[i][X] && 
        snake.body[0][Y] == obstaclesCollection.obstacles[i][Y])
    {
      snake.increment();
      obstaclesCollection.create(i);
      return;
    }
}

bool TheSnakeGame::checkSelfCollision()
{
  for (char i = 1; i < snake.length; i++)
    if (snake.body[0][X] == snake.body[i][X] &&
        snake.body[0][Y] == snake.body[i][Y])
      return false;
  return true;
}

bool TheSnakeGame::checkEdgesCollision()
{
  if (snake.body[0][X] < 0 || snake.body[0][Y] < 0 ||
      snake.body[0][X] > 7 || snake.body[0][Y] > 7)
    return false;
  return true;
}
