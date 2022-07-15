#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = 0;

// optional
int rr[200005];


// funcs


int main(){


	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("shoes.inp", "r", stdin);
	freopen("shoes.out", "w", stdout);
	
	cin >> n >> k;
	for(int i = 0; i < n; ++i){
		cin >> rr[i];
	}
	sort(rr, rr + n);
	reverse(rr, rr + n);
	
	for(int i = 0; i < n - 1; ++i){
		if(abs(rr[i]-rr[i+1]) <= k){
			++ans;
			++i;
		}
	}
	cout << ans << "\n";





}







