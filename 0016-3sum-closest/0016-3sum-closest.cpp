class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX,i,j,k,sum=0,closest=0;
        for(i=0;i<nums.size()-2;i++)
        {
            for(j=i+1;j<nums.size()-1;j++)
            {
                for(k=j+1;k<nums.size();k++)
                {
                    sum=nums[i]+nums[j]+nums[k];
                    if(abs(target-sum)<ans)
                    {
                        ans=abs(target-sum);
                        closest=sum;
                    }
                }
            }
        } 
        return closest; 
    }
};