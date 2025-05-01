/*
289. Game of Life

Submitted: April 3, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 9.25 MB (beats 6.02%)
*/

typedef struct pair {
    int x;
    int y;
} pair;

inline unsigned char** init2D(pair size) {
    int n = size.x, m = size.y;
    unsigned char** mat = malloc((sizeof(unsigned char*) * n) + (sizeof(unsigned char) * n * m));
    unsigned char* data = (unsigned char*)(mat + n);
    for (size_t i = 0; i < n; ++i) {
        mat[i] = data + (m * i);
    }
    return mat;
}

inline unsigned char** copy2D(int** matrix, pair size) {
    unsigned char** copy = init2D(size);
    int n = size.x, m = size.y;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            copy[i][j] = matrix[i][j];
        }
    }
    return copy;
}

#define isValidIndex(n, m, i, j) ((0 <= i && i < n) && (0 <= j && j < m))
#define validOrZero(a, n, m, i, j) (isValidIndex(n, m, i, j) ? a[i][j] : 0)
unsigned char sumOfNeighbors(unsigned char** matrix, pair size, pair index) {
    const int n = size.x, m = size.y;
    const int i = index.x, j = index.y;
    return validOrZero(matrix, n, m, i - 1, j - 1) + 
           validOrZero(matrix, n, m, i - 1, j) +
           validOrZero(matrix, n, m, i - 1, j + 1) +
           validOrZero(matrix, n, m, i, j - 1) +
           validOrZero(matrix, n, m, i, j + 1) +
           validOrZero(matrix, n, m, i + 1, j - 1) +
           validOrZero(matrix, n, m, i + 1, j) +
           validOrZero(matrix, n, m, i + 1, j + 1);
}

void gameOfLife(int** board, int boardSize, int* boardColSize) {
    pair size = { boardSize, boardColSize[0] };
    int n = size.x, m = size.y;
    unsigned char** copy = copy2D(board, size);
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            int cell = board[i][j];
            pair index = { i, j };
            unsigned char neighbors = sumOfNeighbors(copy, size, index);
            if (cell) {
                if (neighbors < 2) {
                    board[i][j] = 0;
                } else if (neighbors > 3) {
                    board[i][j] = 0;
                }
            } else {
                if (neighbors == 3) {
                    board[i][j] = 1;
                }
            }
        }
    }
    free(copy);
}