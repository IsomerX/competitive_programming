class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int siz = str.size();
        vector<pair<string, int>> a(siz);
        vector<string> strs(str);
        for (int i = 0; i < siz; i++) {
            sort(strs[i].begin(), strs[i].end());
            a[i] = make_pair(strs[i], i);
        }
        sort(a.begin(), a.end());
        vector<vector<string>> r;
        int i = 0;
        while (i < siz) {
            string tem = a[i].first;
            vector<string> temp;
            while (i < siz && a[i].first == tem) {
                temp.emplace_back(str[a[i].second]);
                i++;
            }
            r.emplace_back(temp);
        }
        return r;
    }
};