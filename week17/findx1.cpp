#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("findx1.inp", "r", stdin);
    freopen("findx1.out", "w", stdout);
    int a, b, c, maxof = 10000000;
    cin >> a >> b >> c;
    int m = min(a, b), n = max(a, b);
    m = min(m, c); n = max(n, c);
    for(int i = m; i <= n; ++i){
        if(abs(i - a) + abs(i - b) + abs(i - c) < maxof){
            maxof = abs(i - a) + abs(i - b) + abs(i - c);
        }
    }
    cout << maxof;
}