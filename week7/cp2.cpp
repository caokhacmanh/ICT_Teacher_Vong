#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("cp2.inp", "r", stdin);
    freopen("cp2.out", "w", stdout);
    long long q, n, m = 0;
    cin >> q;
    for(long long x = 0; x < q; ++x){
        cin >> n;
        --n;
        m = sqrt(n);
        ++m;
        m = m*m;
        cout << m << "\n";
    }
}