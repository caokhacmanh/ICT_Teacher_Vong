#include <bits/stdc++.h>
using namespace std;

// boost & macro
#pragma GCC optimize("Ofast")
#define ll long long
#define str string
#define pint pair<int, int>
#define pong pair<ll, ll>
#define vint vector<int, int>
#define vong vector<ll, ll>
#define MAX 200005

// necessary
ll n = 0, k = 0, t= 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;
str s;
ll rr[MAX];

// optional
ll tank[MAX];
str s2;

// funcs
ll countof(ll inp){
	ll ret = 0;
	ll lol = 1;
	while(inp != 1){
		++lol;
		while(inp % lol == 0){
			inp /= lol;
			++ret;
		}
	}
	return ret;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("ucln.inp", "r", stdin);
	freopen("ucln.out", "w", stdout);

	cin >> n;
	for(ll i = 0; i < MAX; ++i){
		tank[i] = 0;
	}
	for(ll i = 0; i < n; ++i){
		cin >> rr[i];
		tmp = rr[i];
		run = 1;
		while(tmp != 1){
			++run;
			while(tmp % run == 0){
				tmp /= run;
				++tank[run];
			}
		}
	}
	tmp = 1;
	for(ll i = 2; i < MAX; ++i){
		tmp *= pow(i, tank[i] / n);
		ins += (tank[i]%n);
	}
	for(ll i = 0; i < n; ++i){
		if(rr[i] <= tmp){
			ans += countof(tmp/__gcd(tmp,rr[i]));
		}else ans += countof(rr[i]/__gcd(rr[i], tmp));
	}
	
	ans /= 2;
	cout << tmp << " " << ans << "\n";
















}



















