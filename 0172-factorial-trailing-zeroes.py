"""
172. Factorial Trailing Zeroes

Submitted: September 30, 2025

Runtime: 3861 ms (beats 13.12%)
Memory: 18.53 MB (beats 6.20%)
"""

def factorial(n):
    if n == 0: 
        return 0
    if n == 1:
        return 1
    else:
        return factorial(n - 1) * n

sys.set_int_max_str_digits(0)

class Solution:
    def trailingZeroes(self, n: int) -> int:
        if n == 0:
            return 0
        
        string_n = str(factorial(n))
        return len(string_n) - len(string_n.rstrip('0'))