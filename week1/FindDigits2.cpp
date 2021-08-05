#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("FindDigits2.inp","r", stdin);
    freopen("FindDigits2.out","w", stdout);
    int k, check = 0;
    cin >> k;
    for(int x = 0; x <= 9; ++x){
        for(int y = 0; y < 9; ++y){
            if((2021020210 + y + x * 100000) % k == 0 && 1 <= k && k <= 1000){
                ++check;
            }
        }
    }
    cout << check;
}