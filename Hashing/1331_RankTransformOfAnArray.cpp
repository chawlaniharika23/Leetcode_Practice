class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.empty()) return arr;
        vector <int> temp(arr);
        sort(temp.begin(), temp.end());
        unordered_map <int, int> ranks;

        ranks[temp[0]]=1;
        for(int i=1; i<temp.size(); i++){
            if(temp[i] != temp[i-1]){
                ranks[temp[i]]= ranks[temp[i-1]]+1;
            }
            // else{ //unnecessary
            //     ranks[temp[i]]=ranks[temp[i-1]];
            // }
        }

        for(int i=0; i<arr.size(); i++){
            arr[i]= ranks[arr[i]];
        }

        return arr;
    }
};
