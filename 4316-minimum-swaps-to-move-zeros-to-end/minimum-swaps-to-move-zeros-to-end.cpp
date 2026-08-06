class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int count=0;
        while(j>=i ){ 
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                count++;
                j--;

            }
            else{
                if(nums[i]!=0){
                    i++;
                }
                if(nums[j]==0){
                    j--;
                }
            }

        }
        return count;
    }
};