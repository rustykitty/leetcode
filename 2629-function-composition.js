/*
2629. Function Composition

Submitted: October 19, 2024

Runtime: 68 ms (beats 33.06%)
Memory: 49.62 MB (beats 91.17%)
*/

/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    return function(x) {
        for (let i = 0; i < functions.length; ++i) {
            x = functions[functions.length - 1 - i](x);
        }
        return x;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */