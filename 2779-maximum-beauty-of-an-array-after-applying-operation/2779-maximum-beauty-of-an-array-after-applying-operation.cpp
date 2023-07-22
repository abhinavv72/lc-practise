class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
      sort(nums.begin(), nums.end());
        
        int j=0, i=0, ans=0;
        while(j<nums.size()){
            if(nums[j]-nums[i]>2*k)i++;
            else ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};