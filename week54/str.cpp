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
str s2;

// funcs


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("str.inp", "r", stdin);
	freopen("str.out", "w", stdout);

	cin >> s2 >> s;
	for(ll i = 0; i < s.length()-2; ++i){
		if(s[i] == s2[0] && s[i+1] == s2[1] && s[i+2] == s2[2]) ++ans;
	}
	cout << ans << "\n";
	

















}



















