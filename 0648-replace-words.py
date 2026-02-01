"""
648. Replace Words

Submitted: November 20, 2025

Runtime: 127 ms (beats 37.07%)
Memory: 27.76 MB (beats 27.76%)
"""

class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        words = sentence.split()
        res = []
        for word in words:
            for root in dictionary:
                if word.startswith(root) and len(root) < len(word):
                    word = root
            res.append(word)
        return ' '.join(res)