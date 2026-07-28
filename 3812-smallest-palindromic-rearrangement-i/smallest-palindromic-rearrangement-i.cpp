class Solution {
public:
    string smallestPalindrome(string s) {
        if (s.size()==1)
        {
            return s;
        }
        sort(s.begin(),s.begin()+s.size()/2);
        for(int i=0;i<s.size()/2;i++){
            s[s.size()-i-1]=s[i];
        }
        return s;
    }
};