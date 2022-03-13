#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;

// optional
int f1 = 0, f2 = 1, f3 = f2 + f1 * 2;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("likefib.inp", "r", stdin);
    freopen("likefib.out", "w", stdout);

    cin >> n;
    n -= 2;
    if(n == 1 && n == 2) cout << 1;
    else for(int i = 0; i < n; i++){
        f1 = f2;
        f2 = f3;
        f3 = f2 + f1 * 2;
        f3 %= 2019;
    }
    cout << f3;
}