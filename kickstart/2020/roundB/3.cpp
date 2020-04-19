#include<bits/stdc++.h>

#define ll long long

using namespace std;

bool check(string a){
	for(char s:a)
		if(s >='2' && s <='9')
			return true;
	return false;
}

void solve(){
	string s;
	cin >> s;
	reverse(s.begin(),s.end());
	while(check(ans)){
		int i = 0;
		while(i != (int)s.end()){
			if(s[i]==')'){
				string temp;
				
			}
		}
	}
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

