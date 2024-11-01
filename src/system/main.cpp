#include <fmt/core.h>
#include <raylib.h>

namespace sys
{

  class Manager
  {
  
    public:
      Manager();
      ~Manager();
    
    public:
      void run();
      
  };
  
  Manager::Manager()
  {
    fmt::println("***Welcome to system!***");
    SetTargetFPS(30);
    InitWindow(720, 360, "system");
    if(!IsWindowFullscreen())
    {
      ToggleFullscreen();
    }
  }
  
  Manager::~Manager()
  {
    CloseWindow();
    fmt::println("***Goodbye from system!***");
  }
  
  void Manager::run()
  {
    Color background{211, 176, 131, 255};
    while(!WindowShouldClose())
    {
      BeginDrawing();
      ClearBackground(background);
      DrawFPS(12, 12);
      EndDrawing();
    }
  }
  
}

using namespace sys;

int main()
{
  Manager manager;
  manager.run();
}
