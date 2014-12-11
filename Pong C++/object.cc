

#include "object.h"

int Object::object_counter_ = 0;

Object::Object(){
  pos_x_ = 0.0f;
  pos_y_ = 0.0f;

  id_ = -1;

  accel_x_ = 0.0f;
  accel_y_ = 0.0f;

  vel_x_ = 0.0f;
  vel_y_ = 0.0f;

  enabled_ = -1;
  
  collisionable_ = false;

  height_ = 0.0f;
  width_ = 0.0f;
}

Object::~Object(){
  if (sprite_ > 0){
    ESAT::SpriteRelease(sprite_);
  }
}



void Object::init(const char* sprite_name){
  id_ = object_counter_;
  ++object_counter_;

  sprite_ = ESAT::SpriteFromFile(sprite_name);
  width_ = ESAT::SpriteWidth(sprite_name);
  height_ = ESAT::SpriteHeight(sprite_name);
}

