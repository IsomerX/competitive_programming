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
	ll t, a, b, c, s;
	cin >> t;
	while(t--){
		cin >> s >> a >> b >> c;
		ll d = s/c;
		ll rem = d/a;
		rem = rem * b;
		cout << d + rem << endl;
	}	
	return 0;
}

