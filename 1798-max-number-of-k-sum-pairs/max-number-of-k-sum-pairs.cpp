class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums){
           mp[x]++;
        }
        int count=0;
        for(auto x :nums){
            if(mp[x]==0){
                continue;
            }
            mp[x]--;
            int need=k-x;
           if(mp[need]>0){
            count++;
            mp[need]--;

           }
        }
        return count;
    }
};