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
	int a;
	cin >> a;
	long long b = 5, sum = 0;
	while(b<=a){
		sum += (int)(a/b);
		b *= 5;
	}
	cout << sum << endl;
	return 0;
}

