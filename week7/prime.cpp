#include <bits/stdc++.h>
using namespace std;

int check(int n){
    int cmk = 2;
    for(int i = 2; i < n; ++i){
        if(n % i == 0){
            ++cmk;
        }
    }
    return cmk;
}

int main(){
    freopen("prime.inp", "r", stdin);
    freopen("prime.out", "w", stdout);
    int n, sumall = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        if(check(i) == 3){
            ++sumall;
        }
    }
    cout << sumall;
}