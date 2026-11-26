class Solution {
public:
    bool canAliceWin(int n) {
        int turn = 10;
        int count = 0;

        while(n >= turn) {
            n -= turn;
            turn--;
            count++;
        }

        return count % 2 == 1;
    }
};