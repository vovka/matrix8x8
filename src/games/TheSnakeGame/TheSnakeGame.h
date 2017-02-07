#ifndef TheSnakeGame_h
#define TheSnakeGame_h

#include <Arduino.h>
#include "models/Snake.h"
#include "models/ObstaclesCollection.h"

class TheSnakeGame
{
  static const char    UP = 1,
                    RIGHT = 2,
                     DOWN = 3,
                     LEFT = 4,
                     X = 0,
                     Y = 1;
public:
  // TheSnakeGame();
  // ~TheSnakeGame();
  void play(unsigned char);
  Snake snake;
  ObstaclesCollection obstaclesCollection;
private:
  bool isTimeToChange();
  int _millis();
  void tickTimeQuantum(unsigned char);
  bool checkCollisions();
  void checkObstacleCollision();
  bool checkSelfCollision();
  bool checkEdgesCollision();
  int prevTime = 0, period = 200;
  bool stop = false;
};

#endif
