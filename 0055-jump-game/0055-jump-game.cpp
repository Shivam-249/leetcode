class Solution {
public:
    bool solveMem(vector<int>& nums, int index, vector<int>& dp)
    {
        if(index >= nums.size() - 1)
            return true;
        if(dp[index] != -1)
            return dp[index];
        for(int jump = 1; jump <= nums[index]; jump++)
        {
            if(solveMem(nums, index + jump, dp))
            {
                return dp[index] = 1;
            }
        }
        return dp[index] = 0;
    }
    bool canJump(vector<int>& nums) 
    {
        int index = 0;
        vector<int> dp(nums.size(), -1);
        return solveMem(nums, index, dp);
    }
};