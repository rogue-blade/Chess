#include "window.hpp"
#include <SFML/Graphics/RenderWindow.hpp>

int main() {
  sf::RenderWindow window{set_window()};

  while (window.isOpen()) {
    while (const std::optional event{window.pollEvent()}) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    window.clear();

    window.display();
  }
}
