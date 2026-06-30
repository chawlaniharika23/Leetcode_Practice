class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> values;
        int i=0;

        if(head==nullptr){
            return true;
        }

        while(head != nullptr){
            values.push_back(head->val);
            head=head->next;
        }

        for (int i = 0, j = values.size() - 1; i < j; i++, j--) {
            if (values[i] != values[j]) {
                return false;
            }
        }

        return true;
    }
};
