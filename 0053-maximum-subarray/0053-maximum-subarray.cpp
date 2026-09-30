class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,SUM=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum +=nums[i];
            SUM=max(sum,SUM);
            if(sum<0)
            sum=0;
        }
        return SUM;
    }
};