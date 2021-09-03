import { product } from "./shift_add_multiplication.js";


var max = 1000;
var valid = true;

for (var a = 0; a < max; ++a) {
    for (var b = a; b < max; ++b) {
        var c1 = a * b;
        var c2 = product(a, b);
        if (c1 != c2) { valid = false; }
    }
}
console.log("Correct: " + valid);
