class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int maxsum=0;
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int currsum=nums[left]+nums[right];
            maxsum=max(maxsum,currsum);
            left++;
            right--;
        }       
        
        return maxsum;
    }
};