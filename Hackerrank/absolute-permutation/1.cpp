#include<bits/stdc++.h>

#define ll long long

using namespace std;

bool check(vector<int> a){
    set<int> s(a.begin(), a.end());
    return s.size() != a.size();
}

vector<int> absolutePermutation(int n, int k) {
    vector<int> a(n,0);
    iota(a.begin(), a.end(), 1);
    if(k == 0)
        return a;
    int d = ceil(n/k);
    int temp = -1;
    for(int i = 0; i < d; i++){
        temp = -temp;
        for(int j = i*k; j < (i+1)*k; j++){
            if(j >= n)
                break;
            a[j] += temp*k;
        }
    }
    int del = *max_element(a.begin(),a.end());
    if(del > n || check(a))
        return vector<int>(1,-1);
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        vector<int> c = absolutePermutation(a, b);
        for(int i : c)
            cout << i << " ";
        cout << endl;
    }    
    return 0;
}

