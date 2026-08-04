class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>result;
        int j=0;
        for(int i=nums.front();i<=nums.back();i++){
            if(j<nums.size() && nums[j]==i){
                j++;
            }
           else{
                result.push_back(i);
           } 
        }
    
    
     return result;

    }
};