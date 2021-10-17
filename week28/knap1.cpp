#include <bits/stdc++.h>
using namespace std;

long long m = 0, ans = 0, n, mv;
long long w[2000002], c[2000002];

void solve(long long x){
    bitset<20> b(x);
    long long ww = 0, cc = 0;
    for(long long i = 0; i < n; ++i){
        if(b[i] == 1){
            ww += w[i];
            cc += c[i];
        }
    }
    if(ww <= m) ans = max(ans, cc);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("knap1.inp", "r", stdin);
    freopen("knap1.out", "w", stdout);
    cin >> n >> m;
    for(long long i = 0; i < n; i++){
        cin >> w[i] >> c[i];
    }
    mv = 1 << n;
    for(long long i = 1; i < mv; ++i){
        solve(i);
    }
    cout << ans;
}