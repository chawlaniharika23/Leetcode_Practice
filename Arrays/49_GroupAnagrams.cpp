class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // //Sorting 
        // unordered_map <string, vector<string>> mp;
        // for(string s : strs){
        //     string temp=s;
        //     sort(temp.begin(), temp.end());

        //     mp[temp].push_back(s);
        // }

        // vector<vector<string>> ans;

        // for(auto it: mp){
        //     ans.push_back(it.second);
        // }

        // return ans;

        //Using a frequency key

        unordered_map <string, vector<string>> mp;

        for(string s : strs){
            vector<int> freq(26,0);

            for(char c: s){
                freq[c-'a']++;
            }

            string key;

            for(int x : freq){
                key += to_string(x) + "#";
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto it: mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
