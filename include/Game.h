#pragma once
#include "Background.h"
#include "SFML/Graphics.hpp"

class Game
{
public:
    Game( int width, int height, int rows, int columns );

    void update();
    void render();
    void pollEventes();
    bool isGameRunning();

private:
    int width;
    int height;
    int rows;
    int columns;
    sf::RenderWindow* window;
    Background background;
};