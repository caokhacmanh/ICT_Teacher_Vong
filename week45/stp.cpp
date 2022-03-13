#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, run = 0 , ins = 0, tmp = 0;
bool chk = false;

// optional


// functions
bool checkPrime(int inp){
    if(inp == 2) return true;
    if(inp < 2) return false;
    
    for(int i = 2; i <= sqrt(inp); ++i){
        if(inp % i == 0) return false;
    }
    return true;
}

int main(){
    freopen("stp.inp", "r", stdin);
    freopen("stp.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    if(n < 4) cout << 0;
    for(int i = 4; i <= n; ++i){
        if(i % 2 == 0) ++ans;
        else ans += checkPrime(i-2);
    }
    cout << ans;
}