#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("fib.inp", "r", stdin);
    freopen("fib.out", "w", stdout);
    long long a = 1, b = 0, tmp = 0, run = 0, inp;
    bool chk = true;
    cin >> inp;
    for(long long i = 0; i < inp; ++i){
        if(chk) b += a;
        else a += b;
        chk = !chk;
    }
    if(chk) cout << b;
    else cout << a;
    
}