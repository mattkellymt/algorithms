import { product } from "./shift_add_multiplication.js";


var max = 1000;
var valid = true;

for (let a = 0; a < max; ++a) {
    for (let b = a; b < max; ++b) {
        let c1 = a * b;
        let c2 = product(a, b);
        if (c1 != c2) { valid = false; }
    }
}
console.log("Correct: " + valid);
