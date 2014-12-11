
#ifndef __OBJECT_H__
#define __OBJECT_H__

#include <ESAT/sprite.h>

class Object{
  
public:
  float pos_x_;
  float pos_y_;

  int id_;

  float accel_x_;
  float accel_y_;

  float vel_x_;
  float vel_y_;
  
  ESAT::SpriteHandle sprite_;

  bool enabled_;

  bool collisionable_;

  float width_;
  float height_;
  
  Object();
  ~Object();

  void init(const char* sprite_name);
  void update();
  void draw();

private:
  static int object_counter_;
  Object(const Object& other){}
};

#endif __OBJECT_H__