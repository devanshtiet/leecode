class Solution {
public:
    int helper(vector<int>&nums,long long i,long long j ,long long k){
        return nums[i]*100+nums[j]*10+nums[k];
    }

    vector<int> findEvenNumbers(vector<int>& nums) {

        vector<int>result;
        long long  n= nums.size();
        for(long long i=0;i<n;i++){
            for(long long j=0;j<n;j++){
                for(long long k=0;k<n;k++){
                    if(nums[i]!=0 && i!=j && i!=k && j!=k && nums[k]%2==0){
                        result.push_back(helper(nums,i,j,k));
                    }
                }
            }
        }
         sort(result.begin(),result.end());
         result.erase(unique(result.begin(),result.end()),result.end());

        return result;
    }
};