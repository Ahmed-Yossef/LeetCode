class Solution {
public:
    string frequencySort(string s) {
        map<char, int> frequencyMap;
        priority_queue<pair<int, char>> frequencyQueue;
        string result = "";
        
        for(auto ch : s)
            frequencyMap[ch]++;
            
        for(const auto& freqMapItem : frequencyMap)
            frequencyQueue.push(make_pair(freqMapItem.second, freqMapItem.first));
        
        while(!frequencyQueue.empty()) {
            auto value = frequencyQueue.top();
            result.append(value.first, value.second);
            frequencyQueue.pop();
        }
        
        return result;
    }
};
