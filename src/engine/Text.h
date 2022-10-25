#ifndef TEXT_H
#define TEXT_H

#pragma once

#include <SFML/Graphics.hpp>

class Text
{
public:
    Text(std::string font);
    ~Text();

private:
    sf::Font* font;

    sf::Text* back;
    sf::Text* front;

};

#endif