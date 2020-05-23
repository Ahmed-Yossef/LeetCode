class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int result = 0;
        int rows = matrix.size(), columns = matrix[0].size();
        
        for(int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                if (i > 0 && j > 0 && matrix[i][j] > 0) {
                    matrix[i][j] = min(matrix[i - 1][j - 1], min(matrix[i - 1][j], matrix[i][j - 1])) + 1;
                }
                    
                result += matrix[i][j];
            }
        }
        
        return result;
    }
};
