#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("reformnumber2.inp", "r", stdin);
    freopen("reformnumber2.out", "w", stdout);
    int a, n;
    cin >> a >> n;
    for(int i = 0; i < n; ++i){
        if(a % 2 == 0){
            a += 3;
        }else{
            a += 5;
        }
    }
    cout << a;
}