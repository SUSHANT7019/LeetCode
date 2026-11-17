class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum =0;
return accumulate(nums.begin(), nums.end(), 0)%k;

    }
};