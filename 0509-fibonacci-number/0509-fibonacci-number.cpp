class Solution {
public:
    int fib(int n) {
        int first=0,second=1,ans;
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        {
            for(int i=1;i<n;i++)
            {
                ans=first+second;
                first=second;
                second=ans;
            }
        }
        return ans;
    }
};