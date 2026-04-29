const fs = require('fs')
const input = String(fs.readFileSync(0))

if(input == 'S') console.log('Superior')
else if(input == 'A') console.log('Excellent')
else if(input == 'B') console.log('Good')
else if(input == 'C') console.log('Usually')
else if(input == 'D') console.log('Effort')
else console.log('Failure')