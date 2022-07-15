#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")

// neccesary
int n = 0, k = 0, ins = 0, ans = 0, tmp = 0, run = 0;
bool chk = 0;

// optional
char c[1002];
string s;

// funcs


int main(){
	freopen("matkhau.inp", "r", stdin);
	freopen("matkhau.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> k;
	for(int t = 0; t < k; ++t){
		cin >> s;
		ins = t;
		for(int i = 'A'; i <= 'Z'; ++i){
			run = 0;
			tmp = i;
			for(int j = 0; j < s.length() && run < 2; ++j){
				if(s[j] == i) ++run;
			}
			if(run == 1) break;
		}
		c[t] = tmp;
	}
	for(int i = 0; i <= ins; ++i){
		cout << c[i];
	}
}
