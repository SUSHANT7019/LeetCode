class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n =matrix.size();
        vector<int> output(n);
        for(int i = 0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                output[i]=output[i]+matrix[i][j];
            }
        }
        return output;
    }
};