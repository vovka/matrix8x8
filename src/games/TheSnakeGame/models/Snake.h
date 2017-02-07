#ifndef Snake_h
#define Snake_h

class Snake
{
public:
  static const char X = 0, Y = 1;
  // Snake();
  // ~Snake();
  void moveUp();
  void moveRight();
  void moveDown();
  void moveLeft();
  void increment();
  unsigned char length = 2;
  unsigned char body[64][2] = { {1, 4},
                                {2, 4},
                                // {3, 4},
                                // {4, 4},
                                // {5, 4},
                                // {6, 4},
                                // {7, 4},
                              };
private:
  void pullTheTale();
  const char UP = 1,
             RIGHT = 2,
             DOWN = 3,
             LEFT = 4;
  char isMoving = 0;
};

#endif
