class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>mp;
        string result="";
        for(auto x: s){
            mp[x]++;
        }
        for(auto x: s){
           
            mp[x]--;
            if(result.find(x)!=string::npos){//C++ returns a special value called: npos 
                continue;
            }
            while(!result.empty() && result.back()>x && mp[result.back()]>0){
                result.pop_back();
            }
            result.push_back(x);


        }
            return result;
    }
};