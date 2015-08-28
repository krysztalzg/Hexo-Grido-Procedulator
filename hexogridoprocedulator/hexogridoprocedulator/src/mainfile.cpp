#include <ctime>

#include "Includes.h"
#include "Application.h"

int main() {
  srand((unsigned int)time(NULL));

  unique_ptr<Application> app(new Application());

  app->appMainLoop();

  return 0;
}