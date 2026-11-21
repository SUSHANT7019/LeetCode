class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n= nums.size();
        vector<int> less;
        vector<int> equal;
        vector<int> greater;
        vector<int> ans;
        for(int i: nums){
            if(i==pivot){
                equal.push_back(i);
            }else if(i<pivot){
                less.push_back(i);
            }else{
                greater.push_back(i);
            }
        }
        equal.insert(equal.end(),greater.begin(),greater.end());
        less.insert(less.end(),equal.begin(),equal.end());
        
        return less;
    }
};