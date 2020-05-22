class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int sum = 0;
        int maxSum = numeric_limits<int>::min();
        int minSum = numeric_limits<int>::max();
        int maxi = 0, mini = 0;
        
        for(const auto& a: A) {
            sum += a;
            maxi = max(maxi + a, a);
            maxSum = max(maxSum, maxi);
            mini = min(mini + a, a);
            minSum = min(minSum, mini);
        }
        
        if(maxSum >= 0)
            return max(maxSum, sum - minSum);
        return maxSum;
    }
};
