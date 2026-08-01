class Solution {
public:
   static bool cmp(string &a,string &b){
        if(a.size()==b.size()){
            if(a<b){
                return true;
            }
            else{
                return false;
            }
            }
            return(a.size()<b.size());
        
    }
    string kthLargestNumber(vector<string>& nums, int k) {
    sort(nums.begin(),nums.end(),cmp);
    return nums[nums.size()-k];
    }
};