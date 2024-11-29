/*
2703. Return Length of Arguments Passed

Submitted: September 30, 2024

Runtime: 54 ms
Memory: 48.53 MB (beats 83.25%)
*/

/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    return args.length;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */