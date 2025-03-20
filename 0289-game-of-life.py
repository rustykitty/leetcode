"""
289. Game of Life

Submitted: March 17, 2025

Runtime: 2 ms (beats 23.06%)
Memory: 17.70 MB (beats 94.61%)
"""

class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        board_copy = [row.copy() for row in board]

        for i in range(len(board)):
            for j in range(len(board[0])):
                n = self.sumOfNeighbors(board_copy, i, j)
                if board_copy[i][j]:
                    if n < 2: board[i][j] = 0
                    elif n > 3: board[i][j] = 0
                elif n == 3:
                    board[i][j] = 1
                    

    def sumOfNeighbors(self, board, i, j):
        return sum(
            sum(
                board[x][y] for y in range(max(0, j - 1), min(len(board[0]), j + 2))
                if (x, y) != (i, j)
            )
            for x in range(max(0, i - 1), min(len(board), i + 2))
        )