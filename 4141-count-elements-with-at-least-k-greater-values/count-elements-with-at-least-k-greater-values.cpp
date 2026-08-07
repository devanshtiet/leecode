class Solution {
public:
    int countElements(vector<int>& nums, int k) {

        int n=nums.size();
        if(k==0){
            return n;
        }
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-k;i++){
            if(nums[i]<nums[n-k]){
                ans++;
            }
            
        }
       return ans;
    }
};