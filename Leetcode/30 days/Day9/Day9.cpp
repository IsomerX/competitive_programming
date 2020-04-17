class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int a = S.size() - 1;
        int b = T.size() - 1;
        int ss = 0, st = 0;
        while (a >= 0 || b >= 0) {
            while (a >= 0) {
                if (S[a] == '#') {
                    ss++;
                    a--;
                }
                else if (ss > 0) {
                    ss--;
                    a--;
                }
                else
                    break;
            }

            while (b >= 0) {
                if (T[b] == '#') {
                    st++;
                    b--;
                }
                else if (st > 0) {
                    st--;
                    b--;
                }
                else
                    break;
            }

            if (a >= 0 && b >= 0 && S[a] != T[b])
                return false;

            if ((a >= 0) != (b >= 0))
                return false;
            a--; b--;

        }
        return true;
    }
};