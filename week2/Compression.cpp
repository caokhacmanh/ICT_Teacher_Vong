#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("Compression.inp","r",stdin);
    freopen("Compression.out","w",stdout);
    string a, b;
    int n = 1;
    cin >> a;
    char ano = a[0];
    for(int i = 1; i <= a.length(); ++i){
        if(ano == a[i]){
            ++n;
        }else{
            cout << n << ano;
            n = 1;
            ano = a[i];
        }
    }
}