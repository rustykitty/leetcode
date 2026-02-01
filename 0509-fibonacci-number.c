/*
509. Fibonacci Number

Submitted: October 20, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 7.75 MB (beats 48.05%)
*/

int fib (register int n) {
    if (n == 0) {
        return 0;
    }
    register int a = 0;
    register int b = 1;
    for (register int i = 0; i < n - 1; ++i) {
        b += a;
        a = b - a;
    }
    return b;
}