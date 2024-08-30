const fs = require('fs')
const [a, b] = fs.readFileSync("/dev/stdin").toString().trim().split(' ')

if (a > b) {
    a *= 2;
    b += 10;
}
else {
    a += 10;
    b *= 2;
}

console.log(`${a} ${b}`)