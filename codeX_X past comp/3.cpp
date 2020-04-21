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
	while(t--){
		string a;
		cin >> a;
		string s = a;
		string cpy = a;
		sort(a.begin(), a.end());
		string cpy1 = cpy;
		sort(cpy1.rbegin(), cpy1.rend());
		if(cpy == a && a == cpy1) 
		    cout << "-1" << '\n';
		else 
		    cout << a << '\n';
	}	
	return 0;
}

