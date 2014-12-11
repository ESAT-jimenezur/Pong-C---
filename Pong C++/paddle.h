
#ifndef __PADDLE_H__
#define __PADDLE_H__

#include "object.h"

const float kPaddleMaxVelocity = 0.005f;

class Paddle : public Object{



public:
  Paddle();
  ~Paddle();

  void update();

private:
  

};


#endif __PADDLE_H__