#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    freopen("NumPowerK.inp","r",stdin);
    freopen("NumPowerK.out","w",stdout);
    long long k = 0, x = 0, a = 0, b = 0;
    cin >> a >> b >> k;
    for(long long i = a; pow(i, k) <= b; ++i){
        ++x;
    }
    cout << x;
}