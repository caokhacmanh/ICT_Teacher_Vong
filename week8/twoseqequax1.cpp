#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("TwoSeqEquaX1.inp", "r", stdin);
    freopen("TwoSeqEquaX1.out", "w", stdout);
    int n, m, x;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }
    cin >> x;

    int outp = 0;
    for(int i = 0; i < n; ++i){
        for(int ii = 0; ii < m; ++ii){
            if(a[i] + b[ii] == x){
                ++outp;
            }
        }
    }
    cout << outp;
}