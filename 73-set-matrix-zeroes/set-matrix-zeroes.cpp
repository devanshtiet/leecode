class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>result;
        int m=matrix.size();
        int n=matrix[0].size();
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                result.push_back({i,j});
            }
        }
       } 
       for(auto p:result){
        int row=p.first;
        int col=p.second;
        for (int i=0;i<n;i++){
            matrix[row][i]=0;
        }
        for(int j=0;j<m;j++){
            matrix[j][col]=0;
        }
       }
        




    }
};