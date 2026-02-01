"""
208. Implement Trie (Prefix Tree)

Submitted: October 23, 2025

Runtime: 36 ms (beats 73.29%)
Memory: 30.61 MB (beats 88.39%)
"""

class Trie:

    def __init__(self):
        self.root = {}

    def insert(self, word: str) -> None:
        p = self.root
        for c in word:
            p = p.setdefault(c, {})
        p[None] = None

    def search(self, word: str) -> bool:
        p = self.root
        for c in word:
            if c not in p:
                return False
            p = p[c]
        return None in p

    def startsWith(self, prefix: str) -> bool:
        p = self.root
        for c in prefix:
            if c not in p:
                return False
            p = p[c]
        return True


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)