"""
2114. Maximum Number of Words Found in Sentences

Submitted: October 18, 2024

Runtime: 3 ms (beats 49.18%)
Memory: 16.83 MB (beats 8.41%)
"""

class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        return max(len(s.split()) for s in sentences)
