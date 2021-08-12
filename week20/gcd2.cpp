#include <bits/stdc++.h>
using namespace std;

int n, sum = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sum.inp", "r", stdin);
    freopen("sum.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        sum += n/i;
    }
    cout << sum;
}