class Solution {
public:
    
    int solveMem(vector<int>&coins,int n,int sum,vector<vector<int>>&dp)
    {
        if(sum==0) return 1;
        if(sum<0) return 0;
        if(n==0)  return 0;

        if(dp[n][sum]!=-1)  return dp[n][sum];

        int exclude=solveMem(coins,n-1,sum,dp);
        int include=solveMem(coins,n,sum-coins[n-1],dp);

        dp[n][sum]=exclude+include;

        return dp[n][sum];
    }        
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return solveMem(coins,n,amount,dp);
    }
};    