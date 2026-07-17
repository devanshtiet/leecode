class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left=0;
        int right=0;
        bool flag=false;
        for (int i=0;i<word.size();i++){
            if(word[i]==ch){
                flag=!flag;
                break;
            }
            right++;
        }
        if (flag){
        while(left<right){
            swap(word[left],word[right]);
            left++;
            right--;
        }
        }
        return word;
    }
};