#pragma once

class ArgumentParser
{
public:
    ArgumentParser( int argc, char* argv[] );
    int getWidth();
    int getHeight();
    int getRows();
    int getColumns();

private:
    int width   = 800;
    int height  = 600;
    int rows    = 10;
    int columns = 10;
};