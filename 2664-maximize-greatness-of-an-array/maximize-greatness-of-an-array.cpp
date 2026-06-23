class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int left=0;
        int right=0;
        int count=0;
        sort (nums.begin(),nums.end());
        while (right<nums.size()){
            if (nums[right]>nums[left]){
                left++;
                count++;

            }
            right++;
        }
        return count;
    }
};