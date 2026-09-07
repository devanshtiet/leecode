class Solution {
public:
    
    string reverseWords(string s) {
        vector<string>words;
        int j=0;
        for(int i=0;i<s.size();i++){
            if (s[i]==' '){
                if(i>j){
                words.push_back(s.substr(j,i-j));
                }
            j=i+1;
            }
        }

        if(j<s.size()){
            words.push_back(s.substr(j));
        }

        reverse(words.begin(),words.end());
        string ww="";
        ww +=words[0];
        for (int i=1;i<words.size();i++){
            if(i!=words.size()){
                ww +=" ";
            }
           ww += words[i];
        }
        return ww;
    }
};