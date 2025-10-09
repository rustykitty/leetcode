"""
172. Factorial Trailing Zeroes

Submitted: September 30, 2025

Runtime: 2292 ms (beats 14.18%)
Memory: 18.00 MB (beats 14.70%)
"""

sys.set_int_max_str_digits(0)

class Solution:
    def trailingZeroes(self, n: int) -> int:
        if n == 0:
            return 0
        
        string_n = str(factorial(n))
        return len(string_n) - len(string_n.rstrip('0'))