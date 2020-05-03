class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazineMap;
                
        for(const auto& ch : magazine) {
            magazineMap[ch]++;
        }
        
        for(const auto& ch : ransomNote) {
            if(magazineMap[ch] == 0 || magazineMap.find(ch) == magazineMap.end()) {
                return false;;
            }
            
            magazineMap[ch]--;
        }
        
        return true;
    }
};
