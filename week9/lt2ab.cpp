#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("lt2ab.inp", "r", stdin);
    freopen("lt2ab.out", "w", stdout);
    long long a, b, all = 0;
    cin >> a >> b;
    for(long long i = 1; i <= b; i *= 2){
        if(i >= a){
            ++all;
        }
    }
    cout << all;
}