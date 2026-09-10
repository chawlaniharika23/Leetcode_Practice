class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int size= order.length();
        unordered_map <char, int> mp;
        for(int i=0; i<size; i++){
            mp[order[i]]=i;
        }

        for(int i=0; i<words.size()-1; i++){
            string word1= words[i];
            string word2= words[i+1];

            int j=0;

            while(j< word1.length() && j<word2.length()){
                if(word1[j] != word2[j]){

                    if(mp[word1[j]] > mp[word2[j]]){
                        return false;
                    }

                    break;
                }

                j++;
            }

            if(j==word2.length() && word1.length()>word2.length()){
                return false;
            }
        }

        return true;
        

    }
};
