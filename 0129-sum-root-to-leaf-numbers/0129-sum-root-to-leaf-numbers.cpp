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
    void solve(TreeNode* root,string temp,vector<string>&ans){

        if(root==NULL){
            return;
        }
        temp+=(root->val+'0');
        if(root->right==NULL && root->left==NULL){
            ans.push_back(temp);
        }
        solve(root->left,temp,ans);
        solve(root->right,temp,ans);
    }

    int sumNumbers(TreeNode* root) {
        string temp="";
        vector<string>ans;
    solve(root,temp,ans);
    int ansi=0;
    for(string a:ans){
       ansi+=stoi(a);
    }
    cout<<"abc";
    return ansi;
    }
};