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

  accel_x_ = ((rand() % 10) + 1) * 0.001f;
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



//PLine class

PLine::PLine(){
  red_decrease_ = 0.01f;
  red_ = 255.0f;
}

void PLine::init(){
  Object::init(NULL);

  red_ = 255.0f;

  pos_x_ = rand() % 1024;
  pos_y_ = 768.0f;

  accel_x_ = 0.0f;
  accel_y_ = -((rand() % 10) + 1) * 0.001f;
}

void PLine::update(){
  Object::update();

  if ((pos_y_ <= 0.0f) || (red_ <= 0.0f)){
    init();
  }

  red_ -= red_decrease_;
}

void PLine::draw(){
  ESAT::DrawSetStrokeColor((unsigned char) red_, 255, 255 + 1, 255);
  ESAT::DrawLine(pos_x_, pos_y_, pos_x_ + 10, pos_y_);
}