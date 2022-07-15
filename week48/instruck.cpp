#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = 0;

// optional
#define shorten 1000000007

// funcs
long long sumof(int inp){
	run = 0;
	long long ret = 0;
	for(; run*(run+1)/2 <= inp; ++run){
		ret += run*run;
		ret = ret % shorten;
	}
	ret += (inp - run*(run-1)/2)*run;
	ret = ret % shorten;
	return ret;
}

int main(){


	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("instruck.inp", "r", stdin);
	freopen("instruck.out", "w", stdout);
	

	cin >> n >> k;
	cout << sumof(k) - sumof(n-1) << "\n";








}







