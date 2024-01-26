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
    void solve(TreeNode* root,int target,int sum,vector<int>v,vector<vector<int>>&ans){
        if(root->left==NULL && root->right==NULL){
            if(sum==target)
            ans.push_back(v);
            
            return;
        }
        if(root->left){
            v.push_back(root->left->val);
            solve(root->left,target,sum+root->left->val,v,ans);
            v.pop_back();}
        if(root->right){
            v.push_back(root->right->val);
            solve(root->right,target,sum+root->right->val,v,ans);
             v.pop_back();}
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        if(root==NULL)return ans;
        int sum=root->val;
        v.push_back(root->val);
        solve(root,targetSum,sum,v,ans);
        return ans;
    }
};