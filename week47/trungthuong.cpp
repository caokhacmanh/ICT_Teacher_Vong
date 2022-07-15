#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")

// neccesary
int n = 0, k = 0, ins = 0, ans = 0, tmp = 0, run = 0;
bool chk = 0;

// optional
pair<int, int> x[200005];
string s;
int a, b;

// funcs


int main(){
	freopen("chonsach.inp", "r", stdin);
	freopen("chonsach.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> k;
	for(int t = 0; t < k; ++t){
		cin >> x[t].first >> x[t].second;
		x[t].first += x[t].second;
	}
	sort(x, x + k);
	reverse(x, x + k);
	tmp = x[0].first;
	ans = 1;
	int d = x[0].first - x[0].second, l = x[0].second;
	for(int i = 1; i < k; ++i){
		if(x[i].first == tmp) continue;
		if(x[i].first - x[i].second < d && x[i].second < l){
			tmp = x[i].first;
			d = x[i].first - x[i].second;
			l = x[i].second;
			++ans;
		}
	}
	cout << ans << "\n";
}
