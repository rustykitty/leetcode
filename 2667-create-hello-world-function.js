/*
2667. Create Hello World Function

Subbmited: February 25, 2925

Runtime: 41 ms (beats 90.54%)
Memory: 53.68 MB (beats 5.12%)
*/



const helloWorldFunction = (() => "Hello World");

/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return helloWorldFunction;
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */