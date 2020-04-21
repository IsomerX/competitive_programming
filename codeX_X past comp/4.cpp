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
	int t, a;
	cin >> t;
	while(t--){
		cin >> a;
		a = a >> 1;
		cout << a << endl;
	}	
	return 0;
}

