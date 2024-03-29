#include "Background.h"
#include <SFML/Graphics/Color.hpp>

Background::Background(sf::Color color)
{
this ->color = color;
}
Background::Background()
{
    this->color =sf::Color(24,82,37);
}
void Background::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
target.clear(color);
}

