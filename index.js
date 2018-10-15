const addon = require('./build/Release/module');
console.log();
console.log('JS: ');
console.log(addon);
const value1 = 8;
let value2 = 8;
var value3 = 8;
let result = addon.doubleIt(value1)
let result2 = addon.hello(value2)
let result3 = addon.my_function3(value3)
console.log();
console.log('JS: '+ value + ' x 2 = ' + result);
console.log('JS: '+ value + ' x 2 = ' + result2);
console.log('JS: '+ value + ' x 3 = ' + result3);
console.log();