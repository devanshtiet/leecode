class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i;
        int j;
        int size=nums.size();
        int curr1=1;
        int curr2=1;
        int max1=INT_MIN;
        int max2=INT_MIN;
        for (i=0;i<size;i++){
            curr1=curr1*nums[i];
            max1=max(max1,curr1);
            if (curr1==0){
                curr1=1;
            }
        }
        
for( j = size-1 ; j >= 0 ; j-- ){

            curr2 *= nums[j];

            max2 = max( max2 , curr2 );

            if( curr2 == 0 ){

                curr2 = 1;
            }

            
        }

        return max( max1 , max2 );

    }
};