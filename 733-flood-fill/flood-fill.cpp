class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        int m=grid.size();
        int n=grid[0].size();
        int originalcol=grid[sr][sc];
        vector<pair<int,int>>directions={{-1,0},{1,0},{0,-1},{0,1}}; 
        queue<pair<int,int>>q;
        if(color==originalcol){
            return grid;
        }
        q.push({sr,sc});
        grid[sr][sc]=color;
        while(!q.empty()){
            int size=q.size();
            while(size--){
            auto curr=q.front();
            q.pop();
            int row=curr.first;
            int col=curr.second;
                for(auto dir: directions){
                    int newrow=row+dir.first;
                    int newcol=col+dir.second;
                    if(newrow>=0 && newcol>=0 && newrow<m && newcol <n && grid[newrow][newcol]==originalcol ){
                        q.push({newrow,newcol});
                        grid[newrow][newcol]=color;
                    }
                }
            }

        }
        return grid;
    }
};