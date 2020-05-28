class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> result { };
        int i = 0, j = 0;
        
        while(i < A.size() && j < B.size()) {
            if(B[j][0] <= A[i][1]  && B[j][1] >= A[i][0]) {
                int start = max(A[i][0], B[j][0]);
                int end = min(A[i][1], B[j][1]);
                
                result.emplace_back(vector<int>({start, end}));
            }
            
            A[i][1] < B[j][1] ? ++i : ++j;
        }
        
        
        return result;
    }
};
