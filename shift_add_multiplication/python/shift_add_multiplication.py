def recurse(a, b):
    if a == 1: return b
    result = recurse(a >> 1, b << 1)
    result += b if (a & 1) else 0
    return result

def product(a, b):
    if a > b:
        a, b = b, a
    if a == 0: return 0
    return recurse(a, b)
