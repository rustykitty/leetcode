"""
1351. Count Negative Numbers in a Sorted Matrix

Submitted: February 6, 2025

Runtime: 4 ms (beats 12.26%)
Memory: 19.05 MB (beats 13.05%)
"""

class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        return sum(sum(cell < 0 for cell in row) for row in grid)