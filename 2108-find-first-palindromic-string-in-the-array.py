"""
2108. Find First Palindromic String in the Array

Submitted: October 30, 2024

Runtime: 21 ms (beats 5.80%)
Memory: 16.76 MB (beats 52.46%)
"""

class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for word in words:
            if all((i == j for i, j in zip(word, word[::-1]))): return word
        return ""