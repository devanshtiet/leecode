class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int result=0;
        for (int i=0;i<nums.size();i++){
            unordered_map<int,int>map;
            for (int j=i;j<nums.size();j++){
                map[nums[j]]++;
                if (map[target]>(j-i+1)/2){
                    result=result+1;
                }

            }

        }
        return result;
    }
};