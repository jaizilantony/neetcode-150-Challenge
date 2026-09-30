class Solution {
    vector<vector<int>> dirs = {
        {-1, 0},
        {1, 0},
        {0, -1},
        {0, 1}
    };

public:
    void islandsAndTreasure(vector<vector<int>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, int>> q;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }

    
        while (!q.empty()) {

            auto [row, col] = q.front();
            q.pop();

            for (auto& dir : dirs) {

                int r = row + dir[0];
                int c = col + dir[1];

                if (r >= 0 && r < rows &&
                    c >= 0 && c < cols &&
                    grid[r][c] == INT_MAX) {

                    grid[r][c] = grid[row][col] + 1;

                    q.push({r, c});
                }
            }
        }
    }
};