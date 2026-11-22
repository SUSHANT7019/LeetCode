class Solution {
public:
    int digitFrequencyScore(int n) {
        string s = to_string(n);
        int sum =0 ;
        for(char ch : s){
            sum = sum+(ch - '0');
        }
        return sum;
    }
};