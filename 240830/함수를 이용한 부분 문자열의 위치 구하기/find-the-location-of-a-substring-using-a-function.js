const fs = require('fs')
const [target, value] = fs.readFileSync("/dev/stdin").toString().trim().split('\n')

console.log(target.indexOf(value)))