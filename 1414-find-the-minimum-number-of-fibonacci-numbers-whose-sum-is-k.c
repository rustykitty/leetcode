/*
1414. Find the Minimum Number of Fibonacci Numbers Whose Sum Is K

Submitted: January 9, 2025

Runtime: 1 ms (beats 11.11%)
Memory: 8.16 MB (beats 77.78%)
*/

#define SIZE 45

int cache[SIZE + 1];

int _helper(int);
int cached_fib(int);

int findMinFibonacciNumbers(int k) {
    for (int i = 0; i < SIZE + 1; ++i) {
        cached_fib(i);
    }
    return _helper(k);
}

int _helper(int k) {
    if (k == 0) return 0;
    if (k == 1) return 1;
    for (int i = 0; i < SIZE; ++i) {
        if (cache[SIZE - i - 1] <= k) {
            return _helper(k - cache[SIZE - i - 1]) + 1;
            break;
        }
    }
    return -1; // should never get here
}

int cached_fib(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (cache[n-1] != 0) return cache[n-1];
    return (cache[n-1] = (cached_fib(n - 1) + cached_fib(n - 2)));
}