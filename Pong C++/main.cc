#include <ESAT/window.h>
#include <ESAT/draw.h>
#include <ESAT/sprite.h>
#include <ESAT/input.h>

#include "object.h"

int ESAT::main(int argc, char **argv) {

  ESAT::WindowInit(1024, 768);

  Object o;
  o.init("texture.png");
  o.pos_y_ = 240.0f;
  o.accel_x_ = 0.0001f;

  while (ESAT::WindowIsOpened()){
    ESAT::DrawClear(0, 0, 0);
    o.update();
    o.draw();

  }

  return 0;
}