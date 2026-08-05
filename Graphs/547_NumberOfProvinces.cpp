class Solution {
    void dfs(int node, vector<vector<int>> isConnected, vector<int> &vis){
        int n= isConnected.size();
        vis[node]=1;

        for(int neighbour=0; neighbour <n; neighbour++){
            if(isConnected[node][neighbour]==1 && vis[neighbour]==0){
                dfs(neighbour, isConnected, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        vector<int> vis(n, 0);
        int count=0;

        for(int i=0; i<n; i++){
            if(vis[i]==0){
                dfs(i, isConnected, vis);
                count++;
            }
        }

        return count;
    }
};
