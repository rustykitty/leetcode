/*
2620. Counter

Submitted: January 14, 2025

Runtime: 36 ms (beats 99.12%)
Memory: 48.94% (beats 48.41%)
*/

/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    return function() {
        return n++;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */