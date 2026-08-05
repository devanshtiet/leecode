class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        vector<int>result;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int currsum=0;
            for(int j=i;j<nums.size();j++){
                currsum+=nums[j];
                if((j-i+1)%2==1){
                    
                    sum+=currsum;

                    }
                }
            }
        
        return sum;
    }
};