/*
2723. Add Two Promises

Submitted: May 20, 2025

Runtime: 54 ms (beats 59.13%)
Memory: 54.12 MB (beats 96.93%)
*/

async function addTwoPromises(
                                promise1: Promise<number>, 
                                promise2: Promise<number>
                             ): Promise<number> {
    return await promise1 + await promise2;
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */