class Solution {
public:
      
    vector<int> g(int n)
    {
        vector<int>ans;
        int res=1;
        ans.push_back(res);
        for(int i=1;i<n;i++){
            res*=n-i;
            res/=i;
            ans.push_back(res);
        }
return ans;

    }



    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
       


        for(int i=1;i<=numRows;i++)
        {
          ans.push_back(g(i));
        }
        return ans;
    }
};