#pragma once
#include "Includes.h"

class Hex {
private:
  float pos_x, pos_y;
  static int height, width, side;
public:
  CircleShape hex;

  Hex(float, float);
  virtual ~Hex();
};