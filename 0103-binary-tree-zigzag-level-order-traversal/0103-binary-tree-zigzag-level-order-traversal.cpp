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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty()){
            int size=q.size();
           vector<int>v;
            for(int i=0;i<size;i++){
                 TreeNode* temp=q.front();
                 q.pop();
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
                v.push_back(temp->val);
            }
            if(c&1){
                reverse(v.begin(),v.end());
            }
            c++;
            ans.push_back(v);
        }
        return ans;
        
    }
};