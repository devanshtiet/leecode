class Solution {
public:
    int strStr(string haystack, string needle) {
        // size_t pos = haystack.find(needle);
        if(needle.size()>haystack.size()){
            return -1;
        }
        int j=needle.size()-1;
    for(int i=0;i<=haystack.size()-needle.size();i++){
        if(haystack[i]==needle[0] && haystack[i+j]==needle[j]){
            if(haystack.substr(i,needle.size())==needle){
                return i;
            }
        }

    }

    return -1;
        // return pos == string::npos ? -1 : (int)pos;
    }
};