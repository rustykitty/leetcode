/*
2666. Allow One Function Call

Submitted: October 17, 2024

Runtime: 60 ms (beats 15.02%)
Memory: 48.87 MB (beats 57.18%)
*/

/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    var called = false;
    return function(...args){
        if (!called) {
            called = true;
            return fn(...args);
        }
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
