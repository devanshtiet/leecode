class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh == 0){
            return 0;
        }
        int minutes=0;
        vector<pair<int,int>>directions={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto current =q.front();
                q.pop();
                int x=current.first;
                int y=current.second;
                for(auto dir :directions){
                    int newx=x+dir.first;
                    int newy=y+dir.second;
                
                // checking the boundary wali cond
                if(newx>=0 && newx<rows && newy>=0 && newy<cols 
                && grid[newx][newy]==1){
                    grid[newx][newy] = 2;
                    fresh--;
                    q.push({newx,newy});
                }
            }
            }
            minutes++;
        }
        if(fresh==0){
            return minutes -1;
        }
        return -1;
    }
};