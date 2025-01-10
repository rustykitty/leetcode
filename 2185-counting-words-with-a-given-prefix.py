"""
2185. Counting Words with a Given Prefix

LeetCode Daily Question for January 9, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.86 MB (beats 20.89%)
"""

class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        return sum(s.startswith(pref) for s in words)
