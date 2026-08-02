class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(odd.rbegin(),odd.rend());
        sort(even.begin(),even.end());
        int indx1=0;
        int indx2=0;
        vector<int>result;
        for(int i =0;i<nums.size();i++){
            if(i%2==0){
                result.push_back(even[indx1]);
                indx1++;
            }
            else{
                result.push_back(odd[indx2]);
                indx2++;
            }
        }
        return result;
    }
};