class Solution {
public:
    bool isNonZero(int n)
        {
            while(n>0){
                if(n%10==0){
                    return false;
                }
                n=n/10;
            }
            return true;
        }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> v;
        
        for(int i = 1;i<=n;i++){
            if(isNonZero(n-i) && isNonZero(i)){
                v.push_back(n-i);
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};