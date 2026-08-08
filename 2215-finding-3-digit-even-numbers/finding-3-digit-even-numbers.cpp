class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& nums) {
        vector<int>result;
        int n=nums.size();
        vector<int>mp(10,0);
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for (int i=1;i<=9;i++){
                if(mp[i]==0){
                    continue;
                }
                mp[i]--;
                for(int j=0;j<=9;j++){
                    if(mp[j]==0){
                        continue;
                    }
                    mp[j]--;
                    for (int k=0;k<9;k=k+2){
                        if(mp[k]==0){
                            continue;
                        }
                        result.push_back(i*100+j*10+k);
                    }
                    mp[j]++;

                }
                mp[i]++;

        }
        return result;
    }
};