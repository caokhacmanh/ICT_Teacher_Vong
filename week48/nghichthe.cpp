#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = 0;

// optional
int rr[100005];


// funcs


int main(){


	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("nghichthe.inp", "r", stdin);
	freopen("nghichthe.out", "w", stdout);
	
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> rr[i];
	}
	for(int i = 0; i < n - 1; ++i){
		for(int j = i+1; j < n; ++j){
			if(rr[i]>rr[j]) ++ans;
		}
	}
	cout << ans << "\n";






}







