#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tx.inp", "r", stdin);
    freopen("tx.out", "w", stdout);
    long long n;
    cin >> n;
    long long ori = n;
    long long sta = 0;
    n *= 2;
    long long a[n];
    long long outp = 0;
    for(long long i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(long long x = 0; x < ori; ++x){
        for(long long i = sta; i < n; ++i){
            outp += a[i];
        }
        cout << outp << "\n";
        outp = 0;
        --n;
        ++sta;
    }

}