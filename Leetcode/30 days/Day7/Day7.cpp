class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int, int> a;
        for (int i : arr) {
            a[i]++;
        }
        int tot = 0;
        for (int i : arr) {
            if (a[i + 1] > 0)
                tot++;
        }
        return tot;
    }
};