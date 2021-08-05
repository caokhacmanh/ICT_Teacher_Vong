#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("product.inp", "r", stdin);
    freopen("product.out", "w", stdout);
    int x, x1 = 1;
    cin >> x;
    while(x > 9){
        x1 = 1;
        while(x > 0){
            if(x % 10 != 0) x1 *= x % 10;
            x = x / 10;
        }
        x = x1;
        
    }
    cout << x;
}