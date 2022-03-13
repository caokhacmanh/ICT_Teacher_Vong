#include <bits/stdc++.h>
using namespace std;

bool chek(int n);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("count2.inp", "r", stdin);
    freopen("count2.out", "w", stdout);
    int n, sum = 0;
    cin >> n;
    if(n == 1){
        cout << 10;
        return 0;
    }

    int a = pow(10, n - 1);
    int b = pow(10, n) - 1;
    for(int i = a; i <= b; ++i){
        if(chek(i)) ++sum;
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