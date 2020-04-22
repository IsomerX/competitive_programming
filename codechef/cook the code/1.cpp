#include<bits/stdc++.h>

#define ll long long


using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		ll a, b, c;
		cin >> a >> b >> c;	
		ll d = (c - b) / a;
		cout << d * a + b << endl;
	}	
	return 0;
}

