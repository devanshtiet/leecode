class Solution {
public:
    bool canConstruct(string s, string m) {
        unordered_map<char,int>mp;
        for(auto x:m){
            mp[x]++;
        }
        for (auto x:s){
            if(mp[x]==0){
                return false;
            }
            mp[x]--;
        }
        
        return true;
    }
};