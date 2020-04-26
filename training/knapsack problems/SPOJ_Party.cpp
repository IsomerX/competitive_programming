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
	int x = 100,y = 100, temp1,temp2;
	cin >> x >> y;
	while(x != 0 && y != 0){
		vector<pair<int,int>> arr(y+1,make_pair(0,0));
		for(int i = 1; i <= y; i++){
			cin >> temp1 >> temp2;
			arr[i] = make_pair(temp1,temp2);
		}
		vector<vector<pair<int,int>>> a(y+1,vector<pair<int,int>>(x+1, make_pair(0,0)));
		a[0][0].first = 0;
		a[0][0].second = 100;
		for(int i = 0; i <= y; i++){
			for(int j = 0; j <= x; j++)
				a[i][j].first = j;
		}
		for(int i = 1; i <= y; i++){
			for(int j = 0; j <= x; j++){
				a[i][j].first = a[i-1][j].first;
				a[i][j].second = a[i-1][j].second; 
			}
			for(int j = x; j >= 0; j--){
				if(j-arr[i].first == 0){
					a[i][j].second = arr[i].second;
				}
				else if(j-arr[i].second > 0 && a[i][j-arr[i].second].second!=0){
					a[i][j].second += a[i][j-arr[i].second].second;
				}
			}
		}
		for(auto i : a){
			for(auto j : i){
				cout << j.first << " " << j.second << "  ";
			}
			cout << endl;
		}
		cin >> x >> y;
	}
	return 0;
}

