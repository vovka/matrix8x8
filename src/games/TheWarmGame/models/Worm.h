#ifndef Worm_h
#define Worm_h

class Worm
{
public:
  static const char X = 0, Y = 1;
  // Worm();
  // ~Worm();
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
};

#endif
