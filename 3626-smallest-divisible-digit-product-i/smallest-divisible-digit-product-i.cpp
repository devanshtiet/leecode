class Solution {
public:
int helper(int n,int t,int i){
    int result=1;
    while(i>0){
        result=result*(i%10);
        i=i/10;
    }
    return result;
}
    int smallestNumber(int n, int t) {
        vector<pair<int,int>>result;
            for(int i=n;i<=100;i++){
               int ans= helper(n,t,i);
                if (ans%t==0){
                    result.push_back({i,ans});
                }
               
            }
            sort(result.begin(),result.end());
            if (result.empty()){
                return -1;
            }
            return result[0].first;
    }
};