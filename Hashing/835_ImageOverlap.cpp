class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        map <pair<int,int>, int> mp;
        int r= img1.size();
        int c= img1[0].size();

        vector<pair<int,int>> ones1;
        vector<pair<int,int>> ones2;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(img1[i][j]==1) ones1.push_back({i,j});
                if(img2[i][j]==1) ones2.push_back({i,j});
            }
        }

        int ans=0;

        for(auto p1 : ones1){
            for(auto p2 : ones2){

                int dr= p2.first-p1.first;
                int dc= p2.second- p1.second;

                mp[{dr,dc}]++;

                ans= max(ans, mp[{dr,dc}]);
            }
        }

        return ans;


    }
};
