class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        m = len(grid)
        n = len(grid[0])
        total = m * n
        k %= total
        ans = [[0] * n for i in range(m)]
        for i in range(m):
            for j in range(n):
                oldIndx = i* n + j
                newIndx = (oldIndx + k) % total

                newRow = newIndx//n
                newCol = newIndx%n

                ans[newRow][newCol] = grid[i][j]

        return ans