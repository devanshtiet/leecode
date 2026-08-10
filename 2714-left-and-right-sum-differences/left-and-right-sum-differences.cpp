class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int l=0;
        vector<int>leftsum;
        int lsum=0;
        leftsum.push_back(lsum);
        for (int r=0;r<nums.size()-1;r++){
            lsum += nums[r];
            leftsum.push_back(lsum);
        }
         vector<int>rightsum;
        int rsum=0;
        
        for (int r=nums.size()-1;r>0;r--){
            rsum += nums[r];
            rightsum.push_back(rsum);
        }
        reverse(rightsum.begin(),rightsum.end());
        rightsum.push_back(0);
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            result.push_back(abs(leftsum[i]-rightsum[i]));
        }


        return result;
    }
};