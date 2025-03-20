"""
289. Game of Life

Submitted: March 19, 2025

Runtime: 1 ms (beats 30.59%)
Memory: 17.72 MB (beats 76.77%)
"""

class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        board_copy = [row.copy() for row in board]

        for i in range(len(board)):
            for j in range(len(board[0])):
                n = sum(
                    sum(
                        board_copy[x][y] for y in range(max(0, j - 1), min(len(board_copy[0]), j + 2))
                        if (x, y) != (i, j)
                    )
                    for x in range(max(0, i - 1), min(len(board_copy), i + 2))
                )
                if board_copy[i][j]:
                    if n < 2: board[i][j] = 0
                    elif n > 3: board[i][j] = 0
                elif n == 3:
                    board[i][j] = 1
