"""
3174. Clear Digits

Submitted: February 10, 2025

Runtime: 3 ms (beats 29.98%)
Memory: 17.56 MB (beats 88.57%)
"""

class Solution:
    def clearDigits(self, s: str) -> str:
        while (pos := next((i for i in range(len(s)) if s[i].isdigit()), None)) is not None:
            s = s[:pos-1] + s[pos+1:]
        return s