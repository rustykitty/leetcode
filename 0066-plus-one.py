"""
66. Plus One

Submitted: September 26, 2024

Runtime: 41 ms (beats 5.16%)
Memory: 16.52 MB (63.84%)
"""

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        if len(digits) == 1 and digits[0] == 9:
            return [1, 0] # 9 + 1 = 10
        if digits[-1] == 9:
            return self.plusOne(digits[:-1]) + [0] # carry
        digits[-1] += 1 # if no carry, just add one
        return digits
