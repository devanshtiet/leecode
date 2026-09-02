class Solution {
public:
    int jump(vector<int>& nums) {
        int far=0;
        int jumps=0;
        int range=0;
        if(nums.size()==1){
            return 0;
        }
        for (int i=0;i<nums.size()-1;i++){
            far=max(far,nums[i]+i);
            if(range==i){
                range=far;
                jumps++;
            }
        }
        return jumps;
    }
};