#include <iostream>
#include <vector>
#include <tuple>

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

int x = 0;
double y = 1;
auto var = std::tuple(x, y);
auto &[xx, yy] = var;
std::cout << xx << " " << yy << std::endl;
}