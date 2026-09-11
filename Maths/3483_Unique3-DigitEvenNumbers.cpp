class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int ans=0;
        int n= digits.size();

        vector<int> freq(10,0);

        for(int d : digits){
            freq[d]++;
        }

        for(int units=0; units<=8; units+=2){
            if(freq[units]==0) continue;
            freq[units]--;

            for(int hundreds=1; hundreds<=9; hundreds++){
                if(freq[hundreds]==0) continue;
                freq[hundreds]--;

                for(int tens=0;tens<=9; tens++){
                    if(freq[tens]>0)
                    ans++;
                }

                freq[hundreds]++;
            }

            freq[units]++;

        }

        return ans;
    }
};
