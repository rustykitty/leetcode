/*
2648. Generate Fibonacci Sequence

Submitted: October 18, 2024

Runtime: 47 ms (beats 80.57%)
Memory: 49.03 MB (beats 46.94%)
*/

/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let n = 0;
    let curr = 0;
    let prev = 1;
    while (true) {
        yield curr;
        let temp = curr;
        curr = curr + prev;
        prev = temp;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */
