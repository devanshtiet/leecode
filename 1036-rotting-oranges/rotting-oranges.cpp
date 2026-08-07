class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>>directions={
            {-1,0},{1,0},{0,-1},{0,1}
        };
        queue<pair<int,int>>q;
        int m=grid.size();
        int n=grid[0].size();
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});

                }
            }
        }
        int ans=-1;
        while(!q.empty()){
            int size=q.size();
            ans++;
            {
                while(size--){
                    auto curr=q.front();
                    q.pop();
                    int row=curr.first;
                    int col=curr.second;
                    for (auto dir :directions){
                        int newrow=row+dir.first;
                        int newcol=col+dir.second;
                        if(newrow>=0 && newrow<m && newcol>=0 && newcol<n && grid[newrow][newcol]==1){
                            grid[newrow][newcol]=2;
                            q.push({newrow,newcol});
                        }
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;

                }
            }
        }
        if(ans==-1){
            return 0;
        }
        return ans;
        
    }
};