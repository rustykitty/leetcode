"""
344. Reverse String

Submitted: March 2, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 23.54 MB (beats 5.63%)
"""

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        s[:] = s[::-1]