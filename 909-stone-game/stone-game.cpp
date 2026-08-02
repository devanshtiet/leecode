class Solution {
public:
int t[501][501];
    int solve(int i,int j, vector<int>nums){
        if (i>j){
            return 0;
        }
        if(i==j){
            return nums[i];
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int i1=nums[i]+min(solve(i+2,j,nums),solve(i+1,j-1,nums));
        int j1=nums[j]+min(solve(i+1,j-1,nums),solve(i,j-2,nums));
        return t[i][j]=max(i1,j1);
    }
    bool stoneGame(vector<int>& piles) {
        memset(t,-1,sizeof(t));
        int n=piles.size();
        int summ=0;
        for(int i=0;i<n;i++){
            summ += piles[i];
        }
        int result=solve(0,n-1,piles);
        return result>summ/2;
        
    }
};