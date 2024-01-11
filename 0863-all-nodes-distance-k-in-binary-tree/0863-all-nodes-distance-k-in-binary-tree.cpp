/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*>mp;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                    mp[temp->left]=temp;
                }
                if(temp->right){
                    q.push(temp->right);
                    mp[temp->right]=temp;
                }
            }
        }
            
            map<TreeNode*,bool>visited;
            q.push(target);
                  visited[target]=true;
            int lvl=0;
           
            while(!q.empty()){
                if(lvl==k)break;
                int s=q.size();
             
                for(int i=0;i<s;i++){
                    TreeNode* temp=q.front();
                    q.pop();
                   
              
                        if(mp[temp] && !visited[mp[temp]]){
                            q.push(mp[temp]);
                            visited[mp[temp]]=true;
                            
                        }
                        if(temp->left && !visited[temp->left]){
                            q.push(temp->left);
                            visited[temp->left]=true;
                        }
                        if(temp->right && !visited[temp->right]){
                            q.push(temp->right);
                            visited[temp->right]=true;
                        }
                  


                    
                }
                  lvl++;
            }

            vector<int>ans;
            while(!q.empty()){
                ans.push_back(q.front()->val);
                q.pop();
            }
            return ans;


    }
};