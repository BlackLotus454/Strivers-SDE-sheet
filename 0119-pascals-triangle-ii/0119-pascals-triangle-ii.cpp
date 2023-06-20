class Solution {
public:
    vector< int> getRow(int rowIndex) {

        vector<int >ans;
        long  long int res=1;
        ans.push_back(res);

        for(int i=1;i<rowIndex+1;i++){
            res*=rowIndex+1-i;
            res/=i;
    ans.push_back(res);
        }

        return ans;
        
    }
};