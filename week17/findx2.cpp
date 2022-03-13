#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("findx2.inp", "r", stdin);
    freopen("findx2.out", "w", stdout);
    int a, b, c, d, maxof = 10000000;
    cin >> a >> b >> c >> d;
    int all = (a+b+c+d) / 5;
    cout << abs(all - a) + abs(all - b) + abs(all - c) + abs(all - d);
    // int m = min(a, b), n = max(a, b);
    // m = min(m, c); n = max(n, c);
    // m = min(m, d); n = max(n, d);
    // for(int i = m; i <= n; ++i){
    //     if(abs(i - a) + abs(i - b) + abs(i - c) + abs(i - d) < maxof){
    //         maxof = abs(i - a) + abs(i - b) + abs(i - c) + abs(i - d);
    //     }
    // }
    // cout << maxof;
}