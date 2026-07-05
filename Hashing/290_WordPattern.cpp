class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> check1;
        unordered_map<string, char> check2;

        vector<string> word;
        string wd;
        int n = s.length();
        int i = 0;
        while (i < n) {
            wd.clear();

            while (i < n && s[i] == ' ') {
                i++;
            }
            while (i < n && s[i] != ' ') {
                wd += s[i];
                i++;
            }

            if (!wd.empty()) {
                word.push_back(wd);
            }
        }

        if (word.size() != pattern.length())
            return false;

        for (int j = 0; j < pattern.length(); j++) {
            if (check1.find(pattern[j]) == check1.end() &&
                check2.find(word[j]) == check2.end()) {

                check1[pattern[j]] = word[j];
                check2[word[j]] = pattern[j];
            } else {
                if (check1[pattern[j]] != word[j] ||
                    check2[word[j]] != pattern[j])
                    return false;
            }
        }

        return true;
    }
};
