#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tapchanle1.inp", "r", stdin);
    freopen("tapchanle1.out", "w", stdout);
    int n = 0;
    cin >> n;
    for(int i = 0; i <= n; ++i){
        if(i % 2 == 1){
            cout << i << " ";
        }
    }
    cout << "\n";
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
}
