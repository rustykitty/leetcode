"""
242. Valid Anagram

Submitted: December 14, 2025

Runtime: 7 ms (beats 90.79%)
Memory: 17.90 MB (beats 17.90%)
"""

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)