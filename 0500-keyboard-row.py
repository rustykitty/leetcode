"""
500. Keyboard Row

Submitted: January 16, 2025
"""

class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        return [
            word for word in words if any(
                all(char in row for char in word.lower())
                for row in (
                    'qwertyuiop',
                    'asdfghjkl',
                    'zxcvbnm'
                )
            )
        ]
