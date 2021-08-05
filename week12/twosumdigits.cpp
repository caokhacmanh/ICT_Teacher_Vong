#include <bits/stdc++.h>
using namespace std;

int doit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    freopen("TwoSumdigits.inp", "r", stdin);
    freopen("TwoSumdigits.out", "w", stdout);
    int a, b;
    cin >> a >> b;
    cout << doit(a) + doit(b);
}