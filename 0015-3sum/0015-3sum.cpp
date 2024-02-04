class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    int num1=0;;
    int low=0;
    int high=0;
    int num2=0;
    int num3=0;
    for(int i=0;i<n;i++){
        num1=nums[i];
        if(i>0 && nums[i]==nums[i-1])continue;
        low=i+1;
        high=n-1;
        while(low<high){
            num2=nums[low];
           num3=nums[high];
            if(num1+num2+num3==0){
                ans.push_back({num1,num2,num3});
                while(low<high && nums[low]==num2)low++;
                while(low<high && nums[high]==num3)high--;
            }
            else if(num1+num2+num3<0){
                low++;
            }
            else{
                high--;
            }

        }
      
    }
    return ans;
    }
};