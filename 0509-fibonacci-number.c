/*
509. Fibonacci Number

Submitted: January 9, 2025

Runtime: 3 ms (beats 60.33%)
Memory: 7.74 MB (beats 42.31%)
*/

int cache[30] = { 0 };
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (cache[n - 1] != 0) return cache[n - 1];
    int res = fib(n - 2) + fib(n - 1);
    if (cache[n - 1] == 0) cache[n - 1] = res;
    return res;
}