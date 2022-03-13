#include <bits/stdc++.h>
using namespace std;

long long a[1000001];
long long solve(long long n){
    
    for(long long i = 1; i <= n; ++i) a[i] = i;
    long long x = 0, m = n;
    while(m > 0){
        x = x + m/5;
        m = m/5;
    }
    long long i = 0;
    m = x;
    i = 1;
    while(m > 0){
        if(a[i] % 2 == 0){
            a[i] = a[i] / 2;
            --m;
        }else{
            ++i;
        }
    }
    m = x;
    i = 1;
    while(m > 0){
        if(a[i] % 5 == 0){
            a[i] = a[i] / 5;
            --m;
        }else{
            ++i;
        }
    }
    m = 1;
    for(long long i = 1; i <= n; ++i){
        m = m*a[i];
        m = m%10;
    }
    cout << m << endl;
    return 0;
}

int main(){
    freopen("kk.inp", "r", stdin);
    freopen("kk.out", "w", stdout);

    long long n, x = 1, t;
    cin >> t;
    for(long long j = 0; j < t; ++j){
        cin >> n;
        solve(n);
        // x = 1;
        // cin >> n;
        // for(long long i = 1; i <= n; ++i){
        //     x *= i;
        //     while(x % 10 == 0){
        //         x /= 10;
        //     }
        //     x = x % 10;
        // }
        // cout << x % 10 << "\n";
    }
}