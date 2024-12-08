/*
2627. Debounce

Submitted: December 8, 2024

Runtime: 58 ms (beats 62.37%)
Memory: 49.86 MB (beats 8.77%)
*/

/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
function debounce(fn, t) {
    var last_call = -2000;
    var timeoutId = null;
    return (...args) => {
        clearTimeout(timeoutId);
        if (last_call < Date.now()) {
            timeoutId = setTimeout(f = () => { fn(...args) }, t);
        }
    }
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */