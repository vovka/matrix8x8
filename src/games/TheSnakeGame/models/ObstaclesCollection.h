#ifndef ObstaclesCollection_h
#define ObstaclesCollection_h

#include <Arduino.h>

class ObstaclesCollection
{
public:
  static const char X = 0, Y = 1;
  ObstaclesCollection();
  // ~ObstaclesCollection();
  char obstacles[2][2];
  void create(char);
};

#endif
