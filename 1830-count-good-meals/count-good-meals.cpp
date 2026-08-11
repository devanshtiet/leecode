class Solution {
public:
 const int MOD = 1e9 + 7;
    int countPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long count=0;
        for(auto x:nums){
            for(int j=1;j<=(1 << 21);j=j*2){
                int need=j-x;
                if(mp.count(need)){
                    count =(count+mp[need])%MOD;
                }
            }
            mp[x]++;
        }
        return count;
    }
};