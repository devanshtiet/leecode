class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.empty()){
            return ""; 
        }
        string prefix=s[0];
        for(auto str:s){
        while(str.find(prefix)!=0){
            prefix=prefix.substr(0,prefix.length()-1);
        }
        }
        return prefix;
    }
};