#include "TheWormGameRenderer.h"

void TheWormGameRenderer::render(TheWormGame game, byte world[8])
{
  for (byte i = 0; i < 8; i++)
    world[i] = 0;
  renderWorm(game.worm, world);
  renderObstacles(game.obstaclesCollection, world);
}

void TheWormGameRenderer::renderWorm(Worm worm, byte world[8])
{
  for (int i = 0; i < worm.length; i++)
  {
    world[
      worm.body[i][Worm::Y]
    ] |= (1 << (7 - 
      worm.body[i][Worm::X]
    ));
  }
}

void TheWormGameRenderer::renderObstacles(ObstaclesCollection obstaclesCollection, byte world[8])
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
