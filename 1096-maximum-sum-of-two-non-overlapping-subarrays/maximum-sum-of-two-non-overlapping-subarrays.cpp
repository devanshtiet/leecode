class Solution {
public:
int helpp(vector<int>& nums, int l, int r){
    int n = nums.size();
    int suml=0;
    int rsum=0;
    for(int i=0;i<l;i++){
        suml = suml + nums[i];
    }
    for (int j=l;j<l+r;j++){
        rsum=rsum+nums[j];
    }
    int maxl=suml;
    int result=suml+rsum;
    for (int i=l+r; i < nums.size();i++){
        suml=suml+nums[i-r] - nums[i-r-l];
        rsum=rsum + nums[i] - nums[i-r];
        maxl=max(maxl,suml);
        result= max(result,maxl+rsum);
        }

    return result;
}
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        return max(helpp(nums,firstLen,secondLen),helpp(nums,secondLen,firstLen));
    }
};