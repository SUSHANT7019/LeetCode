class Solution {
public:
    int maxLength(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for(int i = 0; i<n;i++){
            unsigned long long int  p = 1;
            long long  g = 0;
            long long l = 1;
            long long sub = 0;
        for(int j=i;j<n;j++){
            g = gcd(g,nums[j]);
            l = lcm(l,nums[j]);
            p=p*nums[j];
                sub++;
            if(p == g*l){
            
                ans = max(ans,sub);
            }
        }
        }
        return ans;
    }
};