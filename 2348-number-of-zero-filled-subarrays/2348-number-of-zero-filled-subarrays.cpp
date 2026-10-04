class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long noOfSub=0,noOfArr=0;
        for(int v : nums){
            if(v==0){
                noOfArr++;
                noOfSub+=noOfArr;
            }
            else{
                noOfArr=0;
            }
        }
        return noOfSub;
    }
};