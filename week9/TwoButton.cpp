#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("TwoButton.inp", "r", stdin);
    freopen("TwoButton.out", "w", stdout);
    int a, b, x = 2, sum = 0;
    cin >> a >> b;
    int max = a;
    for(int i = 0; i < x; ++i){
        if(b > a){
            max = b;
            --b;
        }else{
            max = a;
            --a;
        }
        sum += max;
    }
    cout << sum;
}