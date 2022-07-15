#include <bits/stdc++.h>
using namespace std;

// boost & macro
#pragma optimize("Ofast")
#define MAX 200005
#define pint pair<int, int>
#define pong pair<ll, ll>
#define pool pair<bool, bool>
#define vint vector<int>
#define vong vector<ll>
typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uii;


// necessary
ll n = 0, k = 0, t = 0, tmp = 0, ans = 0, run = 0, ins = 0;
bool chk = 0;
str s;
ll rr[MAX];

// optional


// funcs


int main(){
	freopen("pairequak1.inp", "r", stdin);
	freopen("pairequak1.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	for(ll i = 0; i < n; ++i){
		cin >> rr[i];
	}
	for(ll i = 0; i < n - 1; ++i){
		for(ll j = i+1; j < n; ++j){
			ans += ((rr[i]+rr[j]) == k);
		}
	}
	cout << ans << "\n";
}

























