class Solution {
public:
    long long square(long long num){
        return num*num;
    }

    bool judgeSquareSum(int c) {
            long long left=0;
            long long right=sqrt(c);
            while(left<=right){
                long long curr=square(left)+square(right);
                if((square(left)+square(right))==c){
                    return true;
                }
                else if ((square(left)+square(right))<c){
                    left++;
                }
                else 
                {
                    right--;
                }
        }
        return false;
    }
};