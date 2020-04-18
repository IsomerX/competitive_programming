#include<bits/stdc++.h>

#define ll long long


using namespace std;

void solve(int x, int n, int m){
	while (x>0 && n && x/2+10<x){
		n--;x=x/2+10;
	}
	if (x<=m*10)
		cout << "YES\n";
	else 
		cout << "NO\n"; 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	int t, a, b, c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		solve(a,b,c);
	}	
	return 0;
}
