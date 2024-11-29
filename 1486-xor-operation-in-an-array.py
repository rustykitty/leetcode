"""
1486. XOR Operation in an Array

Submitted: October 28, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 16.56 MB (beats 65.65%)
"""

class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        x = 0
        return [(x := x ^ (start + i + i)) for i in range(n)][-1]