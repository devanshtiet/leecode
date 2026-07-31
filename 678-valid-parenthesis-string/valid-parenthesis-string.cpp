class Solution {
public:
    bool checkValidString(string s) {
        int high=0;
        int low=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='('){
                low++;
                high++;
            }
            if (s[i]==')'){
                low--;
                high--;
            }
            if(s[i]=='*'){
                low--;
                high++;
            }
            if(high<0){
                return false;
            }
            low=max(0,low);
        }
        if (low==0){
            return true;
        }
        return false;
    }
};