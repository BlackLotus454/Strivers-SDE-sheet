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
int depth(TreeNode* &root,int &ans){
    if(root==NULL){return 0;}
    int ld=depth(root->left,ans);
    int rd=depth(root->right,ans);
    ans=max(ans,ld+rd);

    return 1+max(ld,rd);
}
    int diameterOfBinaryTree(TreeNode* &root) {
        if(root==NULL)return 0;
        int ans=0;
        depth(root,ans);
        return ans;
         
    }
};