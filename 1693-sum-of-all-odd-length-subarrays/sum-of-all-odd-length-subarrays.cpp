class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        vector<int>result;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if((j-i+1)%2==1){
                    for(int k=i;k<=j;k++){
                    sum=sum+nums[k];

                    }
                }
            }
        }
        return sum;
    }
};