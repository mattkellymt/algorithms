def recurse(a, b):
    if a == 1:
        return b
    result = recurse(a >> 1, b << 1)
    result += b if (a & 1) else 0
    return result

def product(a, b):
    if a > b:
        a, b = b, a
    if a == 0:
        return 0
    return recurse(a, b)

if __name__ == "__main__":
    max = 10
    valid = True

    for a in range(max):
        for b in range(max):
            c1 = a * b
            c2 = product(a, b)
            if c1 != c2:
                valid = False

    print(f"Correct: {valid}")