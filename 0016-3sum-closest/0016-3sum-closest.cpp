class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0;
        int difference = INT_MAX;

        for(int i = 0; i < nums.size() - 2; i++)
        {
            for(int j = i + 1; j < nums.size() - 1; j++)
            {
                for(int k = j + 1; k < nums.size(); k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];

                    if(abs(target - sum) < difference)
                    {
                        difference = abs(target - sum);
                        ans = sum;
                    }
                }
            }
        }

        return ans;
    }
};