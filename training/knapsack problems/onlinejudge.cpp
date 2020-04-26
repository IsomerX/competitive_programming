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
	int t, x;
	cin >> t;
	while(t--){
		cin >> x;
		int n;
		cin >> n;
		vector<int> a(n+1, 0);
		int sum = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum+=a[i];
		}
		bool ro[21][1001] = {0};
		for(int i = 0; i <= n; i++){
			ro[i][0] = 1;
		}
		for(int i = 1; i <= n; i++){
			memcpy(ro[i],ro[i-1],sizeof(ro[i-1]));
			for(int j = x; j >= 0; j--){
				if(ro[i][j-a[i]])
					ro[i][j] = 1;
			}
		}
		for(int i = x; i >= 0; i--)
			if(ro[n][i]){
				cout << i << endl;
				break;
			}
			else
				continue;
	}	
	return 0;
}

