"""
65. Valid Number

Submitted: January 23, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.60 MB (beats 49.99%)
"""

class Solution:
    def isNumber(self, s: str) -> bool:
        return bool(re.fullmatch(r'(\+|-)?(\d+\.?|(\d+)?\.\d+)((e|E)(\+|-)?\d+)?', s))