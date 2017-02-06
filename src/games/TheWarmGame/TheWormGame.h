#ifndef TheWormGame_h
#define TheWormGame_h

#include <Arduino.h>
#include "models/Worm.h"
#include "models/ObstaclesCollection.h"

class TheWormGame
{
  static const char    UP = 1,
                    RIGHT = 2,
                     DOWN = 3,
                     LEFT = 4,
                     X = 0,
                     Y = 1;
public:
  // TheWormGame();
  // ~TheWormGame();
  void play(unsigned char);
  Worm worm;
  ObstaclesCollection obstaclesCollection;
private:
  bool isTimeToChange();
  int _millis();
  void tickTimeQuantum(unsigned char);
  bool checkCollisions();
  void checkObstacleCollision();
  bool checkSelfCollision();
  int prevTime = 0, period = 200;
};

#endif
