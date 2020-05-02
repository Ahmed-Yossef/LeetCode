class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        
        unordered_map<char, int> stones;
        
        for(const auto& ch : S) {
            stones[ch]++;
        }
        
        for(const auto& ch : J) {
            if(auto it = stones.find(ch); it != stones.end())
                result += it->second;
        }
        
        return result;
    }
};
