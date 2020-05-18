class Solution {
public:
    string removeKdigits(string num, int k) {
        string result;
        
        for (const auto ch : num) {
            while (k > 0 && !result.empty() && result.back() > ch) {
                result.pop_back();
                --k;
            }
            
            if (!result.empty() || ch != '0') 
                result.push_back(ch);
        }
        while (result.size() && k--) 
            result.pop_back();
        
        return result.empty() ? "0" : result;
    }
};
