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
	int n,i;
    char t[100];
    cin >> n;
    cin >> t;
    int counter=0;
    for(i=0;i<n;i++)
    {
        if(t[i]=='U')
        {
            if(t[i+1]=='R')
            {
                counter++;
                i=i+1;
            }
            else
                counter++;
        }
        else if(t[i]=='R')
        {
            if(t[i+1]=='U')
            {
                counter++;
                i=i+1;
            }
            else
                counter++;
        }
        
    }
    cout << counter << endl;
	return 0;
}

