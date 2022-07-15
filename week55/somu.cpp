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
#define ull unsigned long long

// necessary
ull n = 0, k = 0, t = 0, tmp = 0, ans = 0, run = 0, ins = 0;
bool chk = 0;
str s;
ll rr[MAX];

// optional
int r1[MAX], r2[MAX];

// funcs
ll count(ll a){
	ll x, ret=0;
	for(ll i = 1; i <= a; ++i){
		x = i;
		while(x%k == 0){
			++ret;
			x/=k;
		}
	}
	return ret;
}


int main(){
	freopen("somu.inp", "r", stdin);
	freopen("somu.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << count(n) << "\n";
	}















}




















