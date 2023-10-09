class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};
        int count = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                if (count == 0) {
                    result[0] = i;
                }
                count++;
            }
        }
        
        if (count > 0) {
            result[1] = result[0] + count - 1;
        }
        
        return result;
    }
};