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
	freopen("countdivisor.inp", "r", stdin);
	freopen("countdivisor.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll a, b, c;
	cin >> a >> b >> c;
	tmp = min(a, min(b, c));
	tmp = sqrt(tmp);
	for(ll i = 1; i <= tmp; ++i){
		if(a % i == 0 && b % i == 0 && c % i == 0){
			ins = a / i;
			++ans;
			if(b % ins == 0 && c % ins == 0 && ins != i) ++ans;
		}
	}
	cout << ans << "\n";
}

























