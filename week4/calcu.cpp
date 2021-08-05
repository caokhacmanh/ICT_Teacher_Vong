#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("Calcu.inp", "r", stdin);
    freopen("Calcu.out", "w", stdout);
    double x = 0, y = 0, ano = 0;
    cin >> x >> y;
    ano = (x + y + x*x + y*y) / (1 + x + y);
    cout << setprecision(3) << fixed << ano;
}