/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,vector<string>&ans,string s){
       
        if(root->left==NULL && root->right==NULL){
            ans.push_back(s);
            return;
        }
        if(root->left)
        solve(root->left,ans,s+"->"+to_string(root->left->val));
        if(root->right)
        solve(root->right,ans,s+"->"+to_string(root->right->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root==NULL)return ans;
        string s=to_string(root->val);
        solve(root,ans,s);
       
        return ans;
    }
};