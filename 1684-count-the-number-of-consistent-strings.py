"""
1684. Count the Number of Consistent Strings

Submitted: January 17, 2025

Runtime: 258 ms (beats 7.24%)
Memory: 19.71 MB (beats 10.46%)
"""

class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        return sum(all(c in allowed for c in s) for s in words)