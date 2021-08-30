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
