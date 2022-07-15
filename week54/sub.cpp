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
ll m;

// funcs
ll most(ll inp){
	ll l = 0, r = n, mid = (r+l)/2;
	while(l <= r){
		if(rr[mid] == inp || (inp > rr[mid] && rr[mid+1] > inp)){
			return mid;
		}
		if(rr[mid] > inp) r = mid - 1;
		else l = mid + 1;
	}
	return 0;
}

ll least(ll inp){
	ll l = 0, r = n, mid = (r+l)/2;
	while(l <= r){
		if(rr[mid] == inp || (inp < rr[mid] && rr[mid-1] < inp)){
			return mid;
		}
		if(rr[mid] > inp) r = mid - 1;
		else l = mid + 1;
	}
	return n + 1;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("sub.inp", "r", stdin);
	freopen("sub.out", "w", stdout);

	cin >> n >> m >> k;
	rr[0] = 0;
	for(ll i = 1; i <= n; ++i){
		cin >> rr[i];
		rr[i] += rr[i-1];
	}
	ll num1, num2;
	for(ll i = 1; i <= n; ++i){
		num1 = least(rr[i-1]+m);
		cout << "leated\n";
		num2 = most(rr[i-1]+k);
		if(num1 != 0 && num2 != n+1){
			ans += num2 - num1 + 1;
		}
	}
	cout << ans << "\n";















}



















