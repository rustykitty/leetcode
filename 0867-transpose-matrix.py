"""
867. Transpose Matrix

Submitted: November 18, 2025

Runtime: 3 ms (beats 19.35%)
Memory: 18.66 MB (beats 48.73%)
"""

class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        return [
            [
                matrix[j][i]
                for j in range(len(matrix))
            ]
            for i in range(len(matrix[0]))
        ]