class Solution {
public:
    int hammingDistance(int x, int y) {
        string binx="";
        string biny="";

        while(x>0){
            int bit= x%2;
            x/=2;
            binx += to_string(bit);
        }

        while(y>0){
            int bit= y%2;
            y/=2;
            biny += to_string(bit);
        }

        while(binx.length() != biny.length()){
            if(binx.length()<biny.length()){
                binx += '0';
            }
            else{
                biny += '0';
            }
        }
        reverse(binx.begin(), binx.end());
        reverse(biny.begin(), biny.end());

        int ans=0;

        for(int i=0; i<= binx.length(); i++){
            if(binx[i] != biny[i]) ans++;
        }

        return ans;
        
    }
};
