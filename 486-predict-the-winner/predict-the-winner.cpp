class Solution {
public:
int solve(int i,int j,vector<int>&nums){
    if (i>j){
        return 0;
    }
    if(i==j){
        return nums[i];
    }

        int take_i=nums[i]+min(solve(i+2,j,nums),solve(i+1,j-1,nums));
        int take_j=nums[j]+min(solve(i+1,j-1,nums),solve(i,j-2,nums));
        return max(take_i,take_j);

}
    bool predictTheWinner(vector<int>& nums) {
        int total_score=0;
        for (int i=0;i<nums.size();i++){
            total_score+=nums[i];
        }
        int player1_score= solve(0,nums.size()-1,nums);
        int player2_score=total_score-player1_score;

        int i=0;
        int j= nums.size()-1;
        return player1_score>=player2_score;


    }
};