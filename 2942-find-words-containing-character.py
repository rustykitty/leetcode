"""
2942. Find Words Containing Character

Submitted: October 30, 2024

Runtime: 2 ms (beats 34.05%)
Memory: 16.80 MB (beats 16.91%)
"""

class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        return [s[0] for s in filter(lambda a: x in a[1], enumerate(words))]
        """
        The above listcomp is equivalent to the following:
        result = []
        for i in range(len(words)):
            if x in words[i]:
                result.append(i)
        return result
        """
