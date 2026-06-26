class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set <int> s (nums.begin(), nums.end());

        for(int num : s){
            if(s.find(num -1)==s.end()){
                int curr= num;
                int len=1;

                while(s.find(curr+1) != s.end()){
                    curr++;
                    len++;
                }

                longest=max(longest, len);
            }
        }

        return longest;
    }
};
