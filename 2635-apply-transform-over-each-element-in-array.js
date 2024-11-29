/*
2635. Apply Transform Over Each Element in Array

Submitted: October 17, 2024

Runtime: 47 ms (beats 81.47%)
Memory: 48.60 MB (beats 78.72%)
*/

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    for (let i = 0; i < arr.length; ++i) {
        arr[i] = fn(arr[i], i);
    }
    return arr;
};