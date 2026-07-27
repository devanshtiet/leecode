class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int maxi=INT_MIN;
        for(int j=1;j<nums.size();j++){
            maxi=max((nums[i]-1)*(nums[j]-1),maxi);
            i++;
        }
        return maxi;
    }
};