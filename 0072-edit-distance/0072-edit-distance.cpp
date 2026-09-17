class Solution {
public:
    int solveMem(string s1, string s2, int m, int n, vector<vector<int>>& dp)  
    { 
        if(m == 0) return n; 
        if(n == 0) return m; 
        if(dp[m][n] != -1)
        return dp[m][n]; 
        if(s1[m-1] == s2[n-1])  { 
            return dp[m][n] = solveMem(s1, s2, m-1, n-1, dp); 
       } 
        int removeOp  = solveMem(s1, s2, m-1, n, dp); 
        int insertOp  = solveMem(s1, s2, m, n-1, dp); 
        int replaceOp = solveMem(s1, s2, m-1, n-1, dp); 
        dp[m][n] = 1 + min({removeOp, insertOp, replaceOp}); 
        return dp[m][n]; 
    } 
    int minDistance(string word1, string word2) {
        int m = word1.length(); 
        int n = word2.length(); 
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1)); 
        return solveMem(word1, word2, m, n, dp); 
    }
};