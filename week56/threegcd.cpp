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
ll x, y;

// funcs
void sol(){
	ll ret = 1;
	for(ll a = x; a <= y-2; ++a){
		for(ll b = a+1; b <= y-1; ++b){
			for(ll c = b+1; c <= y; ++c){
				ret = max(ret, __gcd(a, __gcd(b, c)));
			}
		}
	}
	cout << ret << "\n";
}

int main(){
	freopen("threegcd.inp", "r", stdin);
	freopen("threegcd.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> x >> y;
	if(x <= 500 && y <= 500){
		sol();
		return 0;
	}
	ans = 1;
	for(ll i = x; i*3 <= y; ++i){
		ans = i;
	}
	cout << ans << "\n";
}

























