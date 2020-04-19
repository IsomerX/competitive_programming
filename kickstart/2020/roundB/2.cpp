#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,d;
    cin >> n >> d;
    vector<long long> a(n,0);
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i =n -1;i >=0;i--){
		d-=d%a[i];
	}
	cout<< d << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
    int t;
    cin >> t;
    for (int i=1; i <= t; i++)
    {
        cout << "Case #" << i << ": "; solve();
    }
    return 0;
}
