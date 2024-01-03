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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>mp;
        q.push({root,{0,0}});
        while(!q.empty()){
            TreeNode* temp=q.front().first;
            int v=q.front().second.first;
            int l=q.front().second.second;
            mp[v][l].insert(temp->val);
            q.pop();
            if(temp->left){
                q.push({temp->left,{v-1,l+1}});
            }
              if(temp->right){
                q.push({temp->right,{v+1,l+1}});
            }


        }
        for(auto &a:mp){
            vector<int>temp;
            for(auto b:a.second){
                temp.insert(temp.end(),b.second.begin(),b.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};