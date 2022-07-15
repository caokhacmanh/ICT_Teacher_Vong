#include <bits/stdc++.h>
using namespace std;

// necessary
int n = 0, k = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = 0;
string s;

// optional
pair<int, int> rr[200005];

// funcs


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("group.inp", "r", stdin);
	freopen("group.out", "w", stdout);

	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> rr[i].first;
		rr[i].second = i;
	}
	sort(rr, rr + n);
	tmp = rr[0].first;
	/*
	for(int i = 0; i <= n; ++i){
		cout << rr[i] << " ";
	}
	*/
	for(int i = 0; i <= n; ++i){
		if(rr[i].first == tmp){
			++run;
		}else{
			if(run == 1){
				cout << rr[i-1].second + 1 << "\n";
				return 0;
			}
			//cout << tmp << "/" << run << "/" << rr[i] << "\n";
			run = 0;
			tmp = rr[i].first;
			--i;


		}
	}
	cout << -1 << "\n";

	







}



















