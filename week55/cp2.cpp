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


// funcs


int main(){
	freopen("cp2.inp", "r", stdin);
	freopen("cp2.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n;
		tmp = sqrt(n);
		if(tmp*tmp == n) cout << fixed << n << "\n";
		else{
			cout << fixed << (tmp+1)*(tmp+1) << "\n";
		}
	}




}




















