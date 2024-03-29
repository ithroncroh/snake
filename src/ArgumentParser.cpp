#include "ArgumentParser.h"

#include <string>

ArgumentParser::ArgumentParser( int argc, char* argv[] )
{
    for ( int i = 0; i < argc; ++i )
    {
        std::string arg  = argv[ i ];
        int indexOfEqual = arg.find( "=" );
        std::string a    = arg.substr( indexOfEqual + 1, arg.size() - indexOfEqual - 1 );
        if ( arg.find( "-w=" ) != std::string::npos )
        {
            width = std::stoi( a );
        }
        if ( arg.find( "-h=" ) != std::string::npos )
        {
            height = std::stoi( a );
        }
        if ( arg.find( "-rows=" ) != std::string::npos )
        {
            rows = std::stoi( a );
        }
        if ( arg.find( "-columns=" ) != std::string::npos )
        {
            columns = std::stoi( a );
        }
    }
}
int ArgumentParser::getWidth()
{
    return width;
}
int ArgumentParser::getHeight()
{
    return height;
}
int ArgumentParser::getRows()
{
    return rows;
}
int ArgumentParser::getColumns()
{
    return columns;
}
