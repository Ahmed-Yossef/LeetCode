class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        
        while(start <= end) {
            auto mid = start + (end - start) / 2;
            
            if(!(mid < nums.size() - 1 && nums[mid] == nums[mid + 1] && mid % 2 == 0) && 
               !(mid % 2 == 1 && nums[mid] == nums[mid - 1]))
                end = mid - 1;
            else 
                start = mid + 1;
        }
        
        return nums[start];
    }
};
