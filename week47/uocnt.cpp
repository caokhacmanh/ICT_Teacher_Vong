#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")


bool checkPrime(long long inp){
	if(inp == 2) return true;
	if(inp < 2) return false;
	for(long long i = 2; i <= sqrt(inp); ++i){
		if(inp%i==0) return false;
	}
	return true;
}

int main(){
	freopen("uocnt.inp", "r", stdin);
	freopen("uocnt.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long n, s, i;
	cin >> n;
	s = 0;
	for(long long i = 2; i <= sqrt(n); ++i){
		if(n%i==0){
			++s;
			while(n%i==0) n /= i;
		}
	}
	if(n>1) ++s;
	cout << s;
}
