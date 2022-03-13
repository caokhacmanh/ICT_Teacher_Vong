#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = false;

// optional


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("productmax.inp", "r", stdin);
    freopen("productmax.out", "w", stdout);

    cin >> n;
    k = n / 2;
    tmp = k;
    if(k+k!=n) ++tmp;
    cout << k*tmp;
}