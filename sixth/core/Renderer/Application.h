#include "Base.h"
#include "Renderer.h"
#include "RendererAPI.h"
#include <string>

namespace Engine {
class Application {
public:
  Application();
  ~Application();

  void Run();

private:
  std::string m_Title;
  Scope<Renderer> m_Renderer;
  Scope<RendererAPI> m_RendererApi;
};
} // namespace Engine