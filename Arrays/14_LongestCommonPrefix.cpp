class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string ans;
        int n= strs.size();
        int m= strs[0].length();
        for(int i=0; i<m; i++){
            char c= strs[0][i];
            for(int j=1; j<n; j++){

                // if (strs[0][i]==strs[j][i]){  error: appends everytime there's a match
                //     ans += strs[0][i];
                // }

                //check for out of bounds + mismatch
                if(i> strs[j].length() || c!= strs[j][i]){
                    return ans;
                }
            }
            ans += c;
        }

        return ans;
    }
};
