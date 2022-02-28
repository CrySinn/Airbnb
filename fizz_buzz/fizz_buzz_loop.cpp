#include <iostream>
#include <string>
#include "fizz_buzz.h"

void fizz_buzz_loop(int rounds[], size_t size){
    for (size_t i = 0; i < size; i++)
        {
            std::cout << "fizz_buzz(" << rounds[i] << ") = " << fizz_buzz(rounds[i]) << std::endl;
        }
}
