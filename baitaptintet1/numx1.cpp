#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = false;

// optional
long long a, b, c, d;

// funcs

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("numx1.inp", "r", stdin);
    freopen ("numx1.out", "w", stdout);
    
    cin >> a >> b >> c >> d;
    tmp = c*d/__gcd(c,d);
    ans += (long long)(b/c) - (long long)(a/c);
    ans += (a % c == 0);
    ans += (long long)(b/d) - (long long)(a/d);
    ans += (a % d == 0);
    ans -= (long long)(b/tmp) - (long long)(a/tmp);
    ans -= (a % tmp == 0);
    cout << ans;
}