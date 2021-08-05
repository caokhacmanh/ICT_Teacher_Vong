#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("NgoKhong.inp", "r", stdin);
    freopen("NgoKhong.out", "w", stdout);
    long long n;
    cin >> n;
    long long all = 1, sum = 0;
    while(n > 0){
        sum += all;
        all *= 2;
        n /= 2;
    }
    cout << sum;

}