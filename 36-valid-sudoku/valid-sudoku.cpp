class Solution {
public:

    bool validbox(vector<vector<char>>&grid,int sr,int er,int sc,int ec){
        unordered_set<char>st;
        for (int i=sr;i<=er;i++){
            for(int j=sc;j<=ec;j++){
                if(grid[i][j]=='.'){
                    continue;
                }
                if(st.find(grid[i][j]) !=st.end()){
                    return false;
                }
                st.insert(grid[i][j]);

            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& grid) {
      // validationg rows
      for(int row=0;row<9;row++){
        unordered_set<char>st;
        for(int col=0;col<9;col++){
            if(grid[row][col]=='.'){
                continue;
            }
            if(st.find(grid[row][col])!=st.end()){
                return false;
            }
            st.insert(grid[row][col]);
        }
      }  

    //validating cols
      for(int col=0;col<9;col++){
        unordered_set<char>st;
        for(int row=0;row<9;row++){
            if(grid[row][col]=='.'){
                continue;
            }
            if(st.find(grid[row][col])!=st.end()){
                return false;
            }
            st.insert(grid[row][col]);
        }
      }  

      //validating 3*3
      for (int sr=0;sr<9;sr+=3){
        int er=sr+2;
        for (int sc=0;sc<9;sc+=3){
            int ec=sc+2;
            if(!validbox(grid,sr,er,sc,ec)){
                return false;
            }
        }
      }
      return true;
    }
};