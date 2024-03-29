#include <SFML/Graphics/Color.hpp>
#include <iostream>

#include <fmt/format.h>

#include "ArgumentParser.h"
#include "Background.h"
#include "Game.h"

int main( int argc, char* argv[] )
{
    ArgumentParser argumentParser( argc, argv );
    Game game( argumentParser.getWidth(),
               argumentParser.getHeight(),
               argumentParser.getRows(),
               argumentParser.getColumns() );

    while ( game.isGameRunning() )
    {
        game.pollEventes();
        game.update();
        game.render();
    }



    // run the program as long as the window is open

    return 0;
}