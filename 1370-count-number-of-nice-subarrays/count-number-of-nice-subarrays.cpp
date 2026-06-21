class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        if (k<0){
            return 0;
        }

        int left=0;
        int oddcnt=0;
        int total=0;
        for (int right=0;right<nums.size();right++){
            if(nums[right]%2 !=0){
                oddcnt++;
            }

            while(oddcnt>k){
                if(nums[left]%2 !=0){
                    oddcnt--;
                }
                left++;
            }
            total=total+(right-left+1);
        }
    return total;
    }


int numberOfSubarrays(vector<int>& nums, int k) {
    return atmost(nums,k)-atmost(nums,k-1);
}


};