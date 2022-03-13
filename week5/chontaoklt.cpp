#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chontaoklt.inp", "r", stdin);
    freopen("chontaoklt.out", "w", stdout);
    int n = 0, tong = 0, bidu = 0, test = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        tong += a[i];
        b[i] = a[i] % 3;
    }
    bidu = tong % 3;
    if(bidu == 0){
        cout << n;
    }
    if(bidu == 1){
        for(int i = 0; i < n; ++i){
            if(b[i] == 1){
                test = 1;
            }
        }
        if(test == 1){
            cout << n-1;
        }else{
            cout << n-2;
        }
    }
    if(bidu == 2){
        for(int i = 0; i < n; ++i){
            if(b[i] == 2){
                test = 1;
            }
        }
        if(test == 1){
            cout << n-1;
        }else{
            cout << n-2;
        }
    }
}
