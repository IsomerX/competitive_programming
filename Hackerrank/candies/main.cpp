#include<bits/stdc++.h>

#define ll long long

using namespace std;

long solve(int t, vector<int> a){
	vector<int> ans(t,1);
	for(int i = 1; i < t; i++){
		if(a[i] > a[i-1]){
            ans[i] = ans[i-1] + 1;
        }
	}
	for(int i = t-2; i >= 0; i--){
		if(a[i] > a[i+1]){
			ans[i] = max(ans[i],ans[i+1]+1);
		}
	}
	long sum = 0;
// 	for(int i : a)
// 	    cout << i << " ";
// 	cout << endl;
	// for(int i : ans)
	//     cout << i << " ";
	// cout << endl;
	for(int i : ans)
		sum += i;
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	vector<int> a(t);
	for(int i = 0; i < t; i++){
		cin >> a[i];
	}
	cout << solve(t, a) << endl;
	return 0;
}

