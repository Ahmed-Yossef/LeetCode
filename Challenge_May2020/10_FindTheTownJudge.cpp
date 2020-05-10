class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N == 1 && trust.empty())
            return 1;
        
        unordered_set<int> uniqueNums;
        
        for(const auto t : trust)
            uniqueNums.insert(t[0]);
        
        unordered_map<int, int> trustMap;
        
        for(const auto t : trust) {
            trustMap[t[1]]++;
            if(trustMap[t[1]] == N - 1 && uniqueNums.count(t[1]) == 0)
                return t[1];
        }
        
        return -1;
    }
};
