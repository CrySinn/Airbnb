// Review

#include <iostream>
#include "fizz_buzz.h"
#include "fizz_buzz_loop.h"

int main(int argc, char *argv[])
{
    std::cout << "fizz_buzz(6) = "  << fizz_buzz(6) << std::endl;
    std::cout << "fizz_buzz(10) = "  << fizz_buzz(10) << std::endl;
    std::cout << "fizz_buzz(15) = " << fizz_buzz(15) << std::endl;
    std::cout << "fizz_buzz(23) = "<< fizz_buzz(23) << std::endl;
    std::cout << "fizz_buzz(300) = "  << fizz_buzz(300) << std::endl;
    int rand_ints[12] = {778, 853, 596, 286, 487, 904, 784, 758, 435, 279, 667, 848};
    size_t size = sizeof(rand_ints)/sizeof(rand_ints[0]);
    fizz_buzz_loop((rand_ints), (size_t) (size));
    return 0;
}
