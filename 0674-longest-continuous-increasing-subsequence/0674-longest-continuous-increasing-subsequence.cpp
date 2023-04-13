class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int current_r=0, best_r=0;
        for(int i=0; i<nums.size(); i++){
            if(i==0 || nums[i-1]>=nums[i]){
                current_r=1;
            }else{
                current_r++;
            }
            best_r= max(best_r,current_r);
        }
        return best_r;
    }
};