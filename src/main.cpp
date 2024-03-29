#include <iostream>

#include "SFML/Graphics.hpp"
#include <fmt/format.h>

#include "ArgumentParser.h"

int main( int argc, char* argv[] )
{
    ArgumentParser argumentParser( argc, argv );
    sf::RenderWindow window( sf::VideoMode( argumentParser.getWidth(), argumentParser.getHeight() ),
                             "My window" );

    // run the program as long as the window is open
    while ( window.isOpen() )
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while ( window.pollEvent( event ) )
        {
            // "close requested" event: we close the window
            if ( event.type == sf::Event::Closed )
                window.close();
        }

        // update

        // render
        window.clear( sf::Color::Magenta );

        window.display();
    }

    return 0;
}