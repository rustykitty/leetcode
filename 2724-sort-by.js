/*
2724. Sort By

Submitted: February 6, 2025

Runtime: 506 MB (beats 5.62%)
Memory: 70.77 MB (beats 5.12%)
*/

/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
function sortBy(arr, fn) {
    if (arr.length <= 1) return arr;
    var left = arr.slice(0, arr.length / 2);
    var right = arr.slice(arr.length / 2);
    return merge(sortBy(left, fn), sortBy(right, fn), fn);
};

function merge(left, right, fn) {
    let res = [];
    while (left.length && right.length) {
        if (fn(left[0]) > fn(right[0])) {
            res.push(right[0]);
            right = right.slice(1);
        } else {
            res.push(left[0]);
            left = left.slice(1);
        }
    }
    if (left.length) res = res.concat(left);
    else res = res.concat(right);
    return res;
}