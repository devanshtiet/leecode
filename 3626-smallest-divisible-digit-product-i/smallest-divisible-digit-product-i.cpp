class Solution {
public:
int helper(int x){
    int product=1;
    while(x>0){
        product=product*(x%10);
        x=x/10;
    }
    return product;
}
    int smallestNumber(int n, int t) {
        while(helper(n)%t!=0){
            n++;
        }
        return n;
    }
};