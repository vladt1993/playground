#include <iostream>
#include "lib/calc.hpp"

int main(int argc, char **argv)
{
    std::cout << "Hello Conan" << std::endl;
    std::cout << "Sum:" << std::to_string(calcSum(2, 4)) << std::endl;
    return 0;
}
