class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums.back();
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        vector<int>dp1(n-1); // the approach is simple we are dividing it into two problems

        vector<int>dp2(n);
        // case 1 taking the first house
        dp1[0]=nums[0];
        dp1[1]=max(dp1[0],nums[1]);
        for(int i=2;i<n-1;i++){
             dp1[i]=max(dp1[i-1],nums[i]+dp1[i-2]);
        }
        // case 2 skipping the first and taking the last house 
        dp2[0]=0;
        dp2[1]=max(dp2[0],nums[1]);
        for (int i=2;i<n;i++){
            dp2[i]=max(nums[i]+dp2[i-2],dp2[i-1]);
        }
        return max(dp1[n-2],dp2[n-1]);


    }
};