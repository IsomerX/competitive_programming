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
	    int n;
	    cin >> n;
	    vector<int> a(n, 0), b(n,0);
	    for(int i =0; i <n; i++)
	        cin >> a[i];
	    for(int i = 1; i < n; i++){
	        b[i] = a[i]-a[i-1];
	    }
	    vector<int> ans(n,1);
	    for(int i = 1; i < n; i++){
			if(b[i] <= 2)
				ans[i] += ans[i-1];
	    }
	    int mino = 1000000;
	    for(int i = 1; i <n; i++){
			if(ans[i] == 1)
				mino = min(mino, ans[i-1]);
		}
	    cout << mino << " " << *max_element(ans.begin(),ans.end()) << endl;
	}
	return 0;
}

/*
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
	int t, a, b, x;
	cin >> t;
	while(t--){
		cin >> a >> b;
		vector<int> c;
		for(int i = 0; i < a; i++){
			cin >> x;
			c.push_back(x);
		}
		int cnt = 0; 
		sort(c.begin(), c.end(), greater<int>());
		while(b > 0 && c[0] > 0){
			b -= c[0];
			c[0] = c[0] / 2; 
			sort(c.begin(), c.end(), greater<int>());
			cnt++;
		}
		if(b>0)
			cout << "Evacuate" << endl;
		else
			cout << cnt << endl;
	}	
	return 0;
}

*/
