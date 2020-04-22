#include<bits/stdc++.h>

#define ll long long

using namespace std;

bool arr[100][1000] = {0};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	
	int n;
	cin >> n;
	vector<int> a(n+1, 0);
	int tot = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i+1];
		tot+=a[i+1];
		arr[i][0] = true;
	}
	arr[n][0] = true;
	for(int i = 1; i < (int)a.size(); i++){
		memcpy(arr[i],arr[i-1],sizeof(arr[i-1]));
		for(int j = tot+1; j >= 0; j--){
			if(arr[i][j-a[i]]){
				arr[i][j] = true;
			}
		}
	}
	for(int i = 0; i <= tot; i++){
		if(arr[a.size()-1][i])
			cout << i << " ";
	}
	return 0;
}

