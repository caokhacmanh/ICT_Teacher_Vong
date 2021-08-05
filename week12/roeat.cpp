#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("roeat.inp", "r", stdin);
    freopen("roeat.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    int run = 1, tru = 0, tmp = 0;
    for(int i = 1; i <= n; ++i){
        tmp += run;
        run++;
        if(tmp - (n - i) == k){
            cout << n - i;
        }
    }
}