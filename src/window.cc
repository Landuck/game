#include "window.h"

Window::Window()
{
	initWindow();
}

Window::~Window()
{	

}

void Window::initWindow()
{
	window.Create(sf::VideoMode(800, 600), "Window");
}
