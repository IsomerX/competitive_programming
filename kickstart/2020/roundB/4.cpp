#include<bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
	int w,h,l,u,r,d;
	cin >> w >> h >> l >> u >> r >> d;
	l--;r--;d--;u--;
	vector<vector<double>> a(h,vector<double>(w,0));
	for(int i = u; i<=d; i++){
		for(int j = l; j <=r;j++){
			a[i][j] = -1;
		}
	}
	a[h-1][w-1] = 1;
	for(int i = 1; i < h; i++){
		if(a[i][0]==-1)
			continue;
		a[i][0] = a[i-1][0]/2;
	}
	
	for(int i = 1; i < w; i++){
		if(a[0][1]==-1)
			continue;
		a[0][i] = a[0][i-1]/2;
	}
	double sum = 0;
	for(int i =1; i <h;i++){
		for(int j =1; j <w;j++){
			if(a[i][j-1]==-1 && a[i-1][j]!=-1){
				a[i][j] = a[i-1][j]/2;
				sum += a[i][j];
				continue;
			}
			else if(a[i-1][j]==-1 && a[i][j-1]!=-1){
				a[i][j] = a[i][j-1]/2;
				sum += a[i][j];
				continue;
			}
			else if(a[i][j]!=-1){
				a[i][j] = (a[i-1][j]+a[i][j-1])/2;
				sum += a[i][j];
				continue;
			}
		}
	}
	cout << sum << endl;
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

