function recurse(a, b) {
    if (a == 1) { return b; }
    var result = recurse(a >> 1, b << 1);
    result += (a & 1) ? b : 0;
    return result;
}

function product(a, b) {
    if (a > b) {
        [a, b] = [b, a];
    }
    if (a == 0) { return 0; }
    return recurse(a, b);
}

export { product };
