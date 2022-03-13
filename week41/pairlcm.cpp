#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ans = 0, ins = 0, run = 0, tmp = 0;
bool chk = false;

// optional
long long lcm(long long a, long long b);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("pairlcm.inp", "r", stdin);
    freopen("pairlcm.out", "w", stdout);

    cin >> n;
    for(long long i=n/2; i>=1; --i){
        tmp = (__gcd(i, n-i));
        ans = max(ans, (i*(n-i))/tmp);
        if(tmp == 1) break;
    }
    cout << ans;
}