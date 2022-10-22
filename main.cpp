#include <SFML/Graphics.hpp>
#include "src/engine/Sound.h"

int main()
{
    sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(1920,1080),"Test");
    sf::Event e;

    Sound* s = new Sound("test/hover.wav");

    while (window->isOpen())

    

        while (window->pollEvent(e))
            switch (e.type)
            {
                case sf::Event::Closed:
                    window->close();
                    break;

                case sf::Event::KeyReleased:
                    if (sf::Keyboard::Space)
                        s->play(false);
            }

    window->clear();
    window->display();


    return 0;
}