#include "TheWormGame.h"

void TheWormGame::play(unsigned char state)
{
  if (isTimeToChange())
  {
    tickTimeQuantum(state);
    checkCollisions();
  }
}

void TheWormGame::tickTimeQuantum(unsigned char state)
{
  switch (state)
  {
    case UP:
      worm.moveUp();
      break;
    case RIGHT:
      worm.moveRight();
      break;
    case DOWN:
      worm.moveDown();
      break;
    case LEFT:
      worm.moveLeft();
      break;
    default:
      break;
  }
}

bool TheWormGame::isTimeToChange()
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

int TheWormGame::_millis()
{
  return millis();
}

bool TheWormGame::checkCollisions()
{
  checkObstacleCollision();
  return checkSelfCollision();
}

void TheWormGame::checkObstacleCollision()
{
  for (char i = 0; i < 2; i++)
    if (worm.body[0][X] == obstaclesCollection.obstacles[i][X] && 
        worm.body[0][Y] == obstaclesCollection.obstacles[i][Y])
    {
      worm.increment();
      obstaclesCollection.create(i);
      return;
    }
}

bool TheWormGame::checkSelfCollision()
{
  return true;
}
