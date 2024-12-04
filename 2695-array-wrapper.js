/*
2695. Array Wrapper

Submitted: October 30, 204

Runtime: 56 ms (beats 39.84%)
Memory: 50.45 MB (beats 46.92%)
*/

/**
 * @param {number[]} nums
 * @return {void}
 */
var ArrayWrapper = function(nums) {
    this.nums = nums;
};

/**
 * @return {number}
 */
ArrayWrapper.prototype.valueOf = function() {
    let i = 0;
    for (const num of this.nums) {
        i += num;
    }
    return i;
}

/**
 * @return {string}
 */
ArrayWrapper.prototype.toString = function() {
    return '[' + this.nums.join(',') + ']';
}

/**
 * const obj1 = new ArrayWrapper([1,2]);
 * const obj2 = new ArrayWrapper([3,4]);
 * obj1 + obj2; // 10
 * String(obj1); // "[1,2]"
 * String(obj2); // "[3,4]"
 */
