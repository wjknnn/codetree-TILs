const filePath = process.platform === 'linux' ? '/dev/stdin' : '[입력파일명].txt';
const input = require('fs').readFileSync(filePath).toString().trim().split('\n');
const N = input[0];
const sample = [];

for (let i = 1; i <= N; i++) {
    sample.push(input[i].split(' ').sort().join(' '));
}

const countMap = new Map();
let maxCount = 0;

for (const item of sample) {
    if (countMap.has(item)) {
        countMap.set(item, countMap.get(item) + 1);
    }
    else {
        countMap.set(item, 1);
    }
}

for (const count of countMap.values()) {
    if (count > maxCount) {
        maxCount = count;
    }
}

console.log(maxCount);