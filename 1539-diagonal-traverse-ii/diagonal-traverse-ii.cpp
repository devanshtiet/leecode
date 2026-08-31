class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>>mp;
        int maxD=0;
        for (int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                mp[i+j].push_back(nums[i][j]);
                maxD=max(maxD,i+j);
            }
        }
        vector<int>ans;
        for(int d=0;d<=maxD;d++){
            for(auto x:mp[d]){
                ans.push_back(x);
            }
        }
        return ans;
    }
};