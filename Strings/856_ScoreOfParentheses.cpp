class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        int len= s.length();
        int depth=0;

        // if(len==2){
        //     return 1;
        // }
        // for(int i=1; i<len-1; i++){
        //     if(s[i+1]==')') score++;
        //     else if(s[i+1]=='(') s
        // }

        for(int i=0; i<len; i++){
            if(s[i]=='(') depth++;
            else{
                depth--;
                if(s[i-1]=='('){
                    score += pow(2,depth);
                }
            }
        }

        return score;
    }
};
