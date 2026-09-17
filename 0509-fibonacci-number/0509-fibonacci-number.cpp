class Solution {
public:
    int fib(int n)
    {
        if(n==0 || n==1)
        return n;

        int ans=fib(n-1)+fib(n-2);
        return ans;
    }
    int recMem(int n,vector<int>&dp) {
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        if(dp[n]!=-1)
        return dp[n];

        dp[n]=recMem(n-1,dp)+recMem(n-2,dp);
        return dp[n];
    }
};