class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map <int,int> freq;

        // for(int x:nums){
        //     freq[x]++;
        // }

        // int ans= nums[0];
        // int maxfreq=0;

        // for(auto &p: freq){
        //     if(p.second > maxfreq){
        //         maxfreq = p.second;
        //         ans= p.first;
        //     }
        // }

        // return ans;

        int votes=1, majority= nums[0];
        for(int i=1; i<nums.size(); i++){
            if(votes==0){
                votes++;
                majority=nums[i];
            }
            else if(majority==nums[i]){
                votes++;
            }
            else{
                votes--;
            }
        }

        return majority;
    }
};
