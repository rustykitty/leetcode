/*
2723. Add Two Promises

Submitted: January 07, 2025

Runtime: 56 ms (beats 86.69%)
Memory: 48.71 MB (beats 97.66%)
*/

/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
    return (await promise1) + (await promise2);
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */