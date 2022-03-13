#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("moveline.inp", "r", stdin);
    freopen("moveline.out", "w", stdout);
    long long a = 0, b = 0, tmp = 0, run = 0, n;
    bool chk = true;
    string inp;
    cin >> n >> inp;
    for(int i = 0; i < n; ++i){
        if(inp[i] == 'R') ++tmp;
        else --tmp;
    }
    cout << tmp;

}