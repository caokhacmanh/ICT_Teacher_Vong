// #include <bits/stdc++.h>
// using namespace std;

// const int mod = 1e9 + 7;
// long long n, s = 0;

// int main(){

//     // For input and output
//     freopen("nsquare.inp", "r", stdin);
//     freopen("nsquare.out", "w", stdout);
//     ios::sync_with_stdio(0);
//     cin.tie();
//     cout.tie(0);

//     cin >> n;
//     for(int e = 1; e <= sqrt(n); ++e){
//         s = s + 1+(n/e-e)/2;
//         s = s % mod;
//     }
//     cout << s;

// }

#include <iostream>
using namespace std;
 
int main() {
	int a = 7 ^ 2;
	int b = 5 | 1;
	cout << a + b << endl;
	return 0;
}