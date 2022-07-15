#include <bits/stdc++.h>
using namespace std;

// boost and macro
#pragma GCC optimize("Ofast", "unroll-loops")
typedef long long ll;

// necessary
ll n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = 0;
string s;
int rr[1000002];
bool rr2[1000000002];

// optional


// funcs
int bs(int inp){
	int l = 0, r = n - 1, mid;
	while(l <= r){
		mid = (r+l)/2;
		if(rr[mid] == inp) return mid;
		if(inp > rr[mid]) l = mid + 1;
		if(inp < rr[mid]) r = mid - 1;
	}
	return -1;
}

int main(){
	freopen("countn.inp", "r", stdin);
	freopen("countn.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	for(int i = 0; i < n; ++i){
		cin >> rr[i];
	}
	sort(rr, rr + n);
	for(int i = 0; i < k; ++i){
		cin >> tmp;
		if(bs(tmp) == -1 && rr2[tmp] != 1){
			++ans;
			rr2[tmp] = 1;
		}
		//cout << bs(tmp) << " ";
	}
	//cout << "\n";
	cout << ans << "\n";







}


















