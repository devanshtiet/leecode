class Solution {
public:
    int hIndex(vector<int>& citations) {
        int result=0;
        int far=0;
        for(int h=0;h<=citations.size();h++){
            int count=0;
            for(int j=0;j<citations.size();j++){
               if(citations[j]>=h){
                count++;
               }
            }
            if(count>=h){
                result=h;
            }
        }
        return result;
    }
};