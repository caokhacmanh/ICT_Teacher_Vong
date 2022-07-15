#include <bits/stdc++.h>
using namespace std;

// boost and macro
#pragma GCC optimize("Ofast", "unroll-loops")
typedef long long ll;

// necessary
ll n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = 0;
string s;
//ll rr[200005];

// optional


// funcs


int main(){
	freopen("modulo.inp", "r", stdin);
	freopen("modulo.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> k;
	while(k--){
		cin >> n;
		ans = 0;
		for(int i = 0; i < n; ++i){
			cin >> tmp;
			ans += tmp;
		}
		cout << (int)(!(ans % n == 0)) << "\n";
	}








}


















