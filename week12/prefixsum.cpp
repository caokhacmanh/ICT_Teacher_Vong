#include <bits/stdc++.h>
using namespace std;

long long s[200002], a[200002], j;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Prefixsum.inp", "r", stdin);
    freopen("Prefixsum.out", "w", stdout);
    long long q, n;
    cin >> n;
    cin >> q;
    for(long long i = 1; i <= n; ++i){
        cin >> a[i];
    }
    s[1] = a[1];
    for(long long i = 2; i <= n; ++i){
        s[i] = s[i-1] + a[i];
    }
    while(q--){
        cin >> j;
        cout << s[j] << "\n";
    }
    // long long arr[n];
    // for(long long i = 0; i < n; ++i){
    //     cin >> arr[i];
    // }
    // for(long long j = 0; j < q; ++j){
    //     cin >> n;
    //     long long sum = 0;
    //     for(long long i = 0; i < n; ++i){
    //         sum += arr[i];
    //     }
    //     cout << sum << "\n";
    // }

}