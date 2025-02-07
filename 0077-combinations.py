"""
77. Combinations

Submitted: January 29, 2025

Runtime: 23 ms (beats 97.78%)
Memory: 56.92 MB (beats 98.34%)
"""

from itertools import combinations

class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        return list(combinations(range(1, n + 1), k))