class Solution {
public:
    int maxArea(vector<int>& height) {
        //Brute Force
        // int maxwater=0;
        // int n=height.size();
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         int water= min(height[i],height[j]) * (j-i);
        //         maxwater= max(water, maxwater);
        //     }
        // }

        // return maxwater;

        int maxwater=0;
        int n= height.size();
        int begin=0, end= n-1;
        while(begin <= end){
            int water= min(height[begin], height[end]) * (end-begin);
            maxwater= max(maxwater,water);
            if(height[begin] < height [end]) begin++;
            else end--;
        }    

        return maxwater;    
    }
};
