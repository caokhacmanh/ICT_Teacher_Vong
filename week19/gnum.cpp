#include <bits/stdc++.h>
using namespace std;

long long arr[20002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("gnum.inp", "r", stdin);
    freopen("gnum.out", "w", stdout);
    long long n, k = 0;
    cin >> n;
    for(long long i = 2; i <= n; ++i){
        while(n % i == 0){
            ++k;
            n /= i;
        }
    }
    cout << k;
}