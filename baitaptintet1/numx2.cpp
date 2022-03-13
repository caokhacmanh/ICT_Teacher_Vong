#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = false;

// optional
long long a, b, c, d, e;
long long cd, de, ce, cde;

// funcs

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("numx2.inp", "r", stdin);
    freopen ("numx2.out", "w", stdout);
    
    cin >> a >> b >> c >> d >> e;
    cd = c*d/__gcd(c,d);
    de = d*e/__gcd(d,e);
    ce = c*e/__gcd(c,e);
    cde = ce*d/__gcd(ce,d);
    ans += (long long)(b/c) - (long long)(a/c);
    ans += (a % c == 0);
    ans += (long long)(b/d) - (long long)(a/d);
    ans += (a % d == 0);
    ans += (long long)(b/e) - (long long)(a/e);
    ans += (a % e == 0);

    ans -= (long long)(b/cd) - (long long)(a/cd);
    ans -= (a % cd == 0);
    ans -= (long long)(b/ce) - (long long)(a/ce);
    ans -= (a % ce == 0);
    ans -= (long long)(b/de) - (long long)(a/de);
    ans -= (a % de == 0);
    ans += (long long)(b/cde) - (long long)(a/cde);
    ans += (a % cde == 0);
    cout << ans;
}