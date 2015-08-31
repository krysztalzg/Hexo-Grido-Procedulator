#pragma once
#include "Includes.h"
// #include "StateManager.h"
#include "TextureManager.h"
#include "AnimationHandler.h"

// #include "SPGameState.h"
// #include "MenuState.h"
// #include "ConnectState.h"

#include "Grid.h"

class Application {
private:
  // StateManager* stManager;
  unique_ptr<TextureManager> texManager;
  unique_ptr<AnimationHandler> aniHandler;
  unique_ptr<RenderWindow> window;
  unique_ptr<View> camera;
  unique_ptr<Grid> hexgrid;

  Font font;

public:
  void appMainLoop();
  void appDraw();
  // void appEvent();
  // void appUpdate();

  // void splashScreen();

  Application();
  virtual ~Application();
};

