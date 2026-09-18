class Solution {
public:
    bool solve(vector<int>& nums,int index)
    {
        if(index>=nums.size()-1)
        return true;
        for(int jump=1;jump<=nums[index];jump++)
        {
            if(solve(nums,index+jump))
            return true;
        }
        return false;
    }
    bool solveMem(vector<int>&nums,int index,vector<int>&dp)
    {
        if(index>=nums.size()-1)
        return true;
        if(dp[index]!=-1)
        return dp[index];
        for(int jump=1;jump<=nums[index];jump++)
        {
            if(solveMem(nums,index+jump,dp))
            return dp[index]=1;
        }
        return dp[index]=0;
    }
    bool canJump(vector<int>& nums) {
        //return solve(nums,0);
        int index=0;
        vector<int>dp(nums.size(),-1);
        return solveMem(nums,index,dp);
    }
};