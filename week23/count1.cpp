#include <bits/stdc++.h>
using namespace std;

bool chek(int n);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("count1.inp", "r", stdin);
    freopen("count1.out", "w", stdout);
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        sum += chek(i);
        // if(chek(i)) cout << i << "i\n";
    }
    cout << sum;
}

bool chek(int n){
    int tmp = n % 10;
    n = n / 10;
    while(n > 0){
        if(tmp == n % 10) return false;
        tmp = n % 10;
        n = n / 10;
    }
    return true;
}