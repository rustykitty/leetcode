"""
1678. Goal Parser Interpretation

Submitted: January 17, 2025

Runtime: 50 ms (beats 33.76%)
Memory: 17.61 MB (beats 35.26%)
"""

class Solution:
    def interpret(self, command: str) -> str:
        return command.replace('()', 'o').replace('(al)', 'al')