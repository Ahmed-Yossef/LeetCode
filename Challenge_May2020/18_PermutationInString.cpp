class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sizeS = s1.size();
        int sizeP = s2.size();
        
        vector<int> target(26), current(26);
        for (const auto c : s1)
            target[c - 'a']++;
        
        for(int i = 0; i < sizeP; ++i) {
            current[s2[i] - 'a']++;
            if(i >= sizeS)
                current[s2[i - sizeS] - 'a']--;
            if(current == target)
                return true;
        }
        return false;
        
    }
};
