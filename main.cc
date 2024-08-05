#include <iostream>
#include <vector>
#include <tuple>

#include "raytrace.hh"

int main(int argc, char **argv) {

    vec3 vec{1., 2., 3.};
    std::cout << vec << std::endl;

    ray3<double> ray{{15., 16., 17.}, {21., 22., 23.}};
    std::cout << ray << std::endl;

    return 0;

}