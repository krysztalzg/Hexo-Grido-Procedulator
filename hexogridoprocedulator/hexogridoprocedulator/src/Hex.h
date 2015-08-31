#pragma once
#include "Includes.h"

class Hex {
private:
  // float pos_x, pos_y;
  static int height, width, side;
public:
  float pos_x, pos_y;
  CircleShape hex;

  Hex(float, float);
  virtual ~Hex();
};