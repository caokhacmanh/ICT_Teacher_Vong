#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("Cut3.inp","r", stdin);
    freopen("Cut3.out","w", stdout);
    int a, b, out;
    cin >> a >> b;
    out = (a % 3) + (b % 3);
    cout << out;
}