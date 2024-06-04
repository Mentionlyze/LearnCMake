#include "Application.h"
#include <iostream>

namespace Engine {
Application::Application() {
  m_Title = "Engine";
  m_Renderer = CreateScope<Renderer>();
  m_RendererApi = CreateScope<RendererAPI>();
}
Application::~Application() {}

void Application::Run() { std::cout << "Hello " << m_Title << "\n"; }
} // namespace Engine
