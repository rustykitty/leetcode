"""
5. Longest Palindromic Substring

Submitted: March 29, 2025

Runtime: 9869 ms (beats 5.01%)
17.43 MB (beats 99.57%)
"""

class Solution:
    def longestPalindrome(self, s: str) -> str: 
        # https://stackoverflow.com/a/53798151
        return max((s[i:j+1] for i in range (len(s)) for j in range(i,len(s)) if s[i:j+1] == s[i:j+1][::-1]), key=str.__len__)