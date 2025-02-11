"""
290. Word Pattern

Submitted: February 7, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.72 MB (beats 54.52%)
"""

class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words: list[str] = s.split(' ')
        if len(pattern) != len(words): return False
        # bidirectional hash map
        d1 = {}
        d2 = {}
        for (letter, word) in zip(pattern, words):
            if letter in d1:
                if d1[letter] != word: return False
            elif word in d2:
                if d2[word] != letter: return False
            d1[letter] = word
            d2[word] = letter
        return True