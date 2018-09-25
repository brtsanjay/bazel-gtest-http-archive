#include <iostream>

#include "hello_world.h"

void print( std::string message_ )
{
    std::cout << message_ << std::endl;
}

int main( int argc, char** argv )
{
    if( argc == 2 ) { print( hello_world::hello( argv[1] ) ); }
    else { print( hello_world::hello() ); }
}
