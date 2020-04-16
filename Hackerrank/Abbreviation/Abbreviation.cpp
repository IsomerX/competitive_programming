#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string abbreviation(string a, string b) {
    unordered_map<char, int> q;
    for (auto c : b) {
        q[c]++;
    }
    bool o = 1;
    for (auto c : a) {
        if (q[toupper(c)] > 0) {
            q[toupper(c)]--;
        }
        else if (c >= 'A' && c <= 'Z') {
            o = 0;
        }
    }
    cout << endl;
    if (o == 0) {
        return "NO";
    }
    bool f = 1;
    for (auto c : b) {
        if (q[c] >= 1) {
            f = 0;
            break;
        }
    }
    cout << endl;
    if (f == 0) {
        return "NO";
    }
    else {
        return "YES";
    }

}

int main() {
    string a = "daBcd", b = "ABC";
    cout << abbreviation(a, b) << endl;
	return 0;
}