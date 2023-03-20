class Solution {
public:
    int f(int ind, vector<int> &slotWt, vector<int>& nums, int numSlots,map<pair<int, vector<int>>, int>&dp){
        if(ind >=nums.size()) return 0;
    
    int maxi = INT_MIN;
    if(dp.find({ind, slotWt}) != dp.end()) return dp[{ind,slotWt}];
    for(int k=1; k<=numSlots; k++){
        if(slotWt[k] < 2){
            slotWt[k]++;
            int ans = (nums[ind] &k) + f(ind+1, slotWt, nums, numSlots,dp);
            slotWt[k]--;
            maxi = max(maxi,ans);
        }
    }
    return dp[{ind, slotWt}] = maxi;
}
public : 
    int maximumANDSum(vector<int>& nums, int numSlots) {
        vector<int> slotWt(numSlots+1, 0);
        map<pair<int,vector<int>>,int>dp;
        return f(0, slotWt,nums, numSlots, dp);
    }
};