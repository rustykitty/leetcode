"""
Snake in Matrix

Submitted: January 17, 2025

Runtime: 3 ms (beats 48.96%)
Memory: 18.03 MB (beats 14.17%)
"""

class Solution:
    def finalPositionOfSnake(self, n: int, commands: List[str]) -> int:
        return sum(
            -n if cmd == "UP" else
            1  if cmd == "RIGHT" else
            n  if cmd == "DOWN" else -1
            for cmd in commands
        )