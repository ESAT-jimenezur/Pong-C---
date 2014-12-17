#include "stars.h"
#include <stdlib.h>
#include <ESAT\draw.h>

Star::Star(){
  alpha_decrease_ = 0.1f;
  alpha_ = 255.0f;
}

void Star::init(){
  Object::init(NULL);
  
  alpha_ = 255.0f;

  pos_x_ = 0.0f;
  pos_y_ = rand() % 1024;

  accel_x_ = ((rand() % 100) + 1) * 0.001f;
  accel_y_ = 0.0f;
}

void Star::update(){
  Object::update();

  if ((pos_x_ > 1024) || (alpha_ <= 0.0f)){
    init();
  }

  alpha_ -= alpha_decrease_;
}

void Star::draw(){
  ESAT::DrawSetStrokeColor(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1, (unsigned char)alpha_);
  ESAT::DrawLine(pos_x_, pos_y_, pos_x_ + 10, pos_y_);
}