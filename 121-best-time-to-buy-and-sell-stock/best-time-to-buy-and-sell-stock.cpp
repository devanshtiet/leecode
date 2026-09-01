class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int maxpro=0;
        for(int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            maxpro=max(maxpro,prices[i]-mini);
        }
        return maxpro;

    }
};