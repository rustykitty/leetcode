/*
509. Fibonacci Number

Runtime: 0 ms (beats 100.00%)
Memory: 2.18 MB (beats 42.64%)
*/

impl Solution {
    pub fn fib(n: i32) -> i32 {
        if n == 0 {
            return 0;
        }
        let mut a = 0;
        let mut b = 1;
        for _ in (0..n-1) {
            let c = a + b;
            a = b;
            b = c;
        }
        b
    }
}
