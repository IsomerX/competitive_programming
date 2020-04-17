class Solution {
public:
    bool solve(int n) {
        if (n == 1) {
            return true;
        }
        else if (n < 10 && n>1 && n != 7) {
            return false;
        }
        else {
            int sum = 0;
            while (n > 0) {
                int x = n % 10;
                sum += x * x;
                n /= 10;
            }
            if (solve(sum))
                return true;
        }
        return false;
    }
    bool isHappy(int n) {
        return solve(n);
    }
};