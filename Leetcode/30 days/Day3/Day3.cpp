class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int end = 0, here = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            end += nums[i];
            if (here < end) {
                here = end;
            }
            if (end < 0)
                end = 0;
            cout << here << endl;
        }
        return here;
    }
};