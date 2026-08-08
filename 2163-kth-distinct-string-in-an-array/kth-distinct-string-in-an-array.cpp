class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mapp;
        for(auto x :arr){
            mapp[x]++;
        }
        for(auto x:arr){
            if(mapp[x]==1){
                k--;
                if(k==0){
                    return x;
                }
            }
        }
        return "";
    }
};