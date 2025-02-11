"""
1910. Remove All Occurrences of a Substring

LeetCode Daily Question for February 10, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.76 MB (beats 75.36%)
"""

class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        while (pos := s.find(part)) != -1:
            s = s[:pos] + s[pos + len(part):]
        return s