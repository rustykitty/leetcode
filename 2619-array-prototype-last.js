/*
2619. Array Prototype Last

Submitted: January 14, 2025

Runtime: 47 ms (beats 75.77%)
Memory: 48.37 MB (beats 88.52%)
*/

/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    return this.length == 0 ? -1 : this[this.length - 1];
}

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */