"""
7. Reverse Integer

Submitted: February 25, 2025

Runtime: 32 ms (beats 90.57%)
Memory: 17.83 MB (beats 37.07%)
"""

class Solution:
    def reverse(self, x: int) -> int:
        res = -int((str(x)[1:][::-1])) if x < 0 else int(str(x)[::-1])
        return res if -2147483648 <= res <= 2147483647 else 0