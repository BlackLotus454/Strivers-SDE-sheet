class Solution {
public:
    int maxSubArray(vector<int>& nums)
     {
        int sum=0;
        if(nums.size()==1){
            return nums[0];
        }
        int tsum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>tsum){
                tsum=sum;
            }
            if(sum<0){
                sum=0;
            }

        }
        return tsum;
    }
};