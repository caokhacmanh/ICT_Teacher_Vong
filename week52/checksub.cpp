#include <bits/stdc++.h>
using namespace std;        

#pragma GC optimize("O1")

typedef long long ll;

// necessary
ll n = 0, k = 0, ans = 0, tmp = 0, run = 0, ins = 0;
bool chk = 0;
string s;

// optional
string s2;

// funcs


int main(){
	freopen("checksub.inp", "r", stdin);
	freopen("checksub.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> s >> n;
	while(n--){
		cin >> s2;
		if(s2.length() > s.length()){
			cout << "No\n";
			continue;
		}
		run = 0;
		tmp = 0;
		while(run < s.length() && tmp < s2.length()){
			if(s2[tmp] == s[run]){
				++tmp;
			}
			++run;

		}
		if(tmp == s2.length()){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
		
	}


}




















