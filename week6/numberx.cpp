#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("numberx.inp", "r", stdin);
    freopen("numberx.out", "w", stdout);
    long long a, b, x = 1;
    cin >> a >> b;
    while(((a+x) % b == 0 && (b+x) % a == 0) == false){
        ++x;
    }
    cout << x;
}