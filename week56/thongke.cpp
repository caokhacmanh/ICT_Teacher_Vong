#include <bits/stdc++.h>
using namespace std;

// boost & macro
#pragma optimize("Ofast")
#define MAX 1000005
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
int rr[MAX];

// optional


// funcs


int main(){
	freopen("thongke.inp", "r", stdin);
	freopen("thongke.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	ans = -1;
	cin.ignore();
	for(ll i = 0; i < MAX; ++i) rr[i] = 0;
	for(ll i = 0; i < n; ++i){
		getline(cin, s);
		ins = s.length();
		while(!(s[ins-1] >= '0' && s[ins-1] <= '9')) --ins;
		for(ll j = 4; j > 0; --j){
			rr[i] *= 10;
			rr[i] += s[ins - j] - '0';
		}
	}
	sort(rr, rr + n);
	ll a = rr[0] + 1, b = rr[1] - 1;
	for(ll i = 0; i < n-1; ++i){
		if(rr[i+1]-rr[i]-1 > ans){
			ans = rr[i+1]-rr[i] - 1;
			a = rr[i] + 1; b = rr[i+1] - 1;
			//cout << a << " " << b << "\n";
		}
	}
	if(ans == 0 || ans == -1){
		cout << -1 << "\n";
		return 0;
	}
	cout << ans << "\n";
	cout << a;
	cout << " " << b << "\n";
}

























