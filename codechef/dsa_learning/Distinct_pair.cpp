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
	int n, m;
	cin >> n >> m;
	
	int suma = n+m-1;
	vector<int> a(n),b(m);
	int i = 0;
	while(n--){
	    cin >> a[i];
	    i++;
	}
	i = 0;
	while(m--){
	    cin >> b[i];
	    i++;
	}
	unordered_map<int,int> uo;
	int count = 0;
	for(i = 0; i < (int)a.size(); i++){
	    for(int j=0; j < (int)b.size(); j++){
	        int ui = a[i]+b[j];
	        uo[ui]++;
	        if(count != suma && uo[ui] == 1){
	            cout << i << " " << j << endl;
				count++;
			}
			else if(count == suma)
				break;
	    }
	}
	return 0;
}

