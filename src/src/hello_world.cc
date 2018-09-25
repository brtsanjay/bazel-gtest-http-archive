#include "hello_world.h"

#include <string>

namespace hello_world {

std::string hello( std::string who_ ) {
    return "Hello " + who_+"!";
}

} // namespace hello_world
