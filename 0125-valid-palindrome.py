"""
125. Valid Palindrome

Submitted: November 7, 2024

Runtime: 4 ms (beats 90.80%)
Memory: 17.66 MB (beats 30.19%)
"""

class Solution:
    def isPalindrome(self, s: str) -> bool:
        # convert the input string to lowercase, then remove all non-alphanumeric
        s = ''.join(c for c in s.lower() if c.isalnum()) # characters
        return s == s[::-1] # whether the resulting string is equal to itself reversed