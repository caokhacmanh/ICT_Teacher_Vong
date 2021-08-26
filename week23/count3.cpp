#include <bits/stdc++.h>
using namespace std;

bool chek(int n);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("count3.inp", "r", stdin);
    freopen("count3.out", "w", stdout);
    int n;
    cin >> n;
    long long ans = 3 * (pow(2, n - 1));
    cout << ans;
}