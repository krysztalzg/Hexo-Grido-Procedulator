#include "Hex.h"


  Hex::Hex(float x, float y) {
    pos_x = x;
    pos_y = y;

    hex = CircleShape(50,6);
    hex.setPosition(pos_x,pos_y);
    hex.setFillColor(Color::Green);
    hex.setOutlineThickness(2);
    hex.setOutlineColor(Color::Yellow);
  }

  Hex::~Hex() {}