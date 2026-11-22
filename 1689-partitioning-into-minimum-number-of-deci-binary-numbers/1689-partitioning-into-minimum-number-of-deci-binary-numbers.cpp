class Solution {
public:
    int minPartitions(string n) {
        int ans = INT_MIN;
        for(char ch : n ){
            if(ans < (ch - '0')){
                ans = (ch - '0');
            }
        }
        return ans;
    }
};