"""
1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

Leetcode Daily Question for December 2, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 17.35 MB (beats 5.67%)
"""

class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        for i, word in enumerate(sentence.split(' ')):
            if word.startswith(searchWord): return i + 1
        return -1
