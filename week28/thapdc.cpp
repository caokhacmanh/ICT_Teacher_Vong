#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("thapdc.inp", "r", stdin);
    freopen("thapdc.out", "w", stdout);
    long long n;
    cin >> n;
    long long ans = (n+1) * n / 2;
    cout << ans;
}