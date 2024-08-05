#include <iostream>
#include <vector>
#include <tuple>

#include "raytrace.hh"

int main(int argc, char **argv) {

    auto vec = vec3<double>{1., 2., 3.};
    std::cout << vec << std::endl;

    auto orig = vec3<double>{15., 16., 17.};
    auto dir = vec3<double>{21., 22., 23.};
    ray3 ray{orig, dir};
    std::cout << ray << std::endl;

    return 0;

}