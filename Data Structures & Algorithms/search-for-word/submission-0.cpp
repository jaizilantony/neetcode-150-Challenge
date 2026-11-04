
class Solution {
    bool ans = false;
    int index = 0;

public:
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> visited(board.size(),
            vector<bool>(board[0].size()));

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (word[index] == board[i][j]) {
                    dfs(i, j, word, visited,
                        board.size(), board[0].size(), board);
                }

                if (ans) return true;
            }
        }

        return ans;
    }

    void dfs(int i, int j, string word,
             vector<vector<bool>>& visited, int row, int col,
             vector<vector<char>>& board) {

        if (index == word.length()) {
            ans = true;
            return;
        }

        if (i < 0 || i >= row || j < 0 || j >= col ||
            visited[i][j] || board[i][j] != word[index]) {
            return;
        }

        visited[i][j] = true;
        index++;

        dfs(i + 1, j, word, visited, row, col, board);
        dfs(i, j + 1, word, visited, row, col, board);
        dfs(i - 1, j, word, visited, row, col, board);
        dfs(i, j - 1, word, visited, row, col, board);

        visited[i][j] = false;
        index--;
    }
};
