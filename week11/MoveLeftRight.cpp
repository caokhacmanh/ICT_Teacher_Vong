#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("MoveLeftRight.inp", "r", stdin);
    freopen("MoveLeftRight.out", "w", stdout);
    long long x, k, d;
    cin >> x >> k >> d;

    // x = abs(x);
    // if(x / d >= k){
    //     k -= x / d;
    //     x = x % d;
    // }
    // for(long long i = 0; i < k; ++i){
    //     if(x >= 0){
    //         x -= d;
    //     }else{
    //         x += d;
    //     }
    // }
    // cout << abs(x);

    for(long long i = 0; i < k; ++i){
        if(x > 0){
            if(abs(x - d) <= abs(x + d)){
                x -= d;
            }else{
                x += d;
            }
        }else{
            if(abs(x + d) <= abs(x - d)){
                x += d;
            }else{
                x -= d;
            }
        }
    }
    cout << abs(x);


}