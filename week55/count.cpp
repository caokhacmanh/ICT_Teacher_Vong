#include <bits/stdc++.h>
using namespace std;

// boost & macro
#pragma optimize("Ofast")
#define ll long long
#define str string
#define MAX 200005
#define pint pair<int, int>
#define pong pair<ll, ll>
#define vint vector<int>
#define vong vector<ll>
#define uii unsigned int

// necessary
ll n = 0, k = 0, t = 0, tmp = 0, ans = 0, run = 0, ins = 0;
bool chk = 0;
str s;
ll rr[MAX];

// optional
uii uiied;

// funcs


int main(){
	freopen("count.inp", "r", stdin);
	freopen("count.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k >> t;
	rr[0] = 0;
	for(ll i = 1;i <= n;++i){
		cin >> uiied;
		if(uiied < k && uiied != 0){
			++rr[i];
		}
		rr[i] += rr[i-1];
	}
	while(t--){
		ll l, r;
		cin >> l >> r;
		cout << rr[r] - rr[l-1] << "\n";
	}



}




















