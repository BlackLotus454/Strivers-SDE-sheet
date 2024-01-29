class Solution {
public:
    bool check(vector<int>& nums) {
        int change=0;
        int n=nums.size();
        if(nums[n-1]>nums[0]){
            change++;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                change++;
            }
        }
        if(change<=1){
            return true;
        }
        return false;
    }
};