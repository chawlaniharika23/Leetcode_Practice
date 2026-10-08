
class Solution {
public:
    string removeOuterParentheses(string s) {
        // int len = s.length();
        // int i = 1;
        // string ans;
        // if (len == 0)
        //     return ans;
        // // edge case : outermost

        // int open = 0;

        // for (int i = 1; i < len - 1; i++) {
        //     if (s[i] == '(') {
        //         if (i == len - 2)
        //             continue;
        //         if (open == 1) {
        //             continue;
        //         } else {
        //             open++;
        //             ans += s[i];
        //         }
        //     } else {
        //         if (open == 1) {
        //             open--;
        //             ans += s[i];
        //         } else {
        //             continue;
        //         }
        //     }
        // }

        // return ans;

        int len= s.length();
        string ans;
        if (len==0) return ans;
        int depth=0;

        for(int i=0; i<len; i++){
            if(s[i]=='('){

                if(depth > 0) ans+= s[i];
                depth++;
            }
            else{
                if(depth > 1) ans += s[i];
                depth--;
            }
        }

        return ans;
    }
};
