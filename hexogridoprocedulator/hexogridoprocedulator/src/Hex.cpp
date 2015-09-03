#include "Hex.h"


  Hex::Hex(float x, float y) {

    hex = CircleShape(50,6);
    hex.setOutlineThickness(2);
    hex.setOrigin(hex.getLocalBounds().width / 2.f, hex.getLocalBounds().height / 2.f);
    hex.rotate(90);
    // hex.setPosition(pos_x,pos_y);
    hex.setPosition(x,y);
    hex.setFillColor(Color::Green);
    hex.setOutlineColor(Color::Yellow);
  }

  Hex::~Hex() {}