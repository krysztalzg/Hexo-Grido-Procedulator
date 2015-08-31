#pragma once
#include "Includes.h"
#include "Hex.h"

class Grid {
private:
  int width, height;
public:
  vector <vector <Hex*>> hexgrid;

  Grid(int, int);
  virtual ~Grid();
};