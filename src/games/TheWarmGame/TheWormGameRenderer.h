#ifndef TheWormGameRenderer_h
#define TheWormGameRenderer_h

#include "TheWormGame.h"
#include "models/Worm.h"
#include "models/ObstaclesCollection.h"

class TheWormGameRenderer
{
public:
  // TheWormGameRenderer();
  // ~TheWormGameRenderer();
  void render(TheWormGame, byte [8]);
private:
  void renderWorm(Worm, byte [8]);
  void renderObstacles(ObstaclesCollection, byte [8]);
};

#endif
