"""
2108. Find First Palindromic String in the Array

Submitted: December 4, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 17.6 MB (beats 6.80%)
"""

class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for word in words:
            if word == word[::-1]: return word
        return ""
