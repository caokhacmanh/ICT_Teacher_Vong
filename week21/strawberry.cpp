#include <bits/stdc++.h>
using namespace std;

int n, k, a[1001], mv = 0, s = 0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("strawberry.inp", "r", stdin);
    freopen("starwberry.out", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        mv = max(mv, a[i]);
    }
    
}