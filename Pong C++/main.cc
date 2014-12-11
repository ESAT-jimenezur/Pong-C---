#include <ESAT/window.h>
#include <ESAT/draw.h>
#include <ESAT/sprite.h>
#include <ESAT/input.h>

#include "object.h"

int ESAT::main(int argc, char **argv) {

  ESAT::WindowInit(640, 480);

  Object o;
  o.init("texture.png");
  o.pos_y_ = 240.0f;
  o.accel_x_ = 0.0001f;

  while (ESAT::WindowIsOpened()){
    ESAT::DrawClear(0, 0, 0);
    ESAT::DrawClear(0, 0, 0);
    // single line...
    ESAT::DrawSetStrokeColor(255, 255, 255);
    ESAT::DrawLine(0, 0, 640, 480);
    o.update();
    o.draw();

  }

  return 0;
}