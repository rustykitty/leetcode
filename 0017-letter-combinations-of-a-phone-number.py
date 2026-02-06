"""
17. Letter Combinations of a Phone Number

Submitted: February 5, 2026

Runtime: 0 ms (beats 100.00%)
Memory: 19.19 MB (beats 54.65%)
"""

letters = {
    "2": "abc",
    "3": "def",
    "4": "ghi",
    "5": "jkl",
    "6": "mno",
    "7": "pqrs",
    "8": "tuv",
    "9": "wxyz"
}

class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        return tuple(''.join(s) for s in product(*(letters[c] for c in digits)))