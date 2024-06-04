#include "Renderer/Application.h"

int main() {
  auto app = new Engine::Application();
  app->Run();
  delete app;
}