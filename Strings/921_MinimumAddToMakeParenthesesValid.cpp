class Solution {
public:
    int minAddToMakeValid(string s) {
        // int ans=0;
        // if(s.empty()) return 0;
        // for(int i=0; i<s.length(); i++){
        //     if(s[i]=='(') ans++;
        //     else{
        //         ans--;
        //     }
        // }

        // return abs(ans);

        int close=0;
        int open=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='(') open++;
            else{
                if(open>0) open--;
                else{
                    close++;
                }
            }
        }

        return close+open;
    }
};
