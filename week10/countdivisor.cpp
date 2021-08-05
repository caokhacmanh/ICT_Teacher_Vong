#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("countdivisor.inp", "r", stdin);
    freopen("countdivisor.out", "w", stdout);
    int a, b, c, all = 0;
    cin >> a >> b >> c;
    for(int i = 1; i < min({a,b,c}); ++i){
        if(a%i==0 && b%i==0 && c%i==0){
            ++all;
        }
    }
    cout << all;
}