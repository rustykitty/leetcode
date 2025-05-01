"""
65. Valid Number

Submitted: April 15, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.66 MB (beats 88.76%)
"""

class Solution:
    def isNumber(self, s: str) -> bool:
        return bool(re.fullmatch(r'[\+-]?(?:\d+\.?|(\d+)?\.\d+)(?:[Ee][\+-]?\d+)?', s))