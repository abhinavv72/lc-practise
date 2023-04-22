class Solution {
public:
    vector<vector<int>> memo;
    
    int dp(string& s, int i, int j) {
        if (i >= j) {
            return 0;
        }
        
        if (memo[i][j] != -1) {
            return memo[i][j];
        }
        
        if (s[i] == s[j]) {
            return memo[i][j] = dp(s, i + 1, j - 1);
        } else {
            return memo[i][j] = 1 + min(dp(s, i + 1, j), dp(s, i, j - 1));
        }
    }
    
    int minInsertions(string s) {
        int n = s.length();
        memo.resize(n, vector<int>(n, -1));
        return dp(s, 0, n - 1);
    }
};
