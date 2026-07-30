class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        // vector<int> ans(2);
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if (nums[i]+nums[j]==target){
        //             ans[0]=i;
        //             ans[1]=j;
        //             break;
        //         }
        //     }
        // }

        // return ans;

        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            int need= target- nums[i];
            if(mp.find(need) != mp.end()){ //if element alr exists
                return {mp[need],i};
            }

            mp[nums[i]]=i; //else, store
        }

        return {};
    }
};
