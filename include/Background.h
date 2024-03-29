#pragma once

#include "SFML/Graphics.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Drawable.hpp>

class Background : public sf::Drawable
{
public:
Background(sf::Color color);
Background();

void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
    sf::Color color;
};