class Solution {
public:
    
    int solveRec(vector<int>&coins,int idx,int sum,vector<vector<int>>&dp)
    {
        if(sum==0) return 1;
        if(sum<0) return 0;
        if(idx<0)  return 0;

        if(dp[idx][sum]!=-1)  return dp[idx][sum];

        int exclude=solveRec(coins,idx-1,sum,dp);
        int include=solveRec(coins,idx,sum-coins[idx],dp);

        dp[idx][sum]=exclude+include;

        return dp[idx][sum];
    }        
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return solveRec(coins,n-1,amount,dp);
    }
};    