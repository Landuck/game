#ifndef WINDOW_H_
#define WINDOW_H_

#include <SFML/Window.hpp>
#include <string>

class Window
{
 public:
  Window();
  ~Window();
 private:
  sf::Window window;
  std::string title;
  int width;
  int height;
  float aspectRatio;
  bool resizable;

  /**
  * initializes the game window to the specified width and height
  */
  void initWindow();
};
#endif  // WINDOW_H_
