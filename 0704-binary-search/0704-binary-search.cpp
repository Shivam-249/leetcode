class Solution {
public:
    int binarysearch(vector<int>&arr,int start,int end,int X)
    {
        if(start>end)
        return -1;
        int mid=start+(end-start)/2;
        if(arr[mid]==X)
        return mid;
        else if(arr[mid]<X)
        return binarysearch(arr,mid+1,end,X);
        else
        return binarysearch(arr,start,mid-1,X);
    }
    int search(vector<int>& nums, int target) {
              int n=nums.size()-1;
               return binarysearch(nums,0,n,target);
    }
};