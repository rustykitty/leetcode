"""
200. Number of Islands

Submitted: October 28, 2025

Runtime: 4099 ms (beats 100.00%)
Memory: 23.19 (beats 32.00%)
"""

class Solution:
    def floodFill(self, image, sr, sc, color):
        p=set()
        if image[sr][sc] == color:
            return p
        original_color = image[sr][sc]
        rows = len(image)
        cols = len(image[0])
        def fill(image, sr, sc, color, original_color):
            if not (0 <= sr < rows and 0 <= sc < cols):
                return
            if image[sr][sc] != original_color:
                return
            if (sr,sc) in p:
                return
            p.add((sr, sc))
            image[sr][sc] = color
            fill(image, sr-1, sc, color, original_color)
            fill(image, sr+1, sc, color, original_color)
            fill(image, sr, sc-1, color, original_color)
            fill(image, sr, sc+1, color, original_color)
        fill(image, sr, sc, color, original_color)
        return p
    def numIslands(self, grid: List[List[str]]) -> int:
        lands = [
            (x,y) 
            for x in range(len(grid)) 
            for y in range(len(grid[0]))
            if grid[x][y] == '1'
        ]
        ret = 0
        while lands:
            x,y = lands[0]
            s = self.floodFill(grid, x, y, '0')
            lands = [c for c in lands if c not in s]
            ret += 1
        return ret
        