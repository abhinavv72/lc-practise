class Solution {
public:
    int solve(vector<int>& nums1 , vector<int>& nums2,int i , int j,vector<vector<int>>&dp){

      // either one or both array finished so we can not take dot product
        if(i>=nums1.size() || j>=nums2.size()){
            return INT_MIN;
       // return neg infinity is important we cannot return zero
       //Can you guess why?
       /* if our dot product till now is negative we have to take as mentioned in que we need to take non-empty subsequences.If we return zero it will override the negative dot product(we are taking maximum) and we will get zero as our ans*/
        }


        // if negative infinity is not there we can directly return
        if(dp[i][j]!=INT_MIN) return dp[i][j];
        int sum =-1e7;
        int product = nums1[i]*nums2[j];
        sum = max(sum,product+max(0,solve(nums1,nums2,i+1,j+1,dp)));//taking the current dor product.
        sum = max(sum,solve(nums1,nums2,i+1,j+1,dp)); // leaving both
        sum = max(sum,solve(nums1,nums2,i+1,j,dp));
        sum = max(sum,solve(nums1,nums2,i,j+1,dp));
                
            
        
        return dp[i][j]=sum; // returning and storing it in dp .
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        // initialized dp array with negative infinity
        vector<vector<int>> dp(n,vector<int>(m,INT_MIN));
        return solve(nums1,nums2,0,0,dp);
    }
};