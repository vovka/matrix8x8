#include "TheSnakeGameRenderer.h"

void TheSnakeGameRenderer::render(TheSnakeGame game, byte world[8])
{
  for (byte i = 0; i < 8; i++)
    world[i] = 0;
  renderSnake(game.snake, world);
  renderObstacles(game.obstaclesCollection, world);
}

void TheSnakeGameRenderer::renderSnake(Snake snake, byte world[8])
{
  for (int i = 0; i < snake.length; i++)
  {
    world[
      snake.body[i][Snake::Y]
    ] |= (1 << (7 - 
      snake.body[i][Snake::X]
    ));
  }
}

void TheSnakeGameRenderer::renderObstacles(ObstaclesCollection obstaclesCollection, byte world[8])
{
  for (int i = 0; i < 2; i++)
  {
    world[
      obstaclesCollection.obstacles[i][ObstaclesCollection::Y]
    ] |= (1 << (7 - 
      obstaclesCollection.obstacles[i][ObstaclesCollection::X]
    ));
  }
}
