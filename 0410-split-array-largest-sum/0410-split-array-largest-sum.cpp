class Solution {
public:

    int countSubarrays(vector<int>& nums, int mid) {

        int count = 1;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(sum + nums[i] <= mid) {
                sum += nums[i];
            }
            else {
                count++;
                sum = nums[i];
            }
        }

        return count;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());

        int high = 0;

        for(int i = 0; i < nums.size(); i++) {
            high += nums[i];
        }

        while(low < high) {

            int mid = low + (high - low) / 2;

            int count = countSubarrays(nums, mid);

            if(count <= k) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};