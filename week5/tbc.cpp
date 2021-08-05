#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tbc.inp", "r", stdin);
    freopen("tbc.out", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for(int i = 2; i < n; ++i){
        if(a[i-1] + a[i+1] == a[i] * 2){
            cout << i << "\n";
        }
    }
}
