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
	int t;
	cin >> t;
	int u = 0;
	unordered_map<int, int> a;
	while(t--){
		int x;
		cin >> x;
		a[x] = u;
		u++;
	}
	int r;
	cin >> r; 
	if(a[r] == 0)
		cout << "-1" << endl;
	else
		cout << a[r] << endl;
	return 0;
}

