class Solution {
public:
    // int summ(vector<int>& nums,int x){
    //     int suum=0;
    //     for(int i=0;i<=x;i++){
    //             suum += nums[i];
    //     }
    //     return suum;
    // }
    int subarraysDivByK(vector<int>& nums, int k) {
        //     int count=0;
        // for(int i=0;i<nums.size();i++){
        //     int suum=0;
        //     for(int j=i;j<nums.size();j++){
        //         suum += nums[j];
        //          if(suum %k == 0){
        //             count++;
        //         }
        //     }
        // }
        // return count;
    unordered_map<int,int>mp;
    mp[0]=1;
    int prefix=0;
    int count=0;
    for( int x:nums){
        prefix = prefix + x;
        int rem = prefix % k;
        if(rem<0){
            rem = rem +k;
        }
        count = count + mp[rem];
        mp[rem]++;
    }
    return count;
    }
    };














