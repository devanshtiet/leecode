class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for (int it: arr){
            mp[it]++;
        }
        int maxi=-1;
        for(auto x:mp){
            if(x.second == x.first){
                maxi=max(maxi,x.first);
            }
        }
        return maxi;
    }
};