#ifndef TheSnakeGameRenderer_h
#define TheSnakeGameRenderer_h

#include "TheSnakeGame.h"
#include "models/Snake.h"
#include "models/ObstaclesCollection.h"

class TheSnakeGameRenderer
{
public:
  // TheSnakeGameRenderer();
  // ~TheSnakeGameRenderer();
  void render(TheSnakeGame, byte [8]);
private:
  void renderSnake(Snake, byte [8]);
  void renderObstacles(ObstaclesCollection, byte [8]);
};

#endif
