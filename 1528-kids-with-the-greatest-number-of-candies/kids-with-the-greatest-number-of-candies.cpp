class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>result(n,false);
        for (int i=0;i<n;i++){
            if(candies[i]+extraCandies >= *max_element(candies.begin(),candies.end())){
                    result[i]=true;
            }
        }
        return result;
        
    }
};