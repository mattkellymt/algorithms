#include <iostream>

unsigned recurse(unsigned a, unsigned b)
{
    if (a == 1) { return b; }
    unsigned result = recurse(a >> 1, b << 1);
    result += (a & 1) ? b : 0;
    return result;
}

unsigned product(unsigned a, unsigned b)
{
    if (a > b) { std::swap(a, b); }
    if (a == 0) { return 0; }
    return recurse(a, b);
}

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
