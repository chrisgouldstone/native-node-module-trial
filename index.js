const addon = require('./build/Release/module');
console.log();
console.log('JS: ');
console.log(addon);
const value = 8;
let result = addon.doubleIt(value)
let result2 = addon.hello(value)
let result3 = addon.my_function3(value)
console.log();
console.log('JS: '+ value + ' x 2 = ' + result);
console.log('JS: '+ value + ' x 2 = ' + result2);
console.log('JS: '+ value + ' x 2 = ' + result3);
console.log();