#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b, bởi vì lúc này a và b bằng nhau
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("cutwood.inp", "r", stdin);
    freopen("cutwood.out", "w", stdout);
    long long x, y;
    cin >> x >> y;
    cout << gcd(x, y);
}