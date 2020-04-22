#include<bits/stdc++.h>
#include <cstring>

#define ll long long
#define endl "\n"

using namespace std;

bool arr[2001][2001] = {0};

int unboundedKnapsack(int k, vector<int> ar) {
    memset(arr,0,sizeof(arr));
    if(ar.size() == 1){
        int u = k%ar[0];
        return k - u;
    }

    vector<int> a(ar.size()+1, 0);
    for(int i = 1; i < (int)a.size(); i++)
        a[i] = ar[i-1];
    for(int i = 0; i < (int)a.size(); i++)
        arr[i][0] = true;
    for(int i = 1; i < (int)a.size(); i++){
        memcpy(arr[i],arr[i-1],sizeof(arr[i-1]));
        for(int j = 0; j <= k; j++){
            if(arr[i][j-a[i]]){
                arr[i][j] = true;
                if(j == k)
                    return k;
            }
        }
    }
    for(int i = k; i >= 0; i--){
        if(arr[a.size()-1][i])
            return i;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        vector<int> u(a,0);
        for(int i = 0; i < a; i++)
            cin >> u[i];
        cout << unboundedKnapsack(b, u) << endl;
    }    
    return 0;
}
