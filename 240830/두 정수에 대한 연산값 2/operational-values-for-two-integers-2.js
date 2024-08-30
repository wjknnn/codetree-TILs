const fs = require('fs')
const [A, B] = fs.readFileSync("/dev/stdin").toString().trim().split(' ')

let a = +A;
let b = +B;

if (a > b) {
    a *= 2;
    b += 10;
}
else {
    a += 10;
    b *= 2;
}

console.log(`${a} ${b}`)