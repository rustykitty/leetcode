/*
509. Fibonacci Number

Submitted: October 24, 2024

Runtime: 11 ms (beats 43.59%)
Memory: 7.19 MB (beats 98.56%)
*/

class Solution {
public:
    int fib(int n) {
        return n < 2 ? n : (fib(n - 1) + fib(n - 2));
    }
};