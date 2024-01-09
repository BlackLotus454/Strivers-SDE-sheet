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
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int ps,int pe,int is,int ie,map<int,int>&mp){
           if(ps>pe || is>ie)return NULL;
        TreeNode* root=new TreeNode(preorder[ps]);
     
        
        int rootat=mp[preorder[ps]];
        int leftside=rootat-is;
        root->left=solve(preorder,inorder,ps+1,ps+leftside,is,rootat-1,mp);
        root->right=solve(preorder,inorder,ps+1+leftside,pe,rootat+1,ie,mp);
        
        return root;
        
        
        
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root=solve(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1,mp);
        return root;
        
        
        
        
        
        
        
        
        
        
        
    }
};