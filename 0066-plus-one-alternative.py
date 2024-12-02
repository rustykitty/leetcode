"""
66. Plus One

Submitted: September 27, 2024

Runtime: 41 ms (beats 5.16%)
Memory: 16.52 MB (63.84%)
"""

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        return list(int(i) for i in str(int(''.join((str(i) for i in digits))) + 1))
        # convert digits to integer, add one, and convert back to array
