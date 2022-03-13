#include <bits/stdc++.h>
using namespace std;

long long int powab(long long int a, long long int b){
    long long powed = 1;
    for(long long i = 0; i < b; ++i){
        powed *= a;
    }
    return powed;
}

int main(){
    freopen("maxpow.inp", "r", stdin);
    freopen("maxpow.out", "w", stdout);
    long long int n, x;
    cin >> n >> x;
    long long int k = 0;
    while(n % powab(x, k) == 0){
        ++k;
    }
    cout << k-1;

}