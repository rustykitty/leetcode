"""
58. Length of Last Word

Submitted: October 2, 2024

Runtime: 29 ms (beats 5.67%)
Memory: 16.70 MB (beats 13.10%)
"""

class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        return len(s.strip().split()[-1]) # split into words and get last element in list
