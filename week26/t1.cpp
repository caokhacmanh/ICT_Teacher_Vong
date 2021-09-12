#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("t1.inp", "r", stdin);
    freopen("t1.out", "w", stdout);
    int a, b, c, tmp;
    cin >> a >> b >> c;
    tmp = max(a, b);
    tmp = max(tmp, c);
    cout << (3 * tmp) - a - b - c;

}