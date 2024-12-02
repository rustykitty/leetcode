"""
14. Longest Common Prefix

First solved: September 30, 2024
This solution: September 30, 2024

Runtime: 37 ms (beats 5.20%)
Memory: 16.77 MB (beats 20.04%)
"""

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = ""
        if len(strs) == 1:
            return strs[0]
        for items in zip(*strs):
            if all(i == items[0] for i in items):
                prefix += items[0]
            else:
                return prefix
        return prefix
