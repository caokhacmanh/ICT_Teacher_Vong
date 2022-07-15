#include <bits/stdc++.h>
using namespace std;

// necessary
long long n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;
string s;

// optional
long long x, y ,z;

// funcs


int main(){
	freopen("tbg.inp", "r", stdin);
	freopen("tbg.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> x >> y >> z;
	ans = z*(x-y);
	if(ans % y > 0) cout << ans/y+1 << "\n";
	else cout << ans/y << "\n";

}
