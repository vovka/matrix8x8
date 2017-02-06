#include "UserController.h"

void UserController::readInput(bool up, bool right, bool down, bool left)
{
  if (up)
    state = 1;
  else
    if (right)
      state = 2;
    else
      if (down)
        state = 3;
      else
        if (left)
          state = 4;
}
