#include <iostream>
#include <vector>

#include "vec3.hh"

class FOO {
};


int main(int argc, char **argv) {

    vec3 foo{1., 2., 3.};
    std::cout << foo << std::endl;

    foo = {
        4.,
        5.,
        6.,
    };
std::cout << foo << std::endl;

}