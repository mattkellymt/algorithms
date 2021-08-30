#include <iostream>
#include "shift_add_multiplication.hpp"

int main()
{
    unsigned max = 1000;
    bool valid = true;
    
    for (unsigned a = 0; a < max; ++a)
    {
        for (unsigned b = 0; b < max; ++b)
        {
            unsigned c1 = a * b;
            unsigned c2 = product(a, b);
            if (c1 != c2) { valid = false; }
        }
    }
    std::cout << "Correct: " << (valid ? "True" : "False") << std::endl;
}
