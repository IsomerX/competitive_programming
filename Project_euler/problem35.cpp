#include<bits/stdc++.h>

#define ll long long
#define max 1000000

using namespace std;

bool prime[max];

int numberOfDigits(int n) 
{ 
    int cnt = 0; 
    while (n > 0) { 
        cnt++; 
        n /= 10; 
    } 
    return cnt; 
} 

bool cal(int num) 
{ 
    int digits = numberOfDigits(num);
    vector<int> a;
    a.push_back(num);
    for (int i = 0; i < digits - 1; i++) {
        int left = (num % 10) * pow(10, digits - 1) + (num / 10);
        num = left; 
        a.push_back(num);
    } 
    for(int i : a){
		if(prime[i] == 0)
			return 0;
	}
    return 1;
}

void SieveOfEratosthenes(int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
}

int rev(int a){
	int up = 0;
	while(a>0){
		up+=a%10;
		up*=10;
		a /= 10;
	}
	return up/10;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	SieveOfEratosthenes(max);
	int tot = 0;
	for(int i = 2; i <= max; i++){
		if(prime[i])
			if(cal(i)){
				tot++;
			}
	}
	cout << tot << endl;
	return 0;
}

