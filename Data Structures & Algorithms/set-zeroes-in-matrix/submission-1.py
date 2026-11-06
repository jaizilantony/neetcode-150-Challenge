class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:

        ROWS, COLS = len(matrix), len(matrix[0])
        rows, cols = [False] * ROWS, [False] * COLS

        # print(rows)
        # print(cols)

        for r in range(ROWS):
            for c in range(COLS):
                if matrix[r][c] == 0:
                    rows[r] = True
                    cols[c] = True
        
        # print(rows)
        # print(cols)

        for r in range(ROWS):
            if rows[r]:
                for c in range(COLS):
                    matrix[r][c] = 0

        for c in range(COLS):
            if cols[c]:
                for r in range(ROWS):
                    matrix[r][c] = 0        
        
        