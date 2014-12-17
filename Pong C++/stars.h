#ifndef __STARS_H__
#define __STARS_H__

#include "object.h"

class Star : public Object{
public:
  float alpha_decrease_;
  float alpha_;

  Star();
  ~Star(){};

  

  void init();
  void update();
  void draw();
};

class PLine : public Object{
public:
  float red_decrease_;
  float red_;

  PLine();
  ~PLine(){};

  void init();
  void update();
  void draw();
};

#endif __STARS_H__