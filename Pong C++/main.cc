#include <ESAT/window.h>
#include <ESAT/draw.h>
#include <ESAT/sprite.h>
#include <ESAT/input.h>

#include <stdio.h>

#include "object.h"
#include "paddle.h"
#include "stars.h"


int ESAT::main(int argc, char **argv) {

  ESAT::WindowInit(1024, 768);

  Paddle p1, p2;
  p1.init("paddle.png", 0);
  p2.init("paddle.png", 1000);
  p1.pos_y_ = 514.0f;
  p2.pos_y_ = 514.0f;
  
  Star stars[200];
  for (unsigned int i = 0; i < 200; ++i){
    stars[i].init();
  }

  PLine plines[200];
  for (unsigned int i = 0; i < 200; ++i){
    plines[i].init();
  }

  while (ESAT::WindowIsOpened()){
    ESAT::DrawClear(0, 0, 0);

    for (unsigned int i = 0; i < 200; ++i){
      stars[i].update();
    }
    for (unsigned int i = 0; i < 200; ++i){
      plines[i].update();
    }
    p1.update();
    p2.update();

    for (unsigned int i = 0; i < 200; ++i){
      stars[i].draw();
    }
    for (unsigned int i = 0; i < 200; ++i){
      plines[i].draw();
    }
    p1.draw();
    p2.draw();

    ESAT::WindowFrame();
  }

  return 0;
}