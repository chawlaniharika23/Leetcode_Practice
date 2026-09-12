class Solution {
public:
    int dfs(vector<vector<int>> &grid, int r, int c){
        int m= grid.size();
        int n= grid[0].size();

        if(r<0 || c<0 || r>=m || c>=n || grid[r][c]==0) return 0;

        grid[r][c]=0;

        int area=1;

        area += dfs(grid, r-1, c); //up
        area += dfs(grid, r+1, c); //down
        area += dfs(grid, r, c-1); //left
        area += dfs(grid, r, c+1); //right

        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m= grid.size();
        int n= grid[0].size();

        int maxarea=0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if (grid[i][j]==1){
                    int area= dfs(grid,i,j);
                    maxarea= max(area,maxarea);
                }
            }
        }

        return maxarea;
    }
};
