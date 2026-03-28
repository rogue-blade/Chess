#pragma once
#include <SFML/Graphics/RenderWindow.hpp>

static const inline sf::RenderWindow set_window() {
  sf::RenderWindow window{sf::VideoMode{{800, 600}}, "Chess", sf::Style::Close};
  sf::VideoMode temporary{sf::VideoMode::getDesktopMode()};
  window.setPosition(
      {static_cast<int>(temporary.size.x / 2 - window.getSize().x / 2),
       static_cast<int>(temporary.size.y / 2 - window.getSize().y / 2)});
  return window;
}
