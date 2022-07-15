#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = 0;
string s;

// optional


// funcs
bool checkPrime(long long inp){
	if(inp == 2) return true;
	if(inp < 2) return false;
	for(long long i = 2; i <= sqrt(inp); ++i)
		if(inp % i == 0) return false;
	return true;
}

long long squared(int inp){
	run = 0;
	long long ret = 1;
	while(inp > 1){
		++run;
		if(checkPrime(run)){
			tmp = 0;
			while(inp % run == 0){
				++tmp;
				inp /= run;
				ret *= run;
			}
			if(tmp % 2 == 1) ret *= run;
		}
	}
	return ret;

}

 int main(){
	freopen("bcp.inp", "r", stdin);
	freopen("bcp.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	cout << squared(n)*squared(k)/__gcd(squared(n), squared(k))<< "\n";
	
	




}





