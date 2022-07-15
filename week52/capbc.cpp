#include <bits/stdc++.h>
using namespace std;        

#pragma GC optimize("O1")

typedef long long ll;

// necessary
ll n = 0, k = 0, ans = 0, tmp = 0, run = 0, ins = 0;
bool chk = 0;
string s;

// optional
ll t, l, r;
int rr[200005];

// funcs


int main(){
	freopen("capbc.inp", "r", stdin);
	freopen("capbc.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> t;
	while(t--){
		cin >> n >> l >> r;
		ans = 0;
		for(int i = 0; i < n ; ++i){
			cin >> rr[i];
		}
		for(int i = 0;i < n-1; ++i){
			for(int j = i + 1; j < n; ++j){
				if(rr[i]+rr[j] <= r && rr[i] + rr[j] >= l) ++ans;
			}
		}
		cout << ans << "\n";


	}


}




















