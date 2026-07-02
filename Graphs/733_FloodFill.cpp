class Solution {
public:
    void dfs(vector<vector<int>> &image, int sr, int sc, int ncolor, int ocolor){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc] != ocolor || image[sr][sc] == ncolor){
            return;
        }

        image[sr][sc] = ncolor;

        dfs(image, sr+1, sc, ncolor, ocolor ); //bottom
        dfs(image, sr-1, sc, ncolor, ocolor ); //top
        dfs(image, sr, sc+1, ncolor, ocolor ); //right 
        dfs(image, sr, sc-1, ncolor, ocolor ); //left
    } 
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image, sr, sc, color, image[sr][sc]);

        return image;
    }
};
