class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> mpp;
        int presum=0, count=0;
        mpp[0]=1;

        for(int i=0 ;i< nums.size(); i++){
            presum += nums[i];
            int remove= presum-k;
            count += mpp[remove];
            mpp[presum] ++;
        }

        return count;
    }
};

/*Approach : Traverse the array one element at a time, Store the prefix sum in a hashmap along with the count
so if , prefix sum 3 apprears once, it will be stored as 3->1; 2->3 etc
Check what to remove from current prefix sum. Eg: if current prefix sum= 4, k=3, reqd remove=1
check if 1 is present in the map and return count
*/
