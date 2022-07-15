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

// necessary
ll n = 0, k = 0, t = 0, tmp = 0, ans = 0, run = 0, ins = 0;
bool chk = 0;
str s;
ll rr[MAX];

// optional
int r1[MAX], r2[MAX];

// funcs


int main(){
	//freopen("rgc.inp", "r", stdin);
	//freopen("rgc.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n >> k;
		run = 1;
		for(ll i = 0; i < MAX; ++i){
			r1[i] = 0;
			r2[i] = 0;
		}
		for(ll i = 1; i <= n; ++i){
			run = 1;
			while(i>1){
				++run;
				while(i%run == 0){
					++r1[run];
					i/=run;
				}
			}
		}
		run = 1;
		while(k>1){
			++run;
			while(k%run == 0){
				++r2[run];
				k/=run;
			}
		}
		ans = 999999999999999;
		for(ll i = 0; i < MAX; ++i){
			ans = min(ans, (ll)(r1[i]/r2[i]));
		}
		cout << ans << "\n";

	}















}




















