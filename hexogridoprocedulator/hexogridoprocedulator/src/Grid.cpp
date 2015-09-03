#include "Grid.h"

#include <cmath>

  void Grid::draw(shared_ptr<RenderWindow> window) {
    for(auto hexes : hexgrid)
      for (auto hex : hexes)
        window->draw(hex->hex);
  }

  Grid::Grid(int w, int h) {
    hexgrid.resize(w);
    CircleShape hex = CircleShape(50,6);
    float hexHeight = hex.getLocalBounds().height;
    float hexWidth = hex.getLocalBounds().width;
    float hexSide = hexHeight / sqrt(3);
    float hexDistance = hexHeight /2.f - hexSide / 2.f;
    for(int i = 0; i < w; ++i)
      for (int j = 0; j < h; ++j) {
        if (i%2 == 0)
          hexgrid[i].emplace_back(new Hex( (i + 1) * (hexHeight, (j + 1) * hexWidth) );
        else
          hexgrid[i].emplace_back(new Hex( (i + 1) * (hexHeight - hexDistance, (j + 1) * hexWidth + hexWidth / 2.f) );
      }
  }

  Grid::~Grid() {}