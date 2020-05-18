class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> elementCount;
        int size = nums.size() / 2;

        for(const auto& num : nums) {
            elementCount[num]++;
            if(elementCount[num] > size)
                return num;
        }
        return -1;
    }
};
