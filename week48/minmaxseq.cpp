#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = 0;

// optional
pair<int, int> rr[200005];
int mined, maxed;

// funcs


int main(){


	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("minmaxseq.inp", "r", stdin);
	freopen("minmaxseq.out", "w", stdout);
	
	cin >> n;
	int a1 = -99999999, a2 = 0, b1 = 99999999, b2 = 0;
	for(int i = 0; i < n; ++i){
		cin >> rr[i].first;
		rr[i].second = i;
		if(rr[i].first >= a1){
			a1 = rr[i].first;
			a2 = i;
		}
		if(rr[i].first < b1){
			b1 = rr[i].first;
			b2 = i;
		}

	}
	if(a2 < b2){
		for(int i = 0; i < n / 2; ++i){
			tmp = rr[i].first;
			rr[i].first = rr[n-1-i].first;
			rr[n-1-i].first = tmp;
		}
	}
	sort(rr, rr + n);
	mined = 0;
	for(int i = 1; rr[i].first == rr[0].first && i < n; ++i){
		mined = rr[i].second;
		tmp = i;
	}
	maxed = rr[n-1].second;
	for(int i = n - 2; rr[i].first == rr[n-1].first && i > tmp && i >= 0; --i){
		maxed = rr[i].second;
	}
	cout << maxed - mined + 1 << "\n";






}







