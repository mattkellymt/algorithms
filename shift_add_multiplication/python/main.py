from itertools import combinations
from shift_add_multiplication import product

if __name__ == "__main__":
    max = 1000
    valid = True

    for a, b in combinations(range(max), 2):
        c1 = a * b
        c2 = product(a, b)
        
        if c1 != c2:
            valid = False

    print(f"Correct: {valid}")
    