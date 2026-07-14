class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int l=0;
        string result(s.size()+spaces.size(),' ');

        for(int i=0;i<s.length();i++){
            if(l<spaces.size() && i == spaces[l]){
                result[i+l]=' ';
                l++;
            }
            result[i+l]=s[i];
        }
        return result;
    }
};