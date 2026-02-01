"""
733. Flood Fill

Submitted: October 22, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 18.03 MB (beats 57.76%)
"""


class Solution:
    def floodFill(self, image, sr, sc, color):
        if image[sr][sc] == color:
            return image
        original_color = image[sr][sc]
        rows = len(image)
        cols = len(image[0])
        def fill(image, sr, sc, color, original_color):
            if not (0 <= sr < rows and 0 <= sc < cols):
                return
            if image[sr][sc] != original_color:
                return
            image[sr][sc] = color
            fill(image, sr-1, sc, color, original_color)
            fill(image, sr+1, sc, color, original_color)
            fill(image, sr, sc-1, color, original_color)
            fill(image, sr, sc+1, color, original_color)
        fill(image, sr, sc, color, original_color)
        return image
