"""
13. Roman to Integer

Submitted: Feb 01, 2026

Runtime: 19 ms (beats 5.06%)
Memory: 19.60 MB (beats 19.60%)
"""

values = {
    "I": 1,
    "V": 5,
    "X": 10,
    "L": 50,
    "C": 100,
    "D": 500,
    "M": 1000
}

class Solution:
    def romanToInt(self, s: str) -> int:
        if len(s) == 0: return 0
        if len(s) == 1: return values[s[0]]
        n = len(s)
        highest = max(s, key=lambda c: values[c])
        positions = [i for i in range(n) if s[i] == highest]
        # anything before the first one is subtract
        leading = s[:positions[0]]
        # anything after the last one is addition
        trailing = s[positions[-1]+1:] 
        more_leading = [s[i+1:j] for (i, j) in zip(positions, positions[1:])]
        # print(leading, trailing, more_leading)
        res = len(positions) * values[highest]
        res += self.romanToInt(trailing)
        res -= self.romanToInt(leading)
        for l in more_leading:
            res -= self.romanToInt(l)
        return res