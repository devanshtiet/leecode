class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        if(s.size()==1){
            return 1;
        }
            int i=s.size()-1;
            while(i>=0 && s[i]==' '){
                i--;

            }
            for(int j=i;j>=0;j--){
                if(s[j]==' '){
                    break;
                }
                ans++;
            }
        return ans;
    }
};