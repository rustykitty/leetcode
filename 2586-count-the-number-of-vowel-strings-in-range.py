"""
2586. Count the Number of Vowel Strings in Range

Submitted: May 21, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.92 MB (beats 55.77%)
"""

class Solution:
    def vowelStrings(self, words: List[str], left: int, right: int) -> int:
        return sum(
            (w[0] in "aeiou" and (len(w) == 0 or w[-1] in "aeiou"))
            for w in words[left:right+1]
        )