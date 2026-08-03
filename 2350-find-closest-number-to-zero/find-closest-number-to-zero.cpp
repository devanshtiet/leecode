class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest=nums[0];
        int mini=INT_MAX;
        for(int num:nums){
            if(abs(num)<abs(closest) ||abs(num)==abs(closest)&& num>closest){
                closest=num;
            }
        }
        return closest;
    }
      
};