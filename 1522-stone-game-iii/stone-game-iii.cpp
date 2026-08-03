class Solution {
public:
        int n=0;
        vector<int>dp;
        int solve(vector<int>& nums,int i){
            if(i>=n){
                return 0;
            }
            if (dp[i]!=-1){
                return dp[i];
            }
            int result= nums[i]-solve(nums,i+1);
            if(i+1<n){
                result=max(result,nums[i]+nums[i+1]-solve(nums,i+2));

            }
            if(i+2<n){
                result=max(result,nums[i]+nums[i+1]+nums[i+2]-solve(nums,i+3));
            }
            return dp[i]=result;
        }
    string stoneGameIII(vector<int>& stones) {
        n=stones.size();
        dp.resize(n+1,-1);
        int final=solve(stones,0);
        if(final<0){
            return "Bob";
        }
        else if(final>0){
            return "Alice";
        }
        return "Tie";
    }
};