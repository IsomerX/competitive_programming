class Solution {
public:
    int min(vector<int>& a, int o, int b) {
        int small = a[o], si = o;
        for (int i = o; i <= b; i++) {
            if (a[i] < small) {
                small = a[i];
                si = i;
            }
        }
        return si;
    }
    int maxProfit(vector<int>& prices) {
        int start = 0;
        int sum = 0;
        int j = 0;
        for (int i = 0; i < prices.size(); i++) {
            int temp = prices[min(prices, j, i)];
            if (temp < prices[i]) {
                sum += prices[i] - temp;
                j = i;
            }
            else
                continue;
        }
        return sum;
    }
};