#include "Grid.h"

  Grid::Grid(int w, int h) {
    hexgrid.resize(w);

    for(int i = 0; i < w; ++i) {
      for (int j = 0; j < h; ++j) {
        hexgrid[i].emplace_back(new Hex(i*100.f, j*100.f));
      }
    }
  }

  Grid::~Grid() {}