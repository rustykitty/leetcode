"""
2011. Final Value of Variable After Performing Operations

Submitted: January 17, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.88 MB (beats 21.09)
"""

class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        return sum((-1 if op[1] == '-' else 1) for op in operations)