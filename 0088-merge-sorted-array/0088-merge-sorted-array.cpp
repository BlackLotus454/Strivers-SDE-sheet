class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(auto a:nums2){
            nums1[m]=a;
            m++;
        }
        sort(nums1.begin(),nums1.end());
    }
};