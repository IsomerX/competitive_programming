#include<bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n,0);
	for(int i =0 ;i <n;i++){
		cin >>a[i];
	}
	int cnt = 0;
	for(int i = 1; i <n-1;i++){
			if(a[i]>a[i-1])
				if(a[i]>a[i+1])
					cnt++;
	}
	cout << cnt << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	
	int t;
	cin >> t;
	for(int tt = 1; tt <= t; tt++){
		cout << "Case #" << tt << ": ";
		solve();
	}
	return 0;
}

