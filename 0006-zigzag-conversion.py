"""
6. Zigzag Conversion

Submitted: February 2, 2026

Runtime: 587 ms (beats 5.01%)
Memory: 26.70 MB (beats 5.02%)
"""

def infinite(numRows):
    if numRows == 1:
        yield from zip(count(), cycle((0,)))
    i = 0
    while True:
        for j in range(numRows):
            yield (i, j)
        i += 1
        if numRows == 2:
            yield (i, 0)
            yield (i, 1)
        else:
            for j in reversed(range(1, numRows - 1)):
                yield (i, j)
        i += 1

class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        
        a = []
        i = 0
        for (i, (x, y)) in zip(range(len(s)), infinite(numRows)):
            # lazily alloc
            while y >= len(a):
                a.append([None for _ in range(len(s))])

            a[y][x] = s[i]

        

        res = ""
        for c in chain.from_iterable(a):
            if c is not None:
                res += c

        return res