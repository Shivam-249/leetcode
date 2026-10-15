
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for (int i = left; i <= right; i++) {
            int count = 0;
            int num = i;

            while (num > 0) {
                if (num & 1)
                    count++;

                num >>= 1;
            }

            int x = 0;

            if (count > 1) {
                for (int j = 2; j < count; j++) {
                    if (count % j == 0)
                        x++;
                }

                if (x == 0)
                    ans++;
            }
        }
        return ans;
    }
};
