class Solution {
public:
    int atmost(vector<int>& nums, int goal) {
        int left=0;
        int right=0;
        int count=0;
        int sum=0;
        if (goal<0){
            return 0;
        }
        while(right <nums.size()){
            sum +=nums[right];
            while(sum>goal){
                sum -=nums[left];
                left=left+1;

            }
            count = count + (right-left+1);
            right++;
        }
        return count;
    }
   int numSubarraysWithSum(vector<int>& nums, int goal) {
        // Return difference between subarrays with sum at most goal and at most (goal - 1)
        return atmost(nums, goal) - atmost(nums, goal - 1);
    }

};