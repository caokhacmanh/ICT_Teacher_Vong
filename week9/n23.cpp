#include <bits/stdc++.h>
using namespace std;

bool chk(long long x){
    while(x % 3 != 0){
        x = x / 3;
    }
    while(x % 2 != 0){
        x = x / 2;
    }
    if(x > 1){
        return false;
    }
    // while(x > 1){
    //     if(x % 3 == 0){
    //         x = x / 3;
    //     }
    //     if(x % 2 == 0){
    //         x = x / 2;
    //     }
    //     if(x % 2 != 0 && x % 3 != 0 && x > 1){
    //         return false;
    //     }
    // }
    return true;
}

int main(){
    freopen("n23.inp", "r", stdin);
    freopen("n23.out", "w", stdout);
    long long a, b, all = 0;
    cin >> a >> b;
    for(long long i = a; i <= b; ++i){
        if(chk(i)){
            ++all;
        }
    }
    cout << all;
}