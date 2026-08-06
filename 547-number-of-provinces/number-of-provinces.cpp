class Solution {
public:
void dfs( unordered_map<int,vector<int>>&adj,int i,vector<bool>&isvisited){
    isvisited[i]=true;
    for(auto v:adj[i]){
        if(isvisited[v]==false){
            dfs(adj,v,isvisited);
        }
    }
}

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        unordered_map<int,vector<int>>adj;
        vector<bool>isvisited(n,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i); // this whole code is just for converting it into a list,we can do this without using this
                }
            }

        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!isvisited[i]){
                dfs(adj,i,isvisited);
                count++;
            }
        }
        return count;
    }
};