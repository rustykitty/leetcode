"""
146. LRU Cache

Submitted: January 24, 2025

Runtime: 116 ms (beats 82.52%)
Memory: 78.04 MB (beats 88.47%)
"""

from collections import OrderedDict

class LRUCache(OrderedDict):

    def __init__(self, capacity: int):
        self.capacity = capacity

    def get(self, key: int) -> int:
        if key in self:
            self.move_to_end(key, last=True)
            return self[key]
        else:
            return -1

    def put(self, key: int, value: int) -> None:
        if key in self: self.move_to_end(key, last=True)
        self[key] = value
        while len(self) > self.capacity:
            self.popitem(last=False)

# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)