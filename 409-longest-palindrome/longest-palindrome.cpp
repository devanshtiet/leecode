class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1){
            return 1;
        }
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        int count =1;
        int result=0;
        for( auto x:mp){
            if(x.second==1 && count>0){
                result++;
                count--;
            }
            else if(x.second %2 ==0){
                result=result+x.second;
            }
            else{
                result=result+x.second-1;
                if(count>0){
                    result++;
                    count--;
                }
            }
           
        }
        return result;
    }
};