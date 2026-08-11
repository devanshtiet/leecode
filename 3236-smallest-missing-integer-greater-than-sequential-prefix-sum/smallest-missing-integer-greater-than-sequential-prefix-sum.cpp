class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum += nums[i];

            }
            else
            break;
        }
        int result=sum;
        while(find(nums.begin(),nums.end(),result)!=nums.end()){// this means that it will return nums.end if the element is not present in the nums, hence we dont want to have nums.end so we will continue till we find the 
            result++;
        }
        return result;
    }
};