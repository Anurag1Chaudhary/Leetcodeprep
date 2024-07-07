class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        n = len(matrix)
        m = len(matrix[0])
        x = [1] * n
        y = [1] * m

        for i in range(n):
            for j in range(m):
                if matrix[i][j] == 0:
                    x[i] = 0
                    y[j] = 0

        for i in range(n):
            for j in range(m):
                if x[i] == 0 or y[j] == 0:
                    matrix[i][j] = 0