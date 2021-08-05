#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("LengthSt.inp","r",stdin);
    freopen("LengthSt.out","w",stdout);
    string a, b, c, ano;
    cin >> a >> b >> c;
    if (a.length() > b.length()){
        ano = a;
    }else{
        ano = b;
    }
    if (c.length() > ano.length()){
        ano = c;
    }
    cout << ano;

}