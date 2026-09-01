class Solution {
public:
    void merge(vector<int>& nums, int m, vector<int>& nums2, int n) {
        for(int i=0;i<nums2.size();i++){
            nums[m]=nums2[i];
            m++;
        }
        sort(nums.begin(),nums.end());
    }
};