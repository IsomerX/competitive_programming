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
	int t, a, b;
	cin >> t;
	for(int o = 1; o <= t; o++){
		cin >> a >> b;
		vector<int> c(a,0);
		bool f=0;
		map<int,int> op;
		for(int i = 0; i < c.size(); i++){
			cin >> c[i];
			op[c[i]]++;
			if(op[c[i]] >= b)
				f=1;
		}
		int temp = 0;
		if(f==0){
			sort(c.begin(),c.end());
			int y = c[b-1];
			for(int i = 0; i < b; i++)
				temp += c[i] - y;
		}
		else
			temp = 0;
		cout << "Case #" << o << ": " << -temp << endl;
	}
	return 0;
}

