"""
1876. Substrings of Size Three with Distinct Characters

Submitted: January 13, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 17.72 MB (beats 21.15%)
"""

class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        return sum(len(set(s[x:x+3])) == 3 for x in range(0, len(s) - 2))