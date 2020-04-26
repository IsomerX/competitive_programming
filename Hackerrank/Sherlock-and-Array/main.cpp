#include<bits/stdc++.h>

#define ll long long

using namespace std;

string balancedSums(vector<int> arr) {
	int sum = 0; 
	for(int i : arr)
		sum+=i;
	int sum1 = 0;
	for(int i = 0; i < (int)arr.size(); i++){
		sum-=arr[i];
		if(sum==sum1){
			return "YES";
		}
		sum1 +=arr[i];
	}
	return "NO";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	int t, b;
	cin >> t;
	while(t--){
		cin >> b;
		vector<int> a(b);
		for(int i = 0; i < b; i++)
			cin >> a[i];
		cout << balancedSums(a) << endl;
	}	
	return 0;
}

