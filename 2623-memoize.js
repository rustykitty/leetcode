/*
2623. Memoize

Submitted: January 14, 2025

Runtime: 357 ms (beats 10.01%)
Memory: 87.11 MB (beats 68.94%)
*/

/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    let cache = {}
    return function(...args) {
        if (args in cache) return cache[args];
        else return (cache[args] = fn(...args));
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */