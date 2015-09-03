#pragma once
#include "Includes.h"
#include "Hex.h"

class Grid {
private:
  int width, height;
public:
  vector <vector <Hex*>> hexgrid;

  void draw(shared_ptr<RenderWindow>);
  Grid(int, int);
  virtual ~Grid();
};