#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("rgc.inp", "r", stdin);
    freopen("rgc.out", "w", stdout);
    int x = 1, a, n;
    cin >> n;
    for(int l = 0; l < n; ++l){
        cin >> a;
        x = sqrt(a);
        while(a % (x*x) != 0){
            --x;
        }
        cout << x << " ";
        x = x*x;
        cout << a/x << "\n";
    }
}