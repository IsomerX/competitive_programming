#include <iostream>
#include <vector>

using namespace std;

/*
NOTE:
A BETTER WAY TO APPROACH THIS PROBLEM IS TO USE A SHOTY INT ARRAY
*/

int neigh(vector<vector<int>>& a, int n, int m, int x) {
	int t = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i][m] == 1) {
			break;
		}
		else {
			a[i][m] = 3;
			t++;
		}
	}
	for (int i = n+1; i < x; i++) {
		if (a[i][m] == 1) {
			break;
		}
		else {
			a[i][m] = 3;
			t++;
		}
	}
	for (int i = m+1; i < x; i++) {
		if (a[n][i] == 1) {
			break;
		}
		else {
			a[n][i] = 3;
			t++;
		}
	}
	for (int i = m -1; i >= 0; i--) {
		if (a[n][i] == 1) {
			break;
		}
		else {
			a[n][i] = 3;
			t++;
		}
	}
	int j = m - 1;
	for (int i = n - 1; i >= 0 && j>=0; i--) {
		if (a[i][j] == 1) {
			break;
		}
		else {
			a[i][j] = 3;
			t++;
		}
		j--;
	}
	j = m + 1;
	for (int i = n + 1; i < x && j < x; i++) {
		if (a[i][j] == 1) {
			break;
		}
		else {
			a[i][j] = 3;
			t++;
		}
		j++;
	}

	j = m - 1;
	for (int i = n + 1; i < x && j >= 0; i++) {
		if (a[i][j] == 1) {
			break;
		}
		else {
			a[i][j] = 3;
			t++;
		}
		j--;
	}

	j = m + 1;
	for (int i = n - 1; i >= 0 && j < x; i--) {
		if (a[i][j] == 1) {
			break;
		}
		else {
			a[i][j] = 3;
			t++;
		}
		j++;
	}

	/*for (auto i : a) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << endl;
	}*/
	return t;
}

int main() {
	int n, k, x, y;
	cin >> n >> k >> x >> y;
	x--; y--;
	vector<vector<int>> a(n, vector<int>(n, 0));
	for (int i = 0; i < k; i++) {
		int o, p;
		cin >> o >> p;
		o--;
		p--;
		a[o][p] = 1;
	}
	a[x][y] = 2;
	cout << neigh(a, x, y, n) << endl;
	cout << endl;
	
	cin >> x;
	return 0;
}






///---------------------------------------///

