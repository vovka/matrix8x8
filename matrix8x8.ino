#include "src/LEDMatrix8x8/LEDMatrix8x8.h"
#include "src/LEDMatrix8x8/arduino.h"
#include "src/BinaryMatrixOperations.h"
#include "src/games/TheSnakeGame/TheSnakeGame.h"
#include "src/games/TheSnakeGame/TheSnakeGameRenderer.h"
#include "src/games/UserController.h"

LEDMatrix8x8 screen(new int[2][8] { {13, 12, 0, 4, A5, 2, 9,  10},
                                    { 3,  8, 5, 7,  1, 6, 11, A4} });
BinaryMatrixOperations binaryMatrixOperations;
byte world[8], scene[8];
TheSnakeGame game;
TheSnakeGameRenderer renderer;
UserController userController;

void setup() {
  screen.setup();
}

void loop() {
  userController.readInput( digitalRead(A0),
                            digitalRead(A1),
                            digitalRead(A2),
                            digitalRead(A3) );
  game.play(userController.state);
  renderer.render(game, world);
  binaryMatrixOperations.rotateCounterClockwise(world);
  intensity.filter(world);
  screen.draw(world);
}
