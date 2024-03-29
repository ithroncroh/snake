#include "Game.h"
#include "Background.h"
#include <SFML/Graphics/Color.hpp>
#include <fmt/format.h>

Game::Game( int width, int height, int rows, int columns )
{
    this->width   = width;
    this->height  = height;
    this->rows    = rows;
    this->columns = columns;
    this->window  = new sf::RenderWindow( sf::VideoMode( width, height ), "My window" );
}
void Game::update() { }
void Game::render()
{
    window->clear( sf::Color::Magenta );

    window->display();
}
void Game::pollEventes()
{
    sf::Event event;
    while ( window->pollEvent( event ) )
    {
        if ( event.type == sf::Event::Closed )
            window->close();
    }
}
bool Game::isGameRunning()
{
    return window->isOpen();
}