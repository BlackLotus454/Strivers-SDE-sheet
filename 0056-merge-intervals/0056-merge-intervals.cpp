class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
           vector<vector<int>>ans;
           sort(intervals.begin(),intervals.end());
        if (n==1){
            ans.push_back(intervals[0]);
            return ans;
        }
     
        for(int i=0;i<n;i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() && end<=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(end>=intervals[j][0])
                {
                    end=max(end,intervals[j][1]);
                }
                else{
                    break;
                }
       
            }
                 ans.push_back({start,end});
        }
        return ans;
    }
};