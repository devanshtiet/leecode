class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<vector<int>>result(n,vector<int>(n));
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                result[j][i]=nums[i][j];
            }
        }for(int i=0;i<nums.size();i++){
        reverse(result[i].begin(),result[i].end());
        }
        nums=result;
    }
};