class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // int mini = INT_MAX;
        // int maxi = INT_MIN;
        int count=0; 

        // for(int i=0; i<nums.size(); i++){
        //     mini= min(nums[i], mini);
        //     maxi= max(nums[i], maxi);
        // } 

        // int mean = ( maxi + mini ) / 2;

        // for(int i=0; i<nums.size(); i++){
        //     count += abs(nums[i] - mean);
        // }

        sort(nums.begin(), nums.end());
        int medidx= nums.size()/2;

        for(int i=0; i<nums.size(); i++){
            count+= abs(nums[i]- nums[medidx]);
        }

        return count;
    }
};
