#include <bits/stdc++.h>
using namespace std;

int a[200], b[200], n, s, e, x, y, u, v;

int main(){
    freopen("math1.inp", "r", stdin);
    freopen("math1.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i <= n; ++i){
        cin >> b[i];
    }
    s = 0;
    for(int i = 2; i <= n; ++i){
        e = a[i]+a[i-1]+b[i]+b[i-1];
        x = e - a[i];
        y = e - b[i];
        u = e - a[i-1];
        v = e - b[i-1];
        s = max({s,x,y,u,v});
    }
    cout << s;
}