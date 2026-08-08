class Solution {
public:


bool compare(string a,string b,unordered_map<string,int>&mp){
    if(mp[a]==mp[b]){
        return a<b;
    }
    return mp[a]>mp[b];
}
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>result;
        unordered_map<string,int>mp;
        for (auto x:words){
            mp[x]++;
        }

        for(auto x:mp){
                result.push_back(x.first);
            }

        
        sort(result.begin(),result.end(),[&](string a,string b){
                return compare(a,b,mp);
        });
        vector<string>finall;
        for (int i=0;i<k;i++){
            finall.push_back(result[i]);
        }
        return finall;
    }
};