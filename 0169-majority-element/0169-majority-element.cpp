class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele =0,count=0;
        for(int i =0;i<nums.size();i++){
            count=0;
            ele = nums[i];
        for(int j= 0;j<nums.size();j++)
        {
        
            
            if(nums[j]==nums[i]){
                count++;
            }
            if(count >nums.size()/2){
                return ele;
            }
        }   
        }
        
        return ele;
    }
};