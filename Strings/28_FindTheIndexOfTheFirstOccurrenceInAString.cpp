class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1= haystack.length();
        int len2= needle.length();

        // for(int i=0,;=0; i<len1, j<len2; i++,j++){
        //     if(haystack[i] != needle[j]){
        //         i++;
        //     }
        //     else if(haystack [i] == needle [j]){
                
        //     }
        // }

        for( int i=0; i<=len1-len2; i++){
            int j=0;

            while( j<len2 && haystack[i + j]==needle[j]){
                j++;
            }

            if(j==len2){
                return i;
            }
        }

        return -1;
    }
};
