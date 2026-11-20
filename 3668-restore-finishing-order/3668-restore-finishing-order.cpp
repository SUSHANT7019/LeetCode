class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = friends.size();
        int m= order.size();
        vector<int> final;
        for(int j=0;j<m;j++){ 
        for(int i = 0;i<n;i++){
               if(order[j]==friends[i]){
               final.push_back(order[j]);
               
               }
            }
        }
        return final;
    }
};