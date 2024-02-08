class Solution {
public:
    // 1. Recursion
    int solve(int n)
    {
        // Base Case
        if(n == 0) return 0;

        int mini = INT_MAX;
        for(int i = 1; i * i <= n; i++)
        {
            int perfectSquare = i * i;
            int ans = 1 + solve(n - perfectSquare);
            mini = min(mini,ans);
        }

        return mini;
    }
    
    // 2. Memoization
    // TC - O(N * sqrt(N)) and SC - O(N)
    int solveMem(int n, vector<int>& dp)
    {
        // Base Case
        if(n == 0) return 0;
        if(dp[n] != -1) return dp[n];

        int mini = INT_MAX;
        for(int i = 1; i * i <= n; i++)
        {
            int perfectSquare = i * i;
            int ans = 1 + solveMem(n - perfectSquare,dp);
            mini = min(mini,ans);
        }

        dp[n] = mini;
        return dp[n];
    }
    
    // 3. Tabulation
    // TC - O(N * sqrt(N)) and SC - O(N)
    int solveTab(int n)
    {
        vector<int> dp(n+1,INT_MAX);
        dp[0] = 0;

        for(int i = 1; i <= n; i++)
        {
            int mini = INT_MAX;
            for(int j = 1; j * j <= i; j++)
            {
                int perfectSquare = j * j;
                int ans = 1 + dp[i - perfectSquare];
                mini = min(mini,ans);
            }
            dp[i] = mini;
        }
        
        return dp[n];
    }

    int numSquares(int n) {
        // 1. Recursion
        // return solve(n);

        // 2. Memoization
        // vector<int> dp(n+1,-1);
        // return solveMem(n,dp);

        // 3. Tabulation
        return solveTab(n);
    }
};