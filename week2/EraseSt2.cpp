#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("EraseSt2.inp","r",stdin);
    freopen("EraseSt2.out","w",stdout);
    string a;
    cin >> a;
    a.erase(a.length() - 3, 3);
    cout << a;
}