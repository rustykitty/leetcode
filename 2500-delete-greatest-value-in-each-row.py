"""
2500. Delete Greatest Value in Each Row

Submitted: December 10, 2022

Runtime: 139 ms (beats 5.26%)
Memory: 13.97 MB (beats 100.00%)
"""

class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        a = len(grid)
        res = 0
        while len(grid) > 0:
            stop = False
            for i in grid:
                if len(i) <= 0:
                    stop = True
            if stop:
                break
            a = len(grid)
            elements = []
            for i in range(a):
                elements.append(max(grid[i]))
            res += max(elements)
            for i in range(a):
                j = elements[i]
                if j in grid[i]:
                    grid[i].remove(j)
            elements = []
        return res
