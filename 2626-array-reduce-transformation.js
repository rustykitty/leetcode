/*
2626. Array Reduce Transformation

Submitted: January 14, 2025

Runtime: 48 ms (beats 86.37%)
Memory: 50.66 MB (beats 8.79%)
*/

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    for (const n of nums) {
        init = fn(init, n);
    }
    return init;
};