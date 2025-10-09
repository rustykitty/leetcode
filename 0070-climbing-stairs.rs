/*
70. Climbing Stairs

Submitted: October 8, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 2.16 MB (beats 45.96%)
*/

impl Solution {
    pub fn climb_stairs(n: i32) -> i32 {
        let mut a = 0;
        let mut b = 1;
        for _ in (0..n) {
            let c = a + b;
            a = b;
            b = c;
        }
        b
    }
}