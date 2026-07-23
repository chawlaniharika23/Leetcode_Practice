class Solution {
public:
    string reverseWords(string s) {

        ////////Aproach 2

        int n= s.length();
        stack<string> st;
        string word;
        int i=0; 

        while(i<n){

            word.clear();
            while(i<n && s[i]==' '){
                i++;
            }

            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }

            if(!word.empty()){
                st.push(word);
            }
        }

        string ans;

        while(!st.empty()){
            ans += st.top();
            st.pop();

            if(!st.empty()){
                ans += ' ';
            } 
        }

        return ans;

        //////////Approach 1

        // int n= s.length();
        // deque<char> dq;
        // string ans;
        // ans.resize(n);
        // for(int i=n-1; i>=0; i--){
        //     if(s[i] != ' '){
        //         dq.push_back(s[i]);
        //     }
        //     else{
        //         if(!dq.empty()){
        //             char check= dq.back();
        //         }
        //         if(s[i] != check){
        //             dq.push_back(s[i]);
        //         }
        //         else{
        //             continue;
        //         }
        //     }
        // }

        // while (!dp.empty()){

        // }
    }
};
