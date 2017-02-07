#include "ObstaclesCollection.h"

ObstaclesCollection::ObstaclesCollection()
{
  create(0);
  create(1);
}

void ObstaclesCollection::create(char i)
{
  obstacles[i][X] = random(8);
  obstacles[i][Y] = random(8);
}
