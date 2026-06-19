class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>result(gain.size()+1);
        result.push_back(0);
        result.push_back(gain[0]);
        int ress=gain[0];
        for (int i=1;i<gain.size();i++){
            ress=ress+gain[i];
            result.push_back(ress);
        }

        sort(result.begin(),result.end());
        return(result[result.size()-1]);
    }
};