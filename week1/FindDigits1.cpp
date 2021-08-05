#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("FindDigits1.inp","r", stdin);
    freopen("FindDigits1.out","w", stdout);
    int k, check = 0;
    cin >> k;
    for(int x = 0; x < 9; ++x){
        if((20210 + x) % k == 0){
            cout << x << "\n";
            check = 1;
        }
    }
    if(check == 0){
        cout << "no solution";
    }
}