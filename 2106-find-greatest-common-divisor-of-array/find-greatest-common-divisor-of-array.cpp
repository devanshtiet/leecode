class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>result;
        int small=nums[0];
        int large= nums[nums.size()-1];
        for (int i=1;i<=large;i++){
            if(small % i ==0 && large% i==0){
                result.push_back(i);
            }
        }
        return result[result.size()-1];
    }
};