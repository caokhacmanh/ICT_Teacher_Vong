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
	freopen("uoc.inp", "r", stdin);
	freopen("uoc.out", "w", stdout);

	cin >> t;
	while(t--){
		cin >> n;
		tmp = 0;
		for(ll i = 1; i <= sqrt(n); ++i){
			if(n%i==0){
				tmp += i;
				if(i != n/i) tmp += n/i;
			}
		}
		ans += (tmp%2 == 0);
	
	}
	cout << ans << "\n";

















}



















