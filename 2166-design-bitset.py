"""
2166. Design Bitset

Submitted: February 28, 2025

Runtime: 1206 ms (beats 21.92%)
Memory: 49.69 MB (beats 96.58%)
"""

class Bitset:

    def __init__(self, size: int):
        self.size = size
        self.data = 0

    def fix(self, idx: int) -> None:
        self.data |= (1 << idx)

    def unfix(self, idx: int) -> None:
        self.data &= ~(1 << idx)

    def flip(self) -> None:
        self.data = (~self.data & (1 << self.size) - 1)

    def all(self) -> bool:
        return self.data == (1 << self.size) - 1

    def one(self) -> bool:
        return bool(self.data)

    def count(self) -> int:
        return self.data.bit_count()

    def toString(self) -> str:
        return bin(self.data)[2:].zfill(self.size)[::-1]

# Your Bitset object will be instantiated and called as such:
# obj = Bitset(size)
# obj.fix(idx)
# obj.unfix(idx)
# obj.flip()
# param_4 = obj.all()
# param_5 = obj.one()
# param_6 = obj.count()
# param_7 = obj.toString()