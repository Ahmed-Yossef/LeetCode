class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> unqiueChar;
        
        for(const auto& ch : s) {
            unqiueChar[ch]++;
        }
        
        for(auto i = 0; i < s.length(); ++i) {
            if(unqiueChar[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};
