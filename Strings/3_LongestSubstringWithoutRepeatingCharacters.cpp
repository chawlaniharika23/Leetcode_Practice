
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int maxlen = 0;
        int right = 0;
        int left = 0;

        int len = s.length();

        while (right < len) { 
            freq[s[right]]++;
            while (freq[s[right]] > 1) { //we used while here because (if) checks only one left which might not be enough to remove duplicates
                freq[s[left]]--;
                left++;
            }

            maxlen= max(maxlen, right-left+1);
            right++;
        }

        return maxlen;
    }
};
