class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> output(matrix.size());
        for(int i = 0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++){
                output[i]=output[i]+matrix[i][j];
            }
        }
        return output;
    }
};