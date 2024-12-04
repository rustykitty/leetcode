"""
3280. Convert Date to Binary

Submitted: October 15, 2024

Runtime: 36 ms (beats 16.07%)
Memory: 16.46 MB (beats 85.92%)
"""

class Solution:
    def convertDateToBinary(self, date: str) -> str:
        return '-'.join(bin(int(n))[2:] for n in date.split('-'))
