class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i : nums) {
            if (i != 0) {
                nums[j] = i;
                j++;
            }
        }
        while (j != nums.size()) {
            nums[j] = 0;
            j++;
        }
    }
};