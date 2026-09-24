class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int i,n=nums.size(),rem;
        for(i=0;i<n;i++)
        {
            int sum=0;
            while(nums[i])
            {
                rem=nums[i]%10;
                sum +=rem;
                nums[i] /=10;
            }
            if(sum==i)
            return i;
        }
        return -1;
    }
};