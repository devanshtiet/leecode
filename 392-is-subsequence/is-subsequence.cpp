class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sizee=0;
        int j=0;
        for(int i=0;i<t.size();i++){
            if(s[j]==t[i] && j<s.size()){
                sizee++;
                j++;
            }
        }
        if(sizee==s.size()){
            return true;
        }
        return false;
    }
};