"""
38. Count and Say

Submitted: February 5, 2026

Runtime: 11 ms (beats 21.21%)
Memory: 19.91 MB (beats 19.91%)
"""

class Solution:
    def RLE(self, s: str) -> str:
        ranges: tuple[str, int] = []
        # two pointers
        lo = 0
        hi = 0
        while lo < len(s):
            c = s[lo]
            while hi < len(s) and s[hi] == c:
                hi += 1
            ranges.append((lo, hi))
            lo = hi
        counts = [(hi - lo, s[lo]) for (lo, hi) in ranges]
        return (''.join(str(x) for x in chain.from_iterable(counts)))

    def countAndSay(self, n: int) -> str:
        # print(f"f({n})")
        if n == 1:
            # print("-> 1")
            return "1"
        else:
            res = self.RLE(self.countAndSay(n - 1))
            # print(f"back in f({n})")
            # print("->", res)
            return res