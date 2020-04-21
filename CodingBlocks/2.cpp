#include<bits/stdc++.h>

#define ll long long
#define ad 1000000

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	long long a, b;
	cin >> a >> b;
	cout << __gcd(a,b) << endl;
	return 0;
}

