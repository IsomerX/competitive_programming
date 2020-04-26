#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll mino(vector<ll> a){
	int ans = 1;
	sort(a.begin(),a.end());
	for(int i = 0; i < a.size(); i++){
		if(a[i] == ans)
			ans++;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<ll> a(n+1, 0);
		for(int i = 0; i < n; i++)
			cin >> a[i+1];
		ll sum = 0;
		for(int b = 0; b <=pow(2,n+1)+1; b+=2){
			int o = 1;
			vector<ll> temp;
			while(o<n+1){
				if(b & 1 << o){
					temp.push_back((ll)a[o]);
				}
				o++;
			}
			sum += mino(temp);
		}
		cout << sum - 1 << endl;
	}	
	return 0;
}

