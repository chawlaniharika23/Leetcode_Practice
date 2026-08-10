class Solution {

    // DFS is not the right approach here
    // Use BFS

    // void dfs(int row, int col, vector<vector<int>> &grid, int &count){
    //     int m= grid.size();
    //     int n= grid[0].size();

    //     if(row<0 || col<0 || row>m || col>n || grid[row][col]==2 ||
    //     grid[row][col]==0){
    //         return;
    //     }

    //     grid[row][col]=2;

    //     dfs(row+1, col, grid);
    //     dfs(row-1, col, grid);
    //     dfs(row, col+1, grid);
    //     dfs(row, col-1, grid);
    // }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> rotten;
        int fresh = 0;

        // scanning the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    rotten.push({i, j});
                } else if (grid[i][j] == 1) {
                    fresh++;
                } else {
                    continue;
                }
            }
        }

        if (fresh == 0)
            return 0;

        int size = rotten.size();
        int dr[] = {0, 0, 1, -1};
        int dc[] = {1, -1, 0, 0};

        int minutes = 0;

        while (!rotten.empty() && fresh > 0) {
            int size = rotten.size();
            for (int i = 0; i < size; i++) {
                int row = rotten.front().first;
                int col = rotten.front().second;
                rotten.pop();

                for (int j = 0; j < 4; j++) {
                    int nrow = row + dr[j];
                    int ncol = col + dc[j];

                    // check for out of bounds condition along with checking if
                    // the orange is fresh or rotten
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1) {
                        grid[nrow][ncol] = 2;
                        rotten.push({nrow, ncol});
                        fresh--;
                    }
                }
            }
            minutes++;
        }

        if (fresh > 0) return -1;
        return minutes;
    }
};
