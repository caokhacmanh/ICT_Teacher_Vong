#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;

// optional
long long a[1000001];
long long f[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("selseq.inp", "r", stdin);
    freopen("selseq.out", "w", stdout);

    cin >> n;
    for(long long i = 1; i <= n; ++i){
        cin >> a[i];
    }
    f[1] = a[1];
    f[2] = max(a[1], a[2]);

    for(long long i = 3; i <= n; ++i){
        long long x = a[i];
        long long y = f[i-1];
        long long u = a[i] + f[i-2];
        f[i] = max(x, max(y,u));
    }

    cout << f[n];
}