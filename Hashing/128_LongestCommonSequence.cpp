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

/*Approach : Traverse the elements of array one at a time, store them in a set
if you find num-1, then consecutive sequence does not start from current element, skip
if n-1 doesnt exist, len=1; look for n+1, increase length until you cannot find n+1*/
