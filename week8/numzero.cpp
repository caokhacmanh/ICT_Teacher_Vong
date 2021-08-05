#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("numzero.inp", "r", stdin);
    freopen("numzero.out", "w", stdout);
    long long n;
    cin >> n;
    long long mul = 1;
    long long num5 = 0;
    for(long long i = 1; i <= n; ++i){
        long long run = i;
        while(run % 5 == 0){
            ++num5;
            run = run / 5;
        }
    }
    if(n = 0){
        cout << 1;
    }else{
        cout << num5;
    }
}