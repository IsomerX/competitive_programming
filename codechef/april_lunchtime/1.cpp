#include<bits/stdc++.h>

#define ll long long


using namespace std;

int main(){
	ll t, a, b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		
		vector<ll> one(a,0);
		vector<ll> two(a,0);
		
		for(ll i = 0; i < a; i++){
		    cin >> one[i];
		}
		for(ll i = 0; i < a; i++){
		    cin >> two[i];
		}
		if(b<=0){   
	        cout<<"no"<<endl;
	        return 0;
		}
		int so(INT_MAX), sz(INT_MAX);
		for(ll i = 0; i < a; i++){
		    if(two[i] && one[i] < so)
		        so = one[i];
		    else if(!two[i] && one[i] < sz)
		        sz = one[i];
		}
		
		
        if((so+sz+b) <= 100)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
	}	
	return 0;
}

