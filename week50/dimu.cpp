#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = 0;
string s;

// optional
long long rr[20];

// funcs



int main(){
	freopen("dimu.inp", "r", stdin);
	freopen("dimu.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> k;
	while(k--){
		cin >> n;
		ans = 1;
		tmp = 0;
		for(long long i = 0; i < n; ++i){
			cin >> rr[i];
			while(rr[i] % 2 ==0){
				ans *= 2;
				rr[i] /= 2;

			}
			tmp += rr[i];
		}
		sort(rr, rr + n);
		cout << fixed << ans * rr[n-1] + tmp - rr[n-1] << "\n";

	}




}





