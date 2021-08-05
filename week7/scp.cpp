#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("scp.inp", "r", stdin);
    freopen("scp.out", "w", stdout);
    long long a, b;
    cin >> a >> b;
    --a;
    long long m = sqrt(a);
    long long m2 = sqrt(b);
    cout << m2 - m;
}