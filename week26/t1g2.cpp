#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("t1g2.inp", "r", stdin);
    freopen("t1g2.out", "w", stdout);
    int a, b;
    cin >> a >> b;
    int tmp = max(a,b) - min(a,b);
    cout << (tmp / 2) + (tmp % 2);

}