class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=0;
        int result=nums.size()/2;
        for(auto x:mp){
            if(x.second>result){
                ans=x.first;
            }
        }
        return ans;

    }
};