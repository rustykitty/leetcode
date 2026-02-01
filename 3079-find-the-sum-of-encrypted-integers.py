"""
3079. Find the Sum of Encrypted Integers

Submitted: May 20, 2025

Runtime: 54 ms (beats 61.66%)
Memory: 17.88 MB (beats 34.20%)
"""

def encrypt(n: int):
    s = str(n)
    return int(len(s) * max(s))

class Solution:
    def sumOfEncryptedInt(self, nums: List[int]) -> int:
        return sum(encrypt(n) for n in nums)