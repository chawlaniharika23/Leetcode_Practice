//Preorder
class Solution {
public:
    void preorder(TreeNode* root, vector<int> &ans){
        if(root == nullptr){
            return;
        }

        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};

//Inorder
class Solution {
public:
    void inorder(TreeNode* root, vector<int> &ans){
        if(root == nullptr){
            return;
        }

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        inorder(root,ans);
        return ans;
    }
};
