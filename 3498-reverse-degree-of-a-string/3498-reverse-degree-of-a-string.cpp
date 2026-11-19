class Solution {
public:
    int reverseDegree(string s) {
        int num = 31;
        int sum=0;
        int n = s.length();
        for(int i=0;i<n;i++){
           sum=sum+(27 - (s[i] & num))*(i+1);
        }
        return sum;
    }
};