class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int sizeS = s.size();
        int sizeP = p.size();
        
        vector<int> target(26), current(26);
        for (const auto c : p)
            target[c - 'a']++;
        
        for(int i = 0; i < sizeS; ++i) {
            current[s[i] - 'a']++;
            if(i >= sizeP)
                current[s[i - sizeP] - 'a']--;
            if(current == target)
                result.push_back(i - sizeP + 1);
        }
        return result;
    }
};
