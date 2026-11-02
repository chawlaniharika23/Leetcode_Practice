
class Solution {
public:
    int minMoves(vector<int>& nums) {
        // int count=0;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i]!=nums[j]) count++;
        //     }
        // }

        // return count;

        int count=0;
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            mini = min(nums[i], mini);
        }

        for(int i=0 ; i< nums.size(); i++){
            count += nums[i]-mini;
        }

        return count;

    }
};
