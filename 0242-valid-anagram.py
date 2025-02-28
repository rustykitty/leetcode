"""
242. Valid Anagram

Submitted: February 25, 2025

Runtime: 7 ms (beats 89.87%)
Memory: 18.05 MB (beats 32.84%)
"""

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)