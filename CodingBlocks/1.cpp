#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	int n;
	cin >> n;
	vector<vector<int>> in(n, vector<int>(n));
	for(int j = 0; j < n; j++){
		for(int i = n-1; i>=0; i--)
			cin >> in[i][j];
	}
	for(auto i:in){
		for(int j : i)
			cout << j << " ";
		cout << endl;
	}
	return 0;
}

